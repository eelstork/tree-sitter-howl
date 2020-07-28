#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_id = 1,
  anon_sym_public = 2,
  anon_sym_internal = 3,
  anon_sym_protected = 4,
  anon_sym_private = 5,
  anon_sym_static = 6,
  anon_sym_ = 7,
  anon_sym_2 = 8,
  anon_sym_class = 9,
  anon_sym_interface = 10,
  anon_sym_struct = 11,
  anon_sym_enum = 12,
  anon_sym_var = 13,
  anon_sym_3 = 14,
  anon_sym_if = 15,
  anon_sym_else = 16,
  anon_sym_foreach = 17,
  anon_sym_in = 18,
  anon_sym_for = 19,
  anon_sym_do = 20,
  anon_sym_while = 21,
  anon_sym_switch = 22,
  anon_sym_case = 23,
  anon_sym_break = 24,
  anon_sym_return = 25,
  anon_sym_yield = 26,
  anon_sym_try = 27,
  anon_sym_catch = 28,
  anon_sym_finally = 29,
  anon_sym_from = 30,
  anon_sym_where = 31,
  anon_sym_select = 32,
  anon_sym_throw = 33,
  anon_sym_4 = 34,
  anon_sym_5 = 35,
  anon_sym_6 = 36,
  anon_sym_LPAREN_RPAREN = 37,
  anon_sym_7 = 38,
  anon_sym_8 = 39,
  anon_sym_LPAREN_RPAREN2 = 40,
  anon_sym_9 = 41,
  anon_sym_10 = 42,
  anon_sym_11 = 43,
  anon_sym_12 = 44,
  anon_sym_13 = 45,
  sym_comment = 46,
  anon_sym_using = 47,
  anon_sym_int = 48,
  anon_sym_bool = 49,
  anon_sym_string = 50,
  anon_sym_char = 51,
  anon_sym_float = 52,
  anon_sym_double = 53,
  anon_sym_14 = 54,
  anon_sym_15 = 55,
  anon_sym_16 = 56,
  anon_sym_17 = 57,
  anon_sym_18 = 58,
  anon_sym_19 = 59,
  anon_sym_20 = 60,
  anon_sym_21 = 61,
  aux_sym_z_token1 = 62,
  aux_sym_z_token2 = 63,
  aux_sym_z_token3 = 64,
  sym_str = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  anon_sym_SQUOTE = 68,
  aux_sym_char_token1 = 69,
  sym_escape_sequence = 70,
  sym_int = 71,
  anon_sym_null = 72,
  anon_sym_22 = 73,
  sym_real = 74,
  sym_ = 75,
  sym__e = 76,
  sym_mod = 77,
  sym_cat = 78,
  sym_flow = 79,
  sym_key = 80,
  sym_sym = 81,
  sym_z = 82,
  sym__lit = 83,
  sym_bool = 84,
  sym_char = 85,
  sym_null = 86,
  aux_sym__repeat1 = 87,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_public] = "public",
  [anon_sym_internal] = "internal",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_static] = "static",
  [anon_sym_] = "‒",
  [anon_sym_2] = "‒̥",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_var] = "var",
  [anon_sym_3] = "○",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_foreach] = "foreach",
  [anon_sym_in] = "in",
  [anon_sym_for] = "for",
  [anon_sym_do] = "do",
  [anon_sym_while] = "while",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_break] = "break",
  [anon_sym_return] = "return",
  [anon_sym_yield] = "yield",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [anon_sym_from] = "from",
  [anon_sym_where] = "where",
  [anon_sym_select] = "select",
  [anon_sym_throw] = "throw",
  [anon_sym_4] = "⤴",
  [anon_sym_5] = "⤵",
  [anon_sym_6] = "⮐",
  [anon_sym_LPAREN_RPAREN] = "(˙▿˙)",
  [anon_sym_7] = "↯",
  [anon_sym_8] = "⇤",
  [anon_sym_LPAREN_RPAREN2] = "(╯°□°)╯",
  [anon_sym_9] = "‖",
  [anon_sym_10] = "¿",
  [anon_sym_11] = "፥",
  [anon_sym_12] = "∀",
  [anon_sym_13] = "∈",
  [sym_comment] = "comment",
  [anon_sym_using] = "using",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_14] = "⊐̥",
  [anon_sym_15] = "ㅇ",
  [anon_sym_16] = "ㄹ",
  [anon_sym_17] = "ᆞ",
  [anon_sym_18] = "⊓",
  [anon_sym_19] = "⌢",
  [anon_sym_20] = "→",
  [anon_sym_21] = "⨕",
  [aux_sym_z_token1] = "z_token1",
  [aux_sym_z_token2] = "z_token2",
  [aux_sym_z_token3] = "z_token3",
  [sym_str] = "str",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int] = "int",
  [anon_sym_null] = "null",
  [anon_sym_22] = "∅",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym_mod] = "mod",
  [sym_cat] = "cat",
  [sym_flow] = "flow",
  [sym_key] = "key",
  [sym_sym] = "sym",
  [sym_z] = "z",
  [sym__lit] = "_lit",
  [sym_bool] = "bool",
  [sym_char] = "char",
  [sym_null] = "null",
  [aux_sym__repeat1] = "Σ_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_foreach] = anon_sym_foreach,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_LPAREN_RPAREN2] = anon_sym_LPAREN_RPAREN2,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
  [sym_comment] = sym_comment,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_21] = anon_sym_21,
  [aux_sym_z_token1] = aux_sym_z_token1,
  [aux_sym_z_token2] = aux_sym_z_token2,
  [aux_sym_z_token3] = aux_sym_z_token3,
  [sym_str] = sym_str,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int] = sym_int,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_22] = anon_sym_22,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym_mod] = sym_mod,
  [sym_cat] = sym_cat,
  [sym_flow] = sym_flow,
  [sym_key] = sym_key,
  [sym_sym] = sym_sym,
  [sym_z] = sym_z,
  [sym__lit] = sym__lit,
  [sym_bool] = sym_bool,
  [sym_char] = sym_char,
  [sym_null] = sym_null,
  [aux_sym__repeat1] = aux_sym__repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreach] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_11] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_12] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_13] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_14] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_15] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_17] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_18] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_19] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_20] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_21] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_z_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_z_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_str] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_] = {
    .visible = true,
    .named = true,
  },
  [sym__e] = {
    .visible = false,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_cat] = {
    .visible = true,
    .named = true,
  },
  [sym_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_z] = {
    .visible = true,
    .named = true,
  },
  [sym__lit] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 191) ADVANCE(41);
      if (lookahead == 4965) ADVANCE(42);
      if (lookahead == 8210) ADVANCE(30);
      if (lookahead == 8214) ADVANCE(40);
      if (lookahead == 8594) ADVANCE(51);
      if (lookahead == 8623) ADVANCE(37);
      if (lookahead == 8676) ADVANCE(38);
      if (lookahead == 8704) ADVANCE(43);
      if (lookahead == 8709) ADVANCE(77);
      if (lookahead == 8712) ADVANCE(44);
      if (lookahead == 8848) ADVANCE(11);
      if (lookahead == 8851) ADVANCE(49);
      if (lookahead == 8994) ADVANCE(50);
      if (lookahead == 9675) ADVANCE(32);
      if (lookahead == 10548) ADVANCE(33);
      if (lookahead == 10549) ADVANCE(34);
      if (lookahead == 10773) ADVANCE(52);
      if (lookahead == 11152) ADVANCE(35);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(61);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(66);
      END_STATE();
    case 8:
      if (lookahead == 176) ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 176) ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 729) ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 805) ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 9583) ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 9633) ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 9663) ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 805) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == 729) ADVANCE(14);
      if (lookahead == 9583) ADVANCE(8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(45);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_z_token2);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == 'y') ADVANCE(15);
      if (lookahead == 4510) ADVANCE(16);
      if (lookahead == 12601) ADVANCE(17);
      if (lookahead == 12615) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 82:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 99:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'w') ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 134:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 149:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 155:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_foreach] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(14),
    [sym__e] = STATE(2),
    [sym_mod] = STATE(2),
    [sym_cat] = STATE(2),
    [sym_flow] = STATE(2),
    [sym_key] = STATE(2),
    [sym_sym] = STATE(2),
    [sym_z] = STATE(2),
    [sym__lit] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_char] = STATE(2),
    [sym_null] = STATE(2),
    [aux_sym__repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_foreach] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(15),
    [anon_sym_case] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(15),
    [anon_sym_catch] = ACTIONS(15),
    [anon_sym_finally] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_where] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_throw] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(17),
    [anon_sym_5] = ACTIONS(17),
    [anon_sym_6] = ACTIONS(17),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(17),
    [anon_sym_7] = ACTIONS(17),
    [anon_sym_8] = ACTIONS(17),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(17),
    [anon_sym_10] = ACTIONS(17),
    [anon_sym_11] = ACTIONS(15),
    [anon_sym_12] = ACTIONS(17),
    [anon_sym_13] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_double] = ACTIONS(21),
    [anon_sym_14] = ACTIONS(23),
    [anon_sym_15] = ACTIONS(21),
    [anon_sym_16] = ACTIONS(21),
    [anon_sym_17] = ACTIONS(21),
    [anon_sym_18] = ACTIONS(25),
    [anon_sym_19] = ACTIONS(25),
    [anon_sym_20] = ACTIONS(25),
    [anon_sym_21] = ACTIONS(25),
    [aux_sym_z_token1] = ACTIONS(27),
    [aux_sym_z_token2] = ACTIONS(27),
    [aux_sym_z_token3] = ACTIONS(29),
    [sym_str] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(35),
    [anon_sym_22] = ACTIONS(37),
    [sym_real] = ACTIONS(19),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_id] = ACTIONS(41),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_] = ACTIONS(7),
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_foreach] = ACTIONS(15),
    [anon_sym_in] = ACTIONS(15),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_do] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_switch] = ACTIONS(15),
    [anon_sym_case] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_yield] = ACTIONS(15),
    [anon_sym_try] = ACTIONS(15),
    [anon_sym_catch] = ACTIONS(15),
    [anon_sym_finally] = ACTIONS(15),
    [anon_sym_from] = ACTIONS(15),
    [anon_sym_where] = ACTIONS(15),
    [anon_sym_select] = ACTIONS(15),
    [anon_sym_throw] = ACTIONS(15),
    [anon_sym_4] = ACTIONS(17),
    [anon_sym_5] = ACTIONS(17),
    [anon_sym_6] = ACTIONS(17),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(17),
    [anon_sym_7] = ACTIONS(17),
    [anon_sym_8] = ACTIONS(17),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(17),
    [anon_sym_9] = ACTIONS(17),
    [anon_sym_10] = ACTIONS(17),
    [anon_sym_11] = ACTIONS(15),
    [anon_sym_12] = ACTIONS(17),
    [anon_sym_13] = ACTIONS(17),
    [sym_comment] = ACTIONS(43),
    [anon_sym_using] = ACTIONS(21),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_string] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_double] = ACTIONS(21),
    [anon_sym_14] = ACTIONS(23),
    [anon_sym_15] = ACTIONS(21),
    [anon_sym_16] = ACTIONS(21),
    [anon_sym_17] = ACTIONS(21),
    [anon_sym_18] = ACTIONS(25),
    [anon_sym_19] = ACTIONS(25),
    [anon_sym_20] = ACTIONS(25),
    [anon_sym_21] = ACTIONS(25),
    [aux_sym_z_token1] = ACTIONS(27),
    [aux_sym_z_token2] = ACTIONS(27),
    [aux_sym_z_token3] = ACTIONS(29),
    [sym_str] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_int] = ACTIONS(41),
    [anon_sym_null] = ACTIONS(35),
    [anon_sym_22] = ACTIONS(37),
    [sym_real] = ACTIONS(43),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_id] = ACTIONS(47),
    [anon_sym_public] = ACTIONS(50),
    [anon_sym_internal] = ACTIONS(50),
    [anon_sym_protected] = ACTIONS(50),
    [anon_sym_private] = ACTIONS(50),
    [anon_sym_static] = ACTIONS(50),
    [anon_sym_] = ACTIONS(50),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_interface] = ACTIONS(56),
    [anon_sym_struct] = ACTIONS(56),
    [anon_sym_enum] = ACTIONS(56),
    [anon_sym_var] = ACTIONS(56),
    [anon_sym_3] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_foreach] = ACTIONS(62),
    [anon_sym_in] = ACTIONS(62),
    [anon_sym_for] = ACTIONS(62),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_while] = ACTIONS(62),
    [anon_sym_switch] = ACTIONS(62),
    [anon_sym_case] = ACTIONS(62),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_return] = ACTIONS(62),
    [anon_sym_yield] = ACTIONS(62),
    [anon_sym_try] = ACTIONS(62),
    [anon_sym_catch] = ACTIONS(62),
    [anon_sym_finally] = ACTIONS(62),
    [anon_sym_from] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_select] = ACTIONS(62),
    [anon_sym_throw] = ACTIONS(62),
    [anon_sym_4] = ACTIONS(65),
    [anon_sym_5] = ACTIONS(65),
    [anon_sym_6] = ACTIONS(65),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(65),
    [anon_sym_7] = ACTIONS(65),
    [anon_sym_8] = ACTIONS(65),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(65),
    [anon_sym_9] = ACTIONS(65),
    [anon_sym_10] = ACTIONS(65),
    [anon_sym_11] = ACTIONS(62),
    [anon_sym_12] = ACTIONS(65),
    [anon_sym_13] = ACTIONS(65),
    [sym_comment] = ACTIONS(68),
    [anon_sym_using] = ACTIONS(71),
    [anon_sym_int] = ACTIONS(71),
    [anon_sym_bool] = ACTIONS(71),
    [anon_sym_string] = ACTIONS(71),
    [anon_sym_char] = ACTIONS(71),
    [anon_sym_float] = ACTIONS(71),
    [anon_sym_double] = ACTIONS(71),
    [anon_sym_14] = ACTIONS(74),
    [anon_sym_15] = ACTIONS(71),
    [anon_sym_16] = ACTIONS(71),
    [anon_sym_17] = ACTIONS(71),
    [anon_sym_18] = ACTIONS(77),
    [anon_sym_19] = ACTIONS(77),
    [anon_sym_20] = ACTIONS(77),
    [anon_sym_21] = ACTIONS(77),
    [aux_sym_z_token1] = ACTIONS(80),
    [aux_sym_z_token2] = ACTIONS(80),
    [aux_sym_z_token3] = ACTIONS(83),
    [sym_str] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [sym_int] = ACTIONS(47),
    [anon_sym_null] = ACTIONS(92),
    [anon_sym_22] = ACTIONS(95),
    [sym_real] = ACTIONS(68),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_id] = ACTIONS(100),
    [anon_sym_public] = ACTIONS(100),
    [anon_sym_internal] = ACTIONS(100),
    [anon_sym_protected] = ACTIONS(100),
    [anon_sym_private] = ACTIONS(100),
    [anon_sym_static] = ACTIONS(100),
    [anon_sym_] = ACTIONS(100),
    [anon_sym_2] = ACTIONS(98),
    [anon_sym_class] = ACTIONS(100),
    [anon_sym_interface] = ACTIONS(100),
    [anon_sym_struct] = ACTIONS(100),
    [anon_sym_enum] = ACTIONS(100),
    [anon_sym_var] = ACTIONS(100),
    [anon_sym_3] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [anon_sym_foreach] = ACTIONS(100),
    [anon_sym_in] = ACTIONS(100),
    [anon_sym_for] = ACTIONS(100),
    [anon_sym_do] = ACTIONS(100),
    [anon_sym_while] = ACTIONS(100),
    [anon_sym_switch] = ACTIONS(100),
    [anon_sym_case] = ACTIONS(100),
    [anon_sym_break] = ACTIONS(100),
    [anon_sym_return] = ACTIONS(100),
    [anon_sym_yield] = ACTIONS(100),
    [anon_sym_try] = ACTIONS(100),
    [anon_sym_catch] = ACTIONS(100),
    [anon_sym_finally] = ACTIONS(100),
    [anon_sym_from] = ACTIONS(100),
    [anon_sym_where] = ACTIONS(100),
    [anon_sym_select] = ACTIONS(100),
    [anon_sym_throw] = ACTIONS(100),
    [anon_sym_4] = ACTIONS(98),
    [anon_sym_5] = ACTIONS(98),
    [anon_sym_6] = ACTIONS(98),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(98),
    [anon_sym_7] = ACTIONS(98),
    [anon_sym_8] = ACTIONS(98),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(98),
    [anon_sym_9] = ACTIONS(98),
    [anon_sym_10] = ACTIONS(98),
    [anon_sym_11] = ACTIONS(100),
    [anon_sym_12] = ACTIONS(98),
    [anon_sym_13] = ACTIONS(98),
    [sym_comment] = ACTIONS(98),
    [anon_sym_using] = ACTIONS(100),
    [anon_sym_int] = ACTIONS(100),
    [anon_sym_bool] = ACTIONS(100),
    [anon_sym_string] = ACTIONS(100),
    [anon_sym_char] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_double] = ACTIONS(100),
    [anon_sym_14] = ACTIONS(98),
    [anon_sym_15] = ACTIONS(100),
    [anon_sym_16] = ACTIONS(100),
    [anon_sym_17] = ACTIONS(100),
    [anon_sym_18] = ACTIONS(98),
    [anon_sym_19] = ACTIONS(98),
    [anon_sym_20] = ACTIONS(98),
    [anon_sym_21] = ACTIONS(98),
    [aux_sym_z_token1] = ACTIONS(100),
    [aux_sym_z_token2] = ACTIONS(100),
    [aux_sym_z_token3] = ACTIONS(98),
    [sym_str] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(98),
    [sym_int] = ACTIONS(100),
    [anon_sym_null] = ACTIONS(100),
    [anon_sym_22] = ACTIONS(98),
    [sym_real] = ACTIONS(98),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_id] = ACTIONS(104),
    [anon_sym_public] = ACTIONS(104),
    [anon_sym_internal] = ACTIONS(104),
    [anon_sym_protected] = ACTIONS(104),
    [anon_sym_private] = ACTIONS(104),
    [anon_sym_static] = ACTIONS(104),
    [anon_sym_] = ACTIONS(104),
    [anon_sym_2] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(104),
    [anon_sym_interface] = ACTIONS(104),
    [anon_sym_struct] = ACTIONS(104),
    [anon_sym_enum] = ACTIONS(104),
    [anon_sym_var] = ACTIONS(104),
    [anon_sym_3] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(104),
    [anon_sym_foreach] = ACTIONS(104),
    [anon_sym_in] = ACTIONS(104),
    [anon_sym_for] = ACTIONS(104),
    [anon_sym_do] = ACTIONS(104),
    [anon_sym_while] = ACTIONS(104),
    [anon_sym_switch] = ACTIONS(104),
    [anon_sym_case] = ACTIONS(104),
    [anon_sym_break] = ACTIONS(104),
    [anon_sym_return] = ACTIONS(104),
    [anon_sym_yield] = ACTIONS(104),
    [anon_sym_try] = ACTIONS(104),
    [anon_sym_catch] = ACTIONS(104),
    [anon_sym_finally] = ACTIONS(104),
    [anon_sym_from] = ACTIONS(104),
    [anon_sym_where] = ACTIONS(104),
    [anon_sym_select] = ACTIONS(104),
    [anon_sym_throw] = ACTIONS(104),
    [anon_sym_4] = ACTIONS(102),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(102),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(102),
    [anon_sym_8] = ACTIONS(102),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(102),
    [anon_sym_9] = ACTIONS(102),
    [anon_sym_10] = ACTIONS(102),
    [anon_sym_11] = ACTIONS(104),
    [anon_sym_12] = ACTIONS(102),
    [anon_sym_13] = ACTIONS(102),
    [sym_comment] = ACTIONS(102),
    [anon_sym_using] = ACTIONS(104),
    [anon_sym_int] = ACTIONS(104),
    [anon_sym_bool] = ACTIONS(104),
    [anon_sym_string] = ACTIONS(104),
    [anon_sym_char] = ACTIONS(104),
    [anon_sym_float] = ACTIONS(104),
    [anon_sym_double] = ACTIONS(104),
    [anon_sym_14] = ACTIONS(102),
    [anon_sym_15] = ACTIONS(104),
    [anon_sym_16] = ACTIONS(104),
    [anon_sym_17] = ACTIONS(104),
    [anon_sym_18] = ACTIONS(102),
    [anon_sym_19] = ACTIONS(102),
    [anon_sym_20] = ACTIONS(102),
    [anon_sym_21] = ACTIONS(102),
    [aux_sym_z_token1] = ACTIONS(104),
    [aux_sym_z_token2] = ACTIONS(104),
    [aux_sym_z_token3] = ACTIONS(102),
    [sym_str] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [sym_int] = ACTIONS(104),
    [anon_sym_null] = ACTIONS(104),
    [anon_sym_22] = ACTIONS(102),
    [sym_real] = ACTIONS(102),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_id] = ACTIONS(108),
    [anon_sym_public] = ACTIONS(108),
    [anon_sym_internal] = ACTIONS(108),
    [anon_sym_protected] = ACTIONS(108),
    [anon_sym_private] = ACTIONS(108),
    [anon_sym_static] = ACTIONS(108),
    [anon_sym_] = ACTIONS(108),
    [anon_sym_2] = ACTIONS(106),
    [anon_sym_class] = ACTIONS(108),
    [anon_sym_interface] = ACTIONS(108),
    [anon_sym_struct] = ACTIONS(108),
    [anon_sym_enum] = ACTIONS(108),
    [anon_sym_var] = ACTIONS(108),
    [anon_sym_3] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_else] = ACTIONS(108),
    [anon_sym_foreach] = ACTIONS(108),
    [anon_sym_in] = ACTIONS(108),
    [anon_sym_for] = ACTIONS(108),
    [anon_sym_do] = ACTIONS(108),
    [anon_sym_while] = ACTIONS(108),
    [anon_sym_switch] = ACTIONS(108),
    [anon_sym_case] = ACTIONS(108),
    [anon_sym_break] = ACTIONS(108),
    [anon_sym_return] = ACTIONS(108),
    [anon_sym_yield] = ACTIONS(108),
    [anon_sym_try] = ACTIONS(108),
    [anon_sym_catch] = ACTIONS(108),
    [anon_sym_finally] = ACTIONS(108),
    [anon_sym_from] = ACTIONS(108),
    [anon_sym_where] = ACTIONS(108),
    [anon_sym_select] = ACTIONS(108),
    [anon_sym_throw] = ACTIONS(108),
    [anon_sym_4] = ACTIONS(106),
    [anon_sym_5] = ACTIONS(106),
    [anon_sym_6] = ACTIONS(106),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(106),
    [anon_sym_7] = ACTIONS(106),
    [anon_sym_8] = ACTIONS(106),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(106),
    [anon_sym_9] = ACTIONS(106),
    [anon_sym_10] = ACTIONS(106),
    [anon_sym_11] = ACTIONS(108),
    [anon_sym_12] = ACTIONS(106),
    [anon_sym_13] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [anon_sym_using] = ACTIONS(108),
    [anon_sym_int] = ACTIONS(108),
    [anon_sym_bool] = ACTIONS(108),
    [anon_sym_string] = ACTIONS(108),
    [anon_sym_char] = ACTIONS(108),
    [anon_sym_float] = ACTIONS(108),
    [anon_sym_double] = ACTIONS(108),
    [anon_sym_14] = ACTIONS(106),
    [anon_sym_15] = ACTIONS(108),
    [anon_sym_16] = ACTIONS(108),
    [anon_sym_17] = ACTIONS(108),
    [anon_sym_18] = ACTIONS(106),
    [anon_sym_19] = ACTIONS(106),
    [anon_sym_20] = ACTIONS(106),
    [anon_sym_21] = ACTIONS(106),
    [aux_sym_z_token1] = ACTIONS(108),
    [aux_sym_z_token2] = ACTIONS(108),
    [aux_sym_z_token3] = ACTIONS(106),
    [sym_str] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(106),
    [sym_int] = ACTIONS(108),
    [anon_sym_null] = ACTIONS(108),
    [anon_sym_22] = ACTIONS(106),
    [sym_real] = ACTIONS(106),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym_id] = ACTIONS(112),
    [anon_sym_public] = ACTIONS(112),
    [anon_sym_internal] = ACTIONS(112),
    [anon_sym_protected] = ACTIONS(112),
    [anon_sym_private] = ACTIONS(112),
    [anon_sym_static] = ACTIONS(112),
    [anon_sym_] = ACTIONS(112),
    [anon_sym_2] = ACTIONS(110),
    [anon_sym_class] = ACTIONS(112),
    [anon_sym_interface] = ACTIONS(112),
    [anon_sym_struct] = ACTIONS(112),
    [anon_sym_enum] = ACTIONS(112),
    [anon_sym_var] = ACTIONS(112),
    [anon_sym_3] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(112),
    [anon_sym_else] = ACTIONS(112),
    [anon_sym_foreach] = ACTIONS(112),
    [anon_sym_in] = ACTIONS(112),
    [anon_sym_for] = ACTIONS(112),
    [anon_sym_do] = ACTIONS(112),
    [anon_sym_while] = ACTIONS(112),
    [anon_sym_switch] = ACTIONS(112),
    [anon_sym_case] = ACTIONS(112),
    [anon_sym_break] = ACTIONS(112),
    [anon_sym_return] = ACTIONS(112),
    [anon_sym_yield] = ACTIONS(112),
    [anon_sym_try] = ACTIONS(112),
    [anon_sym_catch] = ACTIONS(112),
    [anon_sym_finally] = ACTIONS(112),
    [anon_sym_from] = ACTIONS(112),
    [anon_sym_where] = ACTIONS(112),
    [anon_sym_select] = ACTIONS(112),
    [anon_sym_throw] = ACTIONS(112),
    [anon_sym_4] = ACTIONS(110),
    [anon_sym_5] = ACTIONS(110),
    [anon_sym_6] = ACTIONS(110),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(110),
    [anon_sym_7] = ACTIONS(110),
    [anon_sym_8] = ACTIONS(110),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(110),
    [anon_sym_9] = ACTIONS(110),
    [anon_sym_10] = ACTIONS(110),
    [anon_sym_11] = ACTIONS(112),
    [anon_sym_12] = ACTIONS(110),
    [anon_sym_13] = ACTIONS(110),
    [sym_comment] = ACTIONS(110),
    [anon_sym_using] = ACTIONS(112),
    [anon_sym_int] = ACTIONS(112),
    [anon_sym_bool] = ACTIONS(112),
    [anon_sym_string] = ACTIONS(112),
    [anon_sym_char] = ACTIONS(112),
    [anon_sym_float] = ACTIONS(112),
    [anon_sym_double] = ACTIONS(112),
    [anon_sym_14] = ACTIONS(110),
    [anon_sym_15] = ACTIONS(112),
    [anon_sym_16] = ACTIONS(112),
    [anon_sym_17] = ACTIONS(112),
    [anon_sym_18] = ACTIONS(110),
    [anon_sym_19] = ACTIONS(110),
    [anon_sym_20] = ACTIONS(110),
    [anon_sym_21] = ACTIONS(110),
    [aux_sym_z_token1] = ACTIONS(112),
    [aux_sym_z_token2] = ACTIONS(112),
    [aux_sym_z_token3] = ACTIONS(110),
    [sym_str] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [sym_int] = ACTIONS(112),
    [anon_sym_null] = ACTIONS(112),
    [anon_sym_22] = ACTIONS(110),
    [sym_real] = ACTIONS(110),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_id] = ACTIONS(116),
    [anon_sym_public] = ACTIONS(116),
    [anon_sym_internal] = ACTIONS(116),
    [anon_sym_protected] = ACTIONS(116),
    [anon_sym_private] = ACTIONS(116),
    [anon_sym_static] = ACTIONS(116),
    [anon_sym_] = ACTIONS(116),
    [anon_sym_2] = ACTIONS(114),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_interface] = ACTIONS(116),
    [anon_sym_struct] = ACTIONS(116),
    [anon_sym_enum] = ACTIONS(116),
    [anon_sym_var] = ACTIONS(116),
    [anon_sym_3] = ACTIONS(114),
    [anon_sym_if] = ACTIONS(116),
    [anon_sym_else] = ACTIONS(116),
    [anon_sym_foreach] = ACTIONS(116),
    [anon_sym_in] = ACTIONS(116),
    [anon_sym_for] = ACTIONS(116),
    [anon_sym_do] = ACTIONS(116),
    [anon_sym_while] = ACTIONS(116),
    [anon_sym_switch] = ACTIONS(116),
    [anon_sym_case] = ACTIONS(116),
    [anon_sym_break] = ACTIONS(116),
    [anon_sym_return] = ACTIONS(116),
    [anon_sym_yield] = ACTIONS(116),
    [anon_sym_try] = ACTIONS(116),
    [anon_sym_catch] = ACTIONS(116),
    [anon_sym_finally] = ACTIONS(116),
    [anon_sym_from] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
    [anon_sym_select] = ACTIONS(116),
    [anon_sym_throw] = ACTIONS(116),
    [anon_sym_4] = ACTIONS(114),
    [anon_sym_5] = ACTIONS(114),
    [anon_sym_6] = ACTIONS(114),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(114),
    [anon_sym_7] = ACTIONS(114),
    [anon_sym_8] = ACTIONS(114),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(114),
    [anon_sym_9] = ACTIONS(114),
    [anon_sym_10] = ACTIONS(114),
    [anon_sym_11] = ACTIONS(116),
    [anon_sym_12] = ACTIONS(114),
    [anon_sym_13] = ACTIONS(114),
    [sym_comment] = ACTIONS(114),
    [anon_sym_using] = ACTIONS(116),
    [anon_sym_int] = ACTIONS(116),
    [anon_sym_bool] = ACTIONS(116),
    [anon_sym_string] = ACTIONS(116),
    [anon_sym_char] = ACTIONS(116),
    [anon_sym_float] = ACTIONS(116),
    [anon_sym_double] = ACTIONS(116),
    [anon_sym_14] = ACTIONS(114),
    [anon_sym_15] = ACTIONS(116),
    [anon_sym_16] = ACTIONS(116),
    [anon_sym_17] = ACTIONS(116),
    [anon_sym_18] = ACTIONS(114),
    [anon_sym_19] = ACTIONS(114),
    [anon_sym_20] = ACTIONS(114),
    [anon_sym_21] = ACTIONS(114),
    [aux_sym_z_token1] = ACTIONS(116),
    [aux_sym_z_token2] = ACTIONS(116),
    [aux_sym_z_token3] = ACTIONS(114),
    [sym_str] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(116),
    [anon_sym_false] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [sym_int] = ACTIONS(116),
    [anon_sym_null] = ACTIONS(116),
    [anon_sym_22] = ACTIONS(114),
    [sym_real] = ACTIONS(114),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym_id] = ACTIONS(120),
    [anon_sym_public] = ACTIONS(120),
    [anon_sym_internal] = ACTIONS(120),
    [anon_sym_protected] = ACTIONS(120),
    [anon_sym_private] = ACTIONS(120),
    [anon_sym_static] = ACTIONS(120),
    [anon_sym_] = ACTIONS(120),
    [anon_sym_2] = ACTIONS(118),
    [anon_sym_class] = ACTIONS(120),
    [anon_sym_interface] = ACTIONS(120),
    [anon_sym_struct] = ACTIONS(120),
    [anon_sym_enum] = ACTIONS(120),
    [anon_sym_var] = ACTIONS(120),
    [anon_sym_3] = ACTIONS(118),
    [anon_sym_if] = ACTIONS(120),
    [anon_sym_else] = ACTIONS(120),
    [anon_sym_foreach] = ACTIONS(120),
    [anon_sym_in] = ACTIONS(120),
    [anon_sym_for] = ACTIONS(120),
    [anon_sym_do] = ACTIONS(120),
    [anon_sym_while] = ACTIONS(120),
    [anon_sym_switch] = ACTIONS(120),
    [anon_sym_case] = ACTIONS(120),
    [anon_sym_break] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(120),
    [anon_sym_yield] = ACTIONS(120),
    [anon_sym_try] = ACTIONS(120),
    [anon_sym_catch] = ACTIONS(120),
    [anon_sym_finally] = ACTIONS(120),
    [anon_sym_from] = ACTIONS(120),
    [anon_sym_where] = ACTIONS(120),
    [anon_sym_select] = ACTIONS(120),
    [anon_sym_throw] = ACTIONS(120),
    [anon_sym_4] = ACTIONS(118),
    [anon_sym_5] = ACTIONS(118),
    [anon_sym_6] = ACTIONS(118),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(118),
    [anon_sym_7] = ACTIONS(118),
    [anon_sym_8] = ACTIONS(118),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(118),
    [anon_sym_9] = ACTIONS(118),
    [anon_sym_10] = ACTIONS(118),
    [anon_sym_11] = ACTIONS(120),
    [anon_sym_12] = ACTIONS(118),
    [anon_sym_13] = ACTIONS(118),
    [sym_comment] = ACTIONS(118),
    [anon_sym_using] = ACTIONS(120),
    [anon_sym_int] = ACTIONS(120),
    [anon_sym_bool] = ACTIONS(120),
    [anon_sym_string] = ACTIONS(120),
    [anon_sym_char] = ACTIONS(120),
    [anon_sym_float] = ACTIONS(120),
    [anon_sym_double] = ACTIONS(120),
    [anon_sym_14] = ACTIONS(118),
    [anon_sym_15] = ACTIONS(120),
    [anon_sym_16] = ACTIONS(120),
    [anon_sym_17] = ACTIONS(120),
    [anon_sym_18] = ACTIONS(118),
    [anon_sym_19] = ACTIONS(118),
    [anon_sym_20] = ACTIONS(118),
    [anon_sym_21] = ACTIONS(118),
    [aux_sym_z_token1] = ACTIONS(120),
    [aux_sym_z_token2] = ACTIONS(120),
    [aux_sym_z_token3] = ACTIONS(118),
    [sym_str] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(118),
    [sym_int] = ACTIONS(120),
    [anon_sym_null] = ACTIONS(120),
    [anon_sym_22] = ACTIONS(118),
    [sym_real] = ACTIONS(118),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [sym_id] = ACTIONS(124),
    [anon_sym_public] = ACTIONS(124),
    [anon_sym_internal] = ACTIONS(124),
    [anon_sym_protected] = ACTIONS(124),
    [anon_sym_private] = ACTIONS(124),
    [anon_sym_static] = ACTIONS(124),
    [anon_sym_] = ACTIONS(124),
    [anon_sym_2] = ACTIONS(122),
    [anon_sym_class] = ACTIONS(124),
    [anon_sym_interface] = ACTIONS(124),
    [anon_sym_struct] = ACTIONS(124),
    [anon_sym_enum] = ACTIONS(124),
    [anon_sym_var] = ACTIONS(124),
    [anon_sym_3] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(124),
    [anon_sym_else] = ACTIONS(124),
    [anon_sym_foreach] = ACTIONS(124),
    [anon_sym_in] = ACTIONS(124),
    [anon_sym_for] = ACTIONS(124),
    [anon_sym_do] = ACTIONS(124),
    [anon_sym_while] = ACTIONS(124),
    [anon_sym_switch] = ACTIONS(124),
    [anon_sym_case] = ACTIONS(124),
    [anon_sym_break] = ACTIONS(124),
    [anon_sym_return] = ACTIONS(124),
    [anon_sym_yield] = ACTIONS(124),
    [anon_sym_try] = ACTIONS(124),
    [anon_sym_catch] = ACTIONS(124),
    [anon_sym_finally] = ACTIONS(124),
    [anon_sym_from] = ACTIONS(124),
    [anon_sym_where] = ACTIONS(124),
    [anon_sym_select] = ACTIONS(124),
    [anon_sym_throw] = ACTIONS(124),
    [anon_sym_4] = ACTIONS(122),
    [anon_sym_5] = ACTIONS(122),
    [anon_sym_6] = ACTIONS(122),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(122),
    [anon_sym_7] = ACTIONS(122),
    [anon_sym_8] = ACTIONS(122),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(122),
    [anon_sym_9] = ACTIONS(122),
    [anon_sym_10] = ACTIONS(122),
    [anon_sym_11] = ACTIONS(124),
    [anon_sym_12] = ACTIONS(122),
    [anon_sym_13] = ACTIONS(122),
    [sym_comment] = ACTIONS(122),
    [anon_sym_using] = ACTIONS(124),
    [anon_sym_int] = ACTIONS(124),
    [anon_sym_bool] = ACTIONS(124),
    [anon_sym_string] = ACTIONS(124),
    [anon_sym_char] = ACTIONS(124),
    [anon_sym_float] = ACTIONS(124),
    [anon_sym_double] = ACTIONS(124),
    [anon_sym_14] = ACTIONS(122),
    [anon_sym_15] = ACTIONS(124),
    [anon_sym_16] = ACTIONS(124),
    [anon_sym_17] = ACTIONS(124),
    [anon_sym_18] = ACTIONS(122),
    [anon_sym_19] = ACTIONS(122),
    [anon_sym_20] = ACTIONS(122),
    [anon_sym_21] = ACTIONS(122),
    [aux_sym_z_token1] = ACTIONS(124),
    [aux_sym_z_token2] = ACTIONS(124),
    [aux_sym_z_token3] = ACTIONS(122),
    [sym_str] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [sym_int] = ACTIONS(124),
    [anon_sym_null] = ACTIONS(124),
    [anon_sym_22] = ACTIONS(122),
    [sym_real] = ACTIONS(122),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_id] = ACTIONS(128),
    [anon_sym_public] = ACTIONS(128),
    [anon_sym_internal] = ACTIONS(128),
    [anon_sym_protected] = ACTIONS(128),
    [anon_sym_private] = ACTIONS(128),
    [anon_sym_static] = ACTIONS(128),
    [anon_sym_] = ACTIONS(128),
    [anon_sym_2] = ACTIONS(126),
    [anon_sym_class] = ACTIONS(128),
    [anon_sym_interface] = ACTIONS(128),
    [anon_sym_struct] = ACTIONS(128),
    [anon_sym_enum] = ACTIONS(128),
    [anon_sym_var] = ACTIONS(128),
    [anon_sym_3] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(128),
    [anon_sym_else] = ACTIONS(128),
    [anon_sym_foreach] = ACTIONS(128),
    [anon_sym_in] = ACTIONS(128),
    [anon_sym_for] = ACTIONS(128),
    [anon_sym_do] = ACTIONS(128),
    [anon_sym_while] = ACTIONS(128),
    [anon_sym_switch] = ACTIONS(128),
    [anon_sym_case] = ACTIONS(128),
    [anon_sym_break] = ACTIONS(128),
    [anon_sym_return] = ACTIONS(128),
    [anon_sym_yield] = ACTIONS(128),
    [anon_sym_try] = ACTIONS(128),
    [anon_sym_catch] = ACTIONS(128),
    [anon_sym_finally] = ACTIONS(128),
    [anon_sym_from] = ACTIONS(128),
    [anon_sym_where] = ACTIONS(128),
    [anon_sym_select] = ACTIONS(128),
    [anon_sym_throw] = ACTIONS(128),
    [anon_sym_4] = ACTIONS(126),
    [anon_sym_5] = ACTIONS(126),
    [anon_sym_6] = ACTIONS(126),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(126),
    [anon_sym_7] = ACTIONS(126),
    [anon_sym_8] = ACTIONS(126),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(126),
    [anon_sym_9] = ACTIONS(126),
    [anon_sym_10] = ACTIONS(126),
    [anon_sym_11] = ACTIONS(128),
    [anon_sym_12] = ACTIONS(126),
    [anon_sym_13] = ACTIONS(126),
    [sym_comment] = ACTIONS(126),
    [anon_sym_using] = ACTIONS(128),
    [anon_sym_int] = ACTIONS(128),
    [anon_sym_bool] = ACTIONS(128),
    [anon_sym_string] = ACTIONS(128),
    [anon_sym_char] = ACTIONS(128),
    [anon_sym_float] = ACTIONS(128),
    [anon_sym_double] = ACTIONS(128),
    [anon_sym_14] = ACTIONS(126),
    [anon_sym_15] = ACTIONS(128),
    [anon_sym_16] = ACTIONS(128),
    [anon_sym_17] = ACTIONS(128),
    [anon_sym_18] = ACTIONS(126),
    [anon_sym_19] = ACTIONS(126),
    [anon_sym_20] = ACTIONS(126),
    [anon_sym_21] = ACTIONS(126),
    [aux_sym_z_token1] = ACTIONS(128),
    [aux_sym_z_token2] = ACTIONS(128),
    [aux_sym_z_token3] = ACTIONS(126),
    [sym_str] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(128),
    [anon_sym_false] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(126),
    [sym_int] = ACTIONS(128),
    [anon_sym_null] = ACTIONS(128),
    [anon_sym_22] = ACTIONS(126),
    [sym_real] = ACTIONS(126),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym_id] = ACTIONS(132),
    [anon_sym_public] = ACTIONS(132),
    [anon_sym_internal] = ACTIONS(132),
    [anon_sym_protected] = ACTIONS(132),
    [anon_sym_private] = ACTIONS(132),
    [anon_sym_static] = ACTIONS(132),
    [anon_sym_] = ACTIONS(132),
    [anon_sym_2] = ACTIONS(130),
    [anon_sym_class] = ACTIONS(132),
    [anon_sym_interface] = ACTIONS(132),
    [anon_sym_struct] = ACTIONS(132),
    [anon_sym_enum] = ACTIONS(132),
    [anon_sym_var] = ACTIONS(132),
    [anon_sym_3] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(132),
    [anon_sym_foreach] = ACTIONS(132),
    [anon_sym_in] = ACTIONS(132),
    [anon_sym_for] = ACTIONS(132),
    [anon_sym_do] = ACTIONS(132),
    [anon_sym_while] = ACTIONS(132),
    [anon_sym_switch] = ACTIONS(132),
    [anon_sym_case] = ACTIONS(132),
    [anon_sym_break] = ACTIONS(132),
    [anon_sym_return] = ACTIONS(132),
    [anon_sym_yield] = ACTIONS(132),
    [anon_sym_try] = ACTIONS(132),
    [anon_sym_catch] = ACTIONS(132),
    [anon_sym_finally] = ACTIONS(132),
    [anon_sym_from] = ACTIONS(132),
    [anon_sym_where] = ACTIONS(132),
    [anon_sym_select] = ACTIONS(132),
    [anon_sym_throw] = ACTIONS(132),
    [anon_sym_4] = ACTIONS(130),
    [anon_sym_5] = ACTIONS(130),
    [anon_sym_6] = ACTIONS(130),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(130),
    [anon_sym_7] = ACTIONS(130),
    [anon_sym_8] = ACTIONS(130),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(130),
    [anon_sym_9] = ACTIONS(130),
    [anon_sym_10] = ACTIONS(130),
    [anon_sym_11] = ACTIONS(132),
    [anon_sym_12] = ACTIONS(130),
    [anon_sym_13] = ACTIONS(130),
    [sym_comment] = ACTIONS(130),
    [anon_sym_using] = ACTIONS(132),
    [anon_sym_int] = ACTIONS(132),
    [anon_sym_bool] = ACTIONS(132),
    [anon_sym_string] = ACTIONS(132),
    [anon_sym_char] = ACTIONS(132),
    [anon_sym_float] = ACTIONS(132),
    [anon_sym_double] = ACTIONS(132),
    [anon_sym_14] = ACTIONS(130),
    [anon_sym_15] = ACTIONS(132),
    [anon_sym_16] = ACTIONS(132),
    [anon_sym_17] = ACTIONS(132),
    [anon_sym_18] = ACTIONS(130),
    [anon_sym_19] = ACTIONS(130),
    [anon_sym_20] = ACTIONS(130),
    [anon_sym_21] = ACTIONS(130),
    [aux_sym_z_token1] = ACTIONS(132),
    [aux_sym_z_token2] = ACTIONS(132),
    [aux_sym_z_token3] = ACTIONS(130),
    [sym_str] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(130),
    [sym_int] = ACTIONS(132),
    [anon_sym_null] = ACTIONS(132),
    [anon_sym_22] = ACTIONS(130),
    [sym_real] = ACTIONS(130),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(134), 1,
      aux_sym_char_token1,
    ACTIONS(136), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 7,
  [SMALL_STATE(15)] = 11,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cat, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Howl(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
