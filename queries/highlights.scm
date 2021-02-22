; highlights.scm

[
  "return"
  "in"
  "struct"
] @keyword

"func" @keyword.function

"for" @repeat

[
  "if"
  "else"
] @conditional

[
  "import"
  "export"
] @include

(int_literal) @number
(float_literal) @number
(double_literal) @number

(bool_literal) @boolean

(comment) @comment

[
  (semi)
  ","
  "."
] @delimiter

[
  "="
  (times)
  (by)
  (plus)
  (minus)
  (mod)
  (mth)
  (lth)
  (meq)
  (leq)
  (eq)
  (neq)
  "->"
  (and)
  (or)
  "::"
  "..."
] @operator

[
  "{"
  "}"
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

(struct_initialization (struct_constructor_initialization
                         (simple_declaration
                           name: (identifier) @constructor
                           )))

(parameters (simple_declaration
                 name: (_) @parameter
                 ))
(parameters (array_declaration
             (simple_declaration
               name: (identifier) @parameter
               )))

(simple_declaration type: (identifier) @type
                    name: (identifier) @variable)

(function_definition
  name: (identifier) @function
  type: (identifier) @type)

(function_call function: (identifier) @function)
(function_call function: (attribute_access
                           struct: (_) @variable
                           attribute: (_) @function.method
                           ))

(attribute_access
  attribute: (_) @field)

(struct_definition
  name: (_) @type
  body: (struct_body
          attribute: (declaration_statement (simple_declaration
                          name: (identifier) @field
                          ))*
          method: (function_definition
                    name: (identifier) @function.method)*
          )
  )

((identifier) @constant.builtin
              (#match? @constant.builtin "this"))
(identifier) @variable
