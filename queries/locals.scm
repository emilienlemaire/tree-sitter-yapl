(function_definition
  name: (identifier) @definition.function) @scope

(parameters (simple_declaration
              name: (identifier)) @defintion.parameter
            )

(struct_constructor_initialization (simple_declaration
                                     name: (identifier) @definition.var))

(struct_definition
  name: (identifier) @definition.type
  body: (struct_body
          method: (function_definition
                    name: (identifier) @definition.method
                    )
          attribute: (_ (simple_declaration
                          name: (identifier) @definition.field
                          ))) @scope)

(simple_declaration
  name: (identifier) @defintion.var)

(identifier) @reference

((simple_declaration
  type: (identifier) @reference)
 (set! reference.kind "type"))

((attribute_access
   attribute: (identifier) @reference)
 (set! reference.kind "field"))

[
  (source_file)
  (if_statement)
  (for_statement)
] @scope

