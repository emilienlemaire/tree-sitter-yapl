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
            //$.struct_definition,
            //$.function_defintion
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

        _values: $ => choice(
            $.identifier,
            $.number,
            $.bool_literal,
            //$.array_access,
            //$.attribute_access
            //$.function_call
        ),

        declaration_statement: $ => seq(
            $._declaration,
            $.semi
        ),

        initialization_statement: $ => seq(
            $._initialization,
            $.semi
        ),

        simple_declaration: $ => seq(
            field('type', $.identifier),
            field('name', $.identifier)
        ),

        array_declaration: $ => seq(
            $.simple_declaration,
            '[',
            field('size', $.number),
            ']'
        ),

        simple_initialization: $ => seq(
            $.simple_declaration,
            '=',
            field('value', $._values)
        ),

        array_initialization: $ => seq(
            $.array_declaration,
            '=',
            $.initializer_list
        ),

        struct_initialization: $ => choice(
            $.struct_constructor_initialization,
            $.struct_list_initialization
        ),

        struct_constructor_initialization: $ => seq(
            $.simple_declaration,
            '(',
            field('values', $.arguments),
            ')'
        ),

        struct_list_initialization: $ => seq(
            $.simple_declaration,
            '=',
            $.initializer_list
        ),

        initializer_list: $ => seq(
            '{',
            field('values', $.arguments),
            '}'
        ),

        arguments: $ => seq(
            $._values,
            repeat(
                seq(
                    ',',
                    $._values
                )
            )
        ),

        bool_literal: $ => choice(
            'true',
            'false'
        ),

        identifier: $ => /([a-zA-Z]|_)+([a-zA-Z0-9]|_)*/,

        number: $ => /\d+/,

        semi: $ => ';'
    }
});

