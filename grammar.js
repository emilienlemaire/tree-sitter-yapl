module.exports = grammar({
    name: 'YAPL',
    rules: {
        source_file: $ => repeat(
            choice(
                $._definition
            )),

        _definition: $ => seq(choice(
            $.declaration_statement,
            $.initialization_statement,
            $.struct_definition,
            $.function_definition
        )),

        _declaration: $ => choice(
            $.simple_declaration,
            $.array_declaration
        ),

        _initialization: $ => choice(
            $.simple_initialization,
            $.array_initialization,
            $.struct_initialization
        ),

        _expression: $ => choice(
            $.identifier,
            $._numbers,
            $.bool_literal,
            $.array_access,
            $.attribute_access,
            $.function_call,
            $._binary_expression,
            $._par_expression
        ),

        _par_expression: $ => seq(
            '(',
            $._expression,
            ')'
        ),


        _statements: $ => choice(
            $.declaration_statement,
            $.initialization_statement,
            $.return_statement
        ),

        _numbers: $ => choice(
            $.int_literal,
            $.float_literal,
            $.double_literal
        ),

        _callable: $ => choice(
            $.identifier,
            $.attribute_access
        ),

        _binary_operator: $ => choice(
            $.plus,
            $.minus,
            $.times,
            $.by,
            $.mod,
            $.lth,
            $.mth,
            $.eq,
            $.leq,
            $.meq,
            $.neq,
            $.or,
            $.and
        ),

        declaration_statement: $ => seq(
            $._declaration,
            $.semi
        ),

        initialization_statement: $ => seq(
            $._initialization,
            $.semi
        ),

        return_statement: $ => seq(
            'return',
            $._expression,
            $.semi
        ),

        function_definition: $ => seq(
            'func',
            field('name', $.identifier),
            field('parameters', $.parameters),
            '->',
            field('type', $.identifier),
            field('body', $.block)
        ),

        struct_definition: $ => seq(
            'struct',
            field('name', $.identifier),
            field('body', $.struct_body)
        ),

        block: $ => seq(
            '{',
            repeat($._statements),
            '}'
        ),

        struct_body: $ => seq(
            '{',
            repeat(
                choice(
                    field('attribute', choice(
                        $.declaration_statement,
                        $.initialization_statement
                    )),
                    field('method', $.function_definition)
                )
            ),
            '}'
        ),

        simple_declaration: $ => seq(
            field('type', $.identifier),
            field('name', $.identifier)
        ),

        array_declaration: $ => seq(
            $.simple_declaration,
            '[',
            field('size', $.int_literal),
            ']'
        ),

        simple_initialization: $ => prec.right(1, seq(
            $.simple_declaration,
            '=',
            field('value', $._expression)
        )),

        array_initialization: $ => prec.right(1, seq(
            $.array_declaration,
            '=',
            $.initializer_list
        )),

        struct_initialization: $ => choice(
            $.struct_constructor_initialization,
            $.struct_list_initialization
        ),

        struct_constructor_initialization: $ => prec.left(15, seq(
            $.simple_declaration,
            field('values', $.arguments),
        )),

        struct_list_initialization: $ => prec.right(1, seq(
            $.simple_declaration,
            '=',
            $.initializer_list
        )),

        initializer_list: $ => seq(
            '{',
            field('values', optional($.arguments_list)),
            '}'
        ),

        parameters: $ => seq(
            '(',
            optional(
                seq(
                    $._declaration,
                    repeat(
                        seq(
                            ',',
                            $._declaration
                        )
                    )
                )
            ),
            ')'
        ),

        arguments: $ => seq(
            '(',
            optional(
                seq(
                    $._expression,
                    repeat(
                        seq(
                            ',',
                            $._expression
                        )
                    )
                )
            ),
            ')'
        ),

        arguments_list: $ => seq(
            $._expression,
            repeat(
                seq(
                    ',',
                    $._expression
                )
            )
        ),


        _binary_expression: $ => choice(
            $.add,
            $.substract,
            $.multiply,
            $.divide,
            $.mod_expr,
            $.lth_cmp,
            $.mth_cmp,
            $.eq_cmp,
            $.neq_cmp,
            $.leq_cmp,
            $.meq_cmp,
            $.and_expr,
            $.or_expr
        ),

        add: $ => prec.left(11, seq(
            field('lhs', $._expression),
            $.plus,
            field('rhs', $._expression)
        )),

        substract: $ => prec.left(11, seq(
            field('lhs', $._expression),
            $.minus,
            field('rhs', $._expression)
        )),

        multiply: $ => prec.left(12, seq(
            field('lhs', $._expression),
            $.times,
            field('rhs', $._expression)
        )),

        divide: $ => prec.left(12, seq(
            field('lhs', $._expression),
            $.by,
            field('rhs', $._expression)
        )),

        mod_expr: $ => prec.left(12, seq(
            field('lhs', $._expression),
            $.mod,
            field('rhs', $._expression)
        )),

        lth_cmp: $ => prec.left(8, seq(
            field('lhs', $._expression),
            $.lth,
            field('rhs', $._expression)
        )),

        mth_cmp: $ => prec.left(8, seq(
            field('lhs', $._expression),
            $.mth,
            field('rhs', $._expression)
        )),

        eq_cmp: $ => prec.left(7, seq(
            field('lhs', $._expression),
            $.eq,
            field('rhs', $._expression)
        )),

        neq_cmp: $ => prec.left(7, seq(
            field('lhs', $._expression),
            $.neq,
            field('rhs', $._expression)
        )),

        leq_cmp: $ => prec.left(8, seq(
            field('lhs', $._expression),
            $.leq,
            field('rhs', $._expression)
        )),

        meq_cmp: $ => prec.left(8, seq(
            field('lhs', $._expression),
            $.meq,
            field('rhs', $._expression)
        )),

        and_expr: $ => prec.left(3, seq(
            field('lhs', $._expression),
            $.and,
            field('rhs', $._expression)
        )),

        or_expr: $ => prec.left(2, seq(
            field('lhs', $._expression),
            $.or,
            field('rhs', $._expression)
        )),

        array_access: $ => prec.left(15, seq(
            field('name', $.identifier),
            '[',
            field('index', $.int_literal),
            ']'
        )),

        attribute_access: $ => prec.left(15, seq(
            field('struct', $.identifier),
            '.',
            field('attribute', $.identifier)
        )),

        function_call: $ => prec.left(15, seq(
            field('function', $._callable),
            field('arguments', $.arguments),
        )),

        int_literal: $ => $._digits,

        float_literal: $ => seq(
            optional($._digits),
            '.',
            $._digits,
            'f'
        ),

        double_literal: $ => seq(
            optional($._digits),
            '.',
            $._digits,
            optional('d')
        ),

        bool_literal: $ => choice(
            'true',
            'false'
        ),

        identifier: $ => /([a-zA-Z]|_)+([a-zA-Z0-9]|_)*/,

        _digits: $ => /\d+/,

        semi: $ => ';',

        plus: $ => '+',

        minus: $ => '-',

        times: $ => '*',

        by: $ => '/',

        mod: $ => '%',

        lth: $ => '<',

        mth: $ => '>',

        eq: $ => '==',

        leq: $ => '<=',

        meq: $ => '>=',

        neq: $ => '!=',

        or: $ => '||',

        and: $ => '&&'
    }
});

