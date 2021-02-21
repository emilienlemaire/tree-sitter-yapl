#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_COMMA = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  sym_identifier = 11,
  sym_number = 12,
  sym_semi = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym__declaration = 16,
  sym__initialization = 17,
  sym__values = 18,
  sym_declaration_statement = 19,
  sym_initialization_statement = 20,
  sym_simple_declaration = 21,
  sym_array_declaration = 22,
  sym_simple_initialization = 23,
  sym_array_initialization = 24,
  sym_struct_initialization = 25,
  sym_struct_constructor_initialization = 26,
  sym_struct_list_initialization = 27,
  sym_initializer_list = 28,
  sym_arguments = 29,
  sym_bool_literal = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_arguments_repeat1 = 32,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_semi] = "semi",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__declaration] = "_declaration",
  [sym__initialization] = "_initialization",
  [sym__values] = "_values",
  [sym_declaration_statement] = "declaration_statement",
  [sym_initialization_statement] = "initialization_statement",
  [sym_simple_declaration] = "simple_declaration",
  [sym_array_declaration] = "array_declaration",
  [sym_simple_initialization] = "simple_initialization",
  [sym_array_initialization] = "array_initialization",
  [sym_struct_initialization] = "struct_initialization",
  [sym_struct_constructor_initialization] = "struct_constructor_initialization",
  [sym_struct_list_initialization] = "struct_list_initialization",
  [sym_initializer_list] = "initializer_list",
  [sym_arguments] = "arguments",
  [sym_bool_literal] = "bool_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_semi] = sym_semi,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__declaration] = sym__declaration,
  [sym__initialization] = sym__initialization,
  [sym__values] = sym__values,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_initialization_statement] = sym_initialization_statement,
  [sym_simple_declaration] = sym_simple_declaration,
  [sym_array_declaration] = sym_array_declaration,
  [sym_simple_initialization] = sym_simple_initialization,
  [sym_array_initialization] = sym_array_initialization,
  [sym_struct_initialization] = sym_struct_initialization,
  [sym_struct_constructor_initialization] = sym_struct_constructor_initialization,
  [sym_struct_list_initialization] = sym_struct_list_initialization,
  [sym_initializer_list] = sym_initializer_list,
  [sym_arguments] = sym_arguments,
  [sym_bool_literal] = sym_bool_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__initialization] = {
    .visible = false,
    .named = true,
  },
  [sym__values] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_initialization_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_array_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_constructor_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_list_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym_initializer_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_size = 2,
  field_type = 3,
  field_value = 4,
  field_values = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_size] = "size",
  [field_type] = "type",
  [field_value] = "value",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_value, 2},
  [3] =
    {field_size, 2},
  [4] =
    {field_values, 2},
  [5] =
    {field_values, 1},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '[') ADVANCE(3);
      if (lookahead == ']') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 1:
      if (eof) ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'l') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'r') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 's') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead == 'a') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_semi);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_semi] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym__definition] = STATE(2),
    [sym__declaration] = STATE(32),
    [sym__initialization] = STATE(29),
    [sym_declaration_statement] = STATE(2),
    [sym_initialization_statement] = STATE(2),
    [sym_simple_declaration] = STATE(11),
    [sym_array_declaration] = STATE(15),
    [sym_simple_initialization] = STATE(29),
    [sym_array_initialization] = STATE(29),
    [sym_struct_initialization] = STATE(29),
    [sym_struct_constructor_initialization] = STATE(20),
    [sym_struct_list_initialization] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_simple_declaration,
    STATE(15), 1,
      sym_array_declaration,
    STATE(32), 1,
      sym__declaration,
    STATE(20), 2,
      sym_struct_constructor_initialization,
      sym_struct_list_initialization,
    STATE(3), 4,
      sym__definition,
      sym_declaration_statement,
      sym_initialization_statement,
      aux_sym_source_file_repeat1,
    STATE(29), 4,
      sym__initialization,
      sym_simple_initialization,
      sym_array_initialization,
      sym_struct_initialization,
  [32] = 8,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(11), 1,
      sym_simple_declaration,
    STATE(15), 1,
      sym_array_declaration,
    STATE(32), 1,
      sym__declaration,
    STATE(20), 2,
      sym_struct_constructor_initialization,
      sym_struct_list_initialization,
    STATE(3), 4,
      sym__definition,
      sym_declaration_statement,
      sym_initialization_statement,
      aux_sym_source_file_repeat1,
    STATE(29), 4,
      sym__initialization,
      sym_simple_initialization,
      sym_array_initialization,
      sym_struct_initialization,
  [64] = 6,
    ACTIONS(14), 1,
      anon_sym_LBRACE,
    ACTIONS(18), 1,
      sym_identifier,
    ACTIONS(20), 1,
      sym_number,
    STATE(22), 1,
      sym_initializer_list,
    ACTIONS(16), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym__values,
      sym_bool_literal,
  [85] = 5,
    ACTIONS(22), 1,
      sym_identifier,
    ACTIONS(24), 1,
      sym_number,
    STATE(24), 1,
      sym_arguments,
    ACTIONS(16), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym__values,
      sym_bool_literal,
  [103] = 5,
    ACTIONS(22), 1,
      sym_identifier,
    ACTIONS(24), 1,
      sym_number,
    STATE(27), 1,
      sym_arguments,
    ACTIONS(16), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym__values,
      sym_bool_literal,
  [121] = 4,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(28), 1,
      sym_number,
    ACTIONS(16), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 2,
      sym__values,
      sym_bool_literal,
  [136] = 3,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(30), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [147] = 3,
    ACTIONS(36), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(34), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [158] = 3,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(39), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [169] = 4,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_EQ,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_semi,
  [182] = 1,
    ACTIONS(49), 4,
      anon_sym_LBRACK,
      anon_sym_EQ,
      anon_sym_LPAREN,
      sym_semi,
  [189] = 1,
    ACTIONS(51), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_semi,
  [196] = 1,
    ACTIONS(34), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [202] = 2,
    ACTIONS(47), 1,
      sym_semi,
    ACTIONS(53), 1,
      anon_sym_EQ,
  [209] = 1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [214] = 1,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [219] = 1,
    ACTIONS(59), 2,
      anon_sym_EQ,
      sym_semi,
  [224] = 2,
    ACTIONS(14), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_initializer_list,
  [231] = 1,
    ACTIONS(61), 1,
      sym_semi,
  [235] = 1,
    ACTIONS(63), 1,
      sym_semi,
  [239] = 1,
    ACTIONS(65), 1,
      sym_semi,
  [243] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [247] = 1,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
  [251] = 1,
    ACTIONS(71), 1,
      sym_semi,
  [255] = 1,
    ACTIONS(73), 1,
      sym_identifier,
  [259] = 1,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
  [263] = 1,
    ACTIONS(77), 1,
      sym_number,
  [267] = 1,
    ACTIONS(79), 1,
      sym_semi,
  [271] = 1,
    ACTIONS(81), 1,
      sym_semi,
  [275] = 1,
    ACTIONS(83), 1,
      sym_semi,
  [279] = 1,
    ACTIONS(85), 1,
      sym_semi,
  [283] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 196,
  [SMALL_STATE(15)] = 202,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 214,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 224,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 235,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 243,
  [SMALL_STATE(24)] = 247,
  [SMALL_STATE(25)] = 251,
  [SMALL_STATE(26)] = 255,
  [SMALL_STATE(27)] = 259,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 267,
  [SMALL_STATE(30)] = 271,
  [SMALL_STATE(31)] = 275,
  [SMALL_STATE(32)] = 279,
  [SMALL_STATE(33)] = 283,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_declaration, 2, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initialization_statement, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 4, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_initialization, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_initialization, 3, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_list_initialization, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_initialization, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_constructor_initialization, 4, .production_id = 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_initializer_list, 3, .production_id = 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YAPL(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
