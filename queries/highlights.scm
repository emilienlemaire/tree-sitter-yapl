; highlights.scm

[
  "func"
  "return"
  "for"
  "in"
  "if"
  "else"
  "struct"
  "import"
  "export"
] @keyword

(int_literal) @number
(float_literal) @number
(double_literal) @number

(bool_literal) @constant

(comment) @comment

(semi) @delimiter

[
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
] @operator

[
  "{"
  "}"
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

(simple_declaration type: (identifier) @type
                    name: (identifier) @variable)
(function_definition
  name: (identifier) @function
  parameters: (parameters
                (simple_declaration
                  type: (identifier) @type
                  name: (identifier) @variable.paramter
                  )*
                )
  type: (identifier) @type)

(function_call function: (identifier) @function)
(function_call function: (attribute_access
                           struct: (_) @variable
                           attribute: (_) @function.method
                           ))

(attribute_access
  struct: (_)
  attribute: (_) @attribute)

(struct_definition
  name: (_) @property
  body: (struct_body
          attribute: (declaration_statement (simple_declaration
                          name: (identifier) @attribute
                          ))*
          method: (function_definition
                    name: (identifier) @function.method)*
          )
  )

(identifier) @variable
