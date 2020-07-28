#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  sym_comment = 15,
  anon_sym_using = 16,
  anon_sym_return = 17,
  anon_sym_int = 18,
  anon_sym_bool = 19,
  anon_sym_string = 20,
  anon_sym_char = 21,
  anon_sym_float = 22,
  anon_sym_double = 23,
  anon_sym_4 = 24,
  anon_sym_5 = 25,
  anon_sym_6 = 26,
  anon_sym_7 = 27,
  anon_sym_8 = 28,
  anon_sym_9 = 29,
  anon_sym_10 = 30,
  anon_sym_11 = 31,
  anon_sym_12 = 32,
  anon_sym_13 = 33,
  anon_sym_14 = 34,
  anon_sym_15 = 35,
  anon_sym_16 = 36,
  aux_sym_z_token1 = 37,
  aux_sym_z_token2 = 38,
  aux_sym_z_token3 = 39,
  sym_str = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_char_token1 = 44,
  sym_escape_sequence = 45,
  sym_int = 46,
  anon_sym_null = 47,
  anon_sym_17 = 48,
  sym_real = 49,
  sym_ = 50,
  sym__e = 51,
  sym_mod = 52,
  sym_cat = 53,
  sym_key = 54,
  sym_sym = 55,
  sym_z = 56,
  sym__lit = 57,
  sym_bool = 58,
  sym_char = 59,
  sym_null = 60,
  aux_sym__repeat1 = 61,
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
  [sym_comment] = "comment",
  [anon_sym_using] = "using",
  [anon_sym_return] = "return",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_char] = "char",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_4] = "⊐̥",
  [anon_sym_5] = "ㅇ",
  [anon_sym_6] = "ㄹ",
  [anon_sym_7] = "ᆞ",
  [anon_sym_8] = "⤴",
  [anon_sym_9] = "⤵",
  [anon_sym_10] = "⊓",
  [anon_sym_11] = "⮐",
  [anon_sym_12] = "⌢",
  [anon_sym_13] = "→",
  [anon_sym_14] = "⨕",
  [anon_sym_15] = "∀",
  [anon_sym_16] = "∈",
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
  [anon_sym_17] = "∅",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym_mod] = "mod",
  [sym_cat] = "cat",
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
  [sym_comment] = sym_comment,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
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
  [anon_sym_17] = anon_sym_17,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym_mod] = sym_mod,
  [sym_cat] = sym_cat,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
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
  [anon_sym_17] = {
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
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 8210) ADVANCE(22);
      if (lookahead == 8594) ADVANCE(34);
      if (lookahead == 8704) ADVANCE(36);
      if (lookahead == 8709) ADVANCE(61);
      if (lookahead == 8712) ADVANCE(37);
      if (lookahead == 8848) ADVANCE(6);
      if (lookahead == 8851) ADVANCE(31);
      if (lookahead == 8994) ADVANCE(33);
      if (lookahead == 9675) ADVANCE(24);
      if (lookahead == 10548) ADVANCE(29);
      if (lookahead == 10549) ADVANCE(30);
      if (lookahead == 10773) ADVANCE(35);
      if (lookahead == 11152) ADVANCE(32);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(26);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(12);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == 805) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == 805) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_14);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(25);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_z_token2);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(60);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
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
      if (lookahead == 4510) ADVANCE(14);
      if (lookahead == 12601) ADVANCE(15);
      if (lookahead == 12615) ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'v') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 100:
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
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(13),
    [sym__e] = STATE(2),
    [sym_mod] = STATE(2),
    [sym_cat] = STATE(2),
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
    [sym_comment] = ACTIONS(15),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_4] = ACTIONS(19),
    [anon_sym_5] = ACTIONS(17),
    [anon_sym_6] = ACTIONS(17),
    [anon_sym_7] = ACTIONS(17),
    [anon_sym_8] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(21),
    [anon_sym_11] = ACTIONS(21),
    [anon_sym_12] = ACTIONS(21),
    [anon_sym_13] = ACTIONS(21),
    [anon_sym_14] = ACTIONS(21),
    [anon_sym_15] = ACTIONS(21),
    [anon_sym_16] = ACTIONS(21),
    [aux_sym_z_token1] = ACTIONS(23),
    [aux_sym_z_token2] = ACTIONS(23),
    [aux_sym_z_token3] = ACTIONS(25),
    [sym_str] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_17] = ACTIONS(33),
    [sym_real] = ACTIONS(15),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_id] = ACTIONS(37),
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
    [sym_comment] = ACTIONS(39),
    [anon_sym_using] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_string] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_float] = ACTIONS(17),
    [anon_sym_double] = ACTIONS(17),
    [anon_sym_4] = ACTIONS(19),
    [anon_sym_5] = ACTIONS(17),
    [anon_sym_6] = ACTIONS(17),
    [anon_sym_7] = ACTIONS(17),
    [anon_sym_8] = ACTIONS(21),
    [anon_sym_9] = ACTIONS(21),
    [anon_sym_10] = ACTIONS(21),
    [anon_sym_11] = ACTIONS(21),
    [anon_sym_12] = ACTIONS(21),
    [anon_sym_13] = ACTIONS(21),
    [anon_sym_14] = ACTIONS(21),
    [anon_sym_15] = ACTIONS(21),
    [anon_sym_16] = ACTIONS(21),
    [aux_sym_z_token1] = ACTIONS(23),
    [aux_sym_z_token2] = ACTIONS(23),
    [aux_sym_z_token3] = ACTIONS(25),
    [sym_str] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [sym_int] = ACTIONS(37),
    [anon_sym_null] = ACTIONS(31),
    [anon_sym_17] = ACTIONS(33),
    [sym_real] = ACTIONS(39),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_id] = ACTIONS(43),
    [anon_sym_public] = ACTIONS(46),
    [anon_sym_internal] = ACTIONS(46),
    [anon_sym_protected] = ACTIONS(46),
    [anon_sym_private] = ACTIONS(46),
    [anon_sym_static] = ACTIONS(46),
    [anon_sym_] = ACTIONS(46),
    [anon_sym_2] = ACTIONS(49),
    [anon_sym_class] = ACTIONS(52),
    [anon_sym_interface] = ACTIONS(52),
    [anon_sym_struct] = ACTIONS(52),
    [anon_sym_enum] = ACTIONS(52),
    [anon_sym_var] = ACTIONS(52),
    [anon_sym_3] = ACTIONS(55),
    [sym_comment] = ACTIONS(58),
    [anon_sym_using] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(61),
    [anon_sym_int] = ACTIONS(61),
    [anon_sym_bool] = ACTIONS(61),
    [anon_sym_string] = ACTIONS(61),
    [anon_sym_char] = ACTIONS(61),
    [anon_sym_float] = ACTIONS(61),
    [anon_sym_double] = ACTIONS(61),
    [anon_sym_4] = ACTIONS(64),
    [anon_sym_5] = ACTIONS(61),
    [anon_sym_6] = ACTIONS(61),
    [anon_sym_7] = ACTIONS(61),
    [anon_sym_8] = ACTIONS(67),
    [anon_sym_9] = ACTIONS(67),
    [anon_sym_10] = ACTIONS(67),
    [anon_sym_11] = ACTIONS(67),
    [anon_sym_12] = ACTIONS(67),
    [anon_sym_13] = ACTIONS(67),
    [anon_sym_14] = ACTIONS(67),
    [anon_sym_15] = ACTIONS(67),
    [anon_sym_16] = ACTIONS(67),
    [aux_sym_z_token1] = ACTIONS(70),
    [aux_sym_z_token2] = ACTIONS(70),
    [aux_sym_z_token3] = ACTIONS(73),
    [sym_str] = ACTIONS(58),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [sym_int] = ACTIONS(43),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_17] = ACTIONS(85),
    [sym_real] = ACTIONS(58),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_id] = ACTIONS(90),
    [anon_sym_public] = ACTIONS(90),
    [anon_sym_internal] = ACTIONS(90),
    [anon_sym_protected] = ACTIONS(90),
    [anon_sym_private] = ACTIONS(90),
    [anon_sym_static] = ACTIONS(90),
    [anon_sym_] = ACTIONS(90),
    [anon_sym_2] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_interface] = ACTIONS(90),
    [anon_sym_struct] = ACTIONS(90),
    [anon_sym_enum] = ACTIONS(90),
    [anon_sym_var] = ACTIONS(90),
    [anon_sym_3] = ACTIONS(88),
    [sym_comment] = ACTIONS(88),
    [anon_sym_using] = ACTIONS(90),
    [anon_sym_return] = ACTIONS(90),
    [anon_sym_int] = ACTIONS(90),
    [anon_sym_bool] = ACTIONS(90),
    [anon_sym_string] = ACTIONS(90),
    [anon_sym_char] = ACTIONS(90),
    [anon_sym_float] = ACTIONS(90),
    [anon_sym_double] = ACTIONS(90),
    [anon_sym_4] = ACTIONS(88),
    [anon_sym_5] = ACTIONS(90),
    [anon_sym_6] = ACTIONS(90),
    [anon_sym_7] = ACTIONS(90),
    [anon_sym_8] = ACTIONS(88),
    [anon_sym_9] = ACTIONS(88),
    [anon_sym_10] = ACTIONS(88),
    [anon_sym_11] = ACTIONS(88),
    [anon_sym_12] = ACTIONS(88),
    [anon_sym_13] = ACTIONS(88),
    [anon_sym_14] = ACTIONS(88),
    [anon_sym_15] = ACTIONS(88),
    [anon_sym_16] = ACTIONS(88),
    [aux_sym_z_token1] = ACTIONS(90),
    [aux_sym_z_token2] = ACTIONS(90),
    [aux_sym_z_token3] = ACTIONS(88),
    [sym_str] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [sym_int] = ACTIONS(90),
    [anon_sym_null] = ACTIONS(90),
    [anon_sym_17] = ACTIONS(88),
    [sym_real] = ACTIONS(88),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_id] = ACTIONS(94),
    [anon_sym_public] = ACTIONS(94),
    [anon_sym_internal] = ACTIONS(94),
    [anon_sym_protected] = ACTIONS(94),
    [anon_sym_private] = ACTIONS(94),
    [anon_sym_static] = ACTIONS(94),
    [anon_sym_] = ACTIONS(94),
    [anon_sym_2] = ACTIONS(92),
    [anon_sym_class] = ACTIONS(94),
    [anon_sym_interface] = ACTIONS(94),
    [anon_sym_struct] = ACTIONS(94),
    [anon_sym_enum] = ACTIONS(94),
    [anon_sym_var] = ACTIONS(94),
    [anon_sym_3] = ACTIONS(92),
    [sym_comment] = ACTIONS(92),
    [anon_sym_using] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(94),
    [anon_sym_int] = ACTIONS(94),
    [anon_sym_bool] = ACTIONS(94),
    [anon_sym_string] = ACTIONS(94),
    [anon_sym_char] = ACTIONS(94),
    [anon_sym_float] = ACTIONS(94),
    [anon_sym_double] = ACTIONS(94),
    [anon_sym_4] = ACTIONS(92),
    [anon_sym_5] = ACTIONS(94),
    [anon_sym_6] = ACTIONS(94),
    [anon_sym_7] = ACTIONS(94),
    [anon_sym_8] = ACTIONS(92),
    [anon_sym_9] = ACTIONS(92),
    [anon_sym_10] = ACTIONS(92),
    [anon_sym_11] = ACTIONS(92),
    [anon_sym_12] = ACTIONS(92),
    [anon_sym_13] = ACTIONS(92),
    [anon_sym_14] = ACTIONS(92),
    [anon_sym_15] = ACTIONS(92),
    [anon_sym_16] = ACTIONS(92),
    [aux_sym_z_token1] = ACTIONS(94),
    [aux_sym_z_token2] = ACTIONS(94),
    [aux_sym_z_token3] = ACTIONS(92),
    [sym_str] = ACTIONS(92),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [sym_int] = ACTIONS(94),
    [anon_sym_null] = ACTIONS(94),
    [anon_sym_17] = ACTIONS(92),
    [sym_real] = ACTIONS(92),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_id] = ACTIONS(98),
    [anon_sym_public] = ACTIONS(98),
    [anon_sym_internal] = ACTIONS(98),
    [anon_sym_protected] = ACTIONS(98),
    [anon_sym_private] = ACTIONS(98),
    [anon_sym_static] = ACTIONS(98),
    [anon_sym_] = ACTIONS(98),
    [anon_sym_2] = ACTIONS(96),
    [anon_sym_class] = ACTIONS(98),
    [anon_sym_interface] = ACTIONS(98),
    [anon_sym_struct] = ACTIONS(98),
    [anon_sym_enum] = ACTIONS(98),
    [anon_sym_var] = ACTIONS(98),
    [anon_sym_3] = ACTIONS(96),
    [sym_comment] = ACTIONS(96),
    [anon_sym_using] = ACTIONS(98),
    [anon_sym_return] = ACTIONS(98),
    [anon_sym_int] = ACTIONS(98),
    [anon_sym_bool] = ACTIONS(98),
    [anon_sym_string] = ACTIONS(98),
    [anon_sym_char] = ACTIONS(98),
    [anon_sym_float] = ACTIONS(98),
    [anon_sym_double] = ACTIONS(98),
    [anon_sym_4] = ACTIONS(96),
    [anon_sym_5] = ACTIONS(98),
    [anon_sym_6] = ACTIONS(98),
    [anon_sym_7] = ACTIONS(98),
    [anon_sym_8] = ACTIONS(96),
    [anon_sym_9] = ACTIONS(96),
    [anon_sym_10] = ACTIONS(96),
    [anon_sym_11] = ACTIONS(96),
    [anon_sym_12] = ACTIONS(96),
    [anon_sym_13] = ACTIONS(96),
    [anon_sym_14] = ACTIONS(96),
    [anon_sym_15] = ACTIONS(96),
    [anon_sym_16] = ACTIONS(96),
    [aux_sym_z_token1] = ACTIONS(98),
    [aux_sym_z_token2] = ACTIONS(98),
    [aux_sym_z_token3] = ACTIONS(96),
    [sym_str] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(98),
    [anon_sym_false] = ACTIONS(98),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_int] = ACTIONS(98),
    [anon_sym_null] = ACTIONS(98),
    [anon_sym_17] = ACTIONS(96),
    [sym_real] = ACTIONS(96),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_id] = ACTIONS(102),
    [anon_sym_public] = ACTIONS(102),
    [anon_sym_internal] = ACTIONS(102),
    [anon_sym_protected] = ACTIONS(102),
    [anon_sym_private] = ACTIONS(102),
    [anon_sym_static] = ACTIONS(102),
    [anon_sym_] = ACTIONS(102),
    [anon_sym_2] = ACTIONS(100),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_interface] = ACTIONS(102),
    [anon_sym_struct] = ACTIONS(102),
    [anon_sym_enum] = ACTIONS(102),
    [anon_sym_var] = ACTIONS(102),
    [anon_sym_3] = ACTIONS(100),
    [sym_comment] = ACTIONS(100),
    [anon_sym_using] = ACTIONS(102),
    [anon_sym_return] = ACTIONS(102),
    [anon_sym_int] = ACTIONS(102),
    [anon_sym_bool] = ACTIONS(102),
    [anon_sym_string] = ACTIONS(102),
    [anon_sym_char] = ACTIONS(102),
    [anon_sym_float] = ACTIONS(102),
    [anon_sym_double] = ACTIONS(102),
    [anon_sym_4] = ACTIONS(100),
    [anon_sym_5] = ACTIONS(102),
    [anon_sym_6] = ACTIONS(102),
    [anon_sym_7] = ACTIONS(102),
    [anon_sym_8] = ACTIONS(100),
    [anon_sym_9] = ACTIONS(100),
    [anon_sym_10] = ACTIONS(100),
    [anon_sym_11] = ACTIONS(100),
    [anon_sym_12] = ACTIONS(100),
    [anon_sym_13] = ACTIONS(100),
    [anon_sym_14] = ACTIONS(100),
    [anon_sym_15] = ACTIONS(100),
    [anon_sym_16] = ACTIONS(100),
    [aux_sym_z_token1] = ACTIONS(102),
    [aux_sym_z_token2] = ACTIONS(102),
    [aux_sym_z_token3] = ACTIONS(100),
    [sym_str] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [sym_int] = ACTIONS(102),
    [anon_sym_null] = ACTIONS(102),
    [anon_sym_17] = ACTIONS(100),
    [sym_real] = ACTIONS(100),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_id] = ACTIONS(106),
    [anon_sym_public] = ACTIONS(106),
    [anon_sym_internal] = ACTIONS(106),
    [anon_sym_protected] = ACTIONS(106),
    [anon_sym_private] = ACTIONS(106),
    [anon_sym_static] = ACTIONS(106),
    [anon_sym_] = ACTIONS(106),
    [anon_sym_2] = ACTIONS(104),
    [anon_sym_class] = ACTIONS(106),
    [anon_sym_interface] = ACTIONS(106),
    [anon_sym_struct] = ACTIONS(106),
    [anon_sym_enum] = ACTIONS(106),
    [anon_sym_var] = ACTIONS(106),
    [anon_sym_3] = ACTIONS(104),
    [sym_comment] = ACTIONS(104),
    [anon_sym_using] = ACTIONS(106),
    [anon_sym_return] = ACTIONS(106),
    [anon_sym_int] = ACTIONS(106),
    [anon_sym_bool] = ACTIONS(106),
    [anon_sym_string] = ACTIONS(106),
    [anon_sym_char] = ACTIONS(106),
    [anon_sym_float] = ACTIONS(106),
    [anon_sym_double] = ACTIONS(106),
    [anon_sym_4] = ACTIONS(104),
    [anon_sym_5] = ACTIONS(106),
    [anon_sym_6] = ACTIONS(106),
    [anon_sym_7] = ACTIONS(106),
    [anon_sym_8] = ACTIONS(104),
    [anon_sym_9] = ACTIONS(104),
    [anon_sym_10] = ACTIONS(104),
    [anon_sym_11] = ACTIONS(104),
    [anon_sym_12] = ACTIONS(104),
    [anon_sym_13] = ACTIONS(104),
    [anon_sym_14] = ACTIONS(104),
    [anon_sym_15] = ACTIONS(104),
    [anon_sym_16] = ACTIONS(104),
    [aux_sym_z_token1] = ACTIONS(106),
    [aux_sym_z_token2] = ACTIONS(106),
    [aux_sym_z_token3] = ACTIONS(104),
    [sym_str] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_false] = ACTIONS(106),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [sym_int] = ACTIONS(106),
    [anon_sym_null] = ACTIONS(106),
    [anon_sym_17] = ACTIONS(104),
    [sym_real] = ACTIONS(104),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_id] = ACTIONS(110),
    [anon_sym_public] = ACTIONS(110),
    [anon_sym_internal] = ACTIONS(110),
    [anon_sym_protected] = ACTIONS(110),
    [anon_sym_private] = ACTIONS(110),
    [anon_sym_static] = ACTIONS(110),
    [anon_sym_] = ACTIONS(110),
    [anon_sym_2] = ACTIONS(108),
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_interface] = ACTIONS(110),
    [anon_sym_struct] = ACTIONS(110),
    [anon_sym_enum] = ACTIONS(110),
    [anon_sym_var] = ACTIONS(110),
    [anon_sym_3] = ACTIONS(108),
    [sym_comment] = ACTIONS(108),
    [anon_sym_using] = ACTIONS(110),
    [anon_sym_return] = ACTIONS(110),
    [anon_sym_int] = ACTIONS(110),
    [anon_sym_bool] = ACTIONS(110),
    [anon_sym_string] = ACTIONS(110),
    [anon_sym_char] = ACTIONS(110),
    [anon_sym_float] = ACTIONS(110),
    [anon_sym_double] = ACTIONS(110),
    [anon_sym_4] = ACTIONS(108),
    [anon_sym_5] = ACTIONS(110),
    [anon_sym_6] = ACTIONS(110),
    [anon_sym_7] = ACTIONS(110),
    [anon_sym_8] = ACTIONS(108),
    [anon_sym_9] = ACTIONS(108),
    [anon_sym_10] = ACTIONS(108),
    [anon_sym_11] = ACTIONS(108),
    [anon_sym_12] = ACTIONS(108),
    [anon_sym_13] = ACTIONS(108),
    [anon_sym_14] = ACTIONS(108),
    [anon_sym_15] = ACTIONS(108),
    [anon_sym_16] = ACTIONS(108),
    [aux_sym_z_token1] = ACTIONS(110),
    [aux_sym_z_token2] = ACTIONS(110),
    [aux_sym_z_token3] = ACTIONS(108),
    [sym_str] = ACTIONS(108),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [sym_int] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [anon_sym_17] = ACTIONS(108),
    [sym_real] = ACTIONS(108),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_id] = ACTIONS(114),
    [anon_sym_public] = ACTIONS(114),
    [anon_sym_internal] = ACTIONS(114),
    [anon_sym_protected] = ACTIONS(114),
    [anon_sym_private] = ACTIONS(114),
    [anon_sym_static] = ACTIONS(114),
    [anon_sym_] = ACTIONS(114),
    [anon_sym_2] = ACTIONS(112),
    [anon_sym_class] = ACTIONS(114),
    [anon_sym_interface] = ACTIONS(114),
    [anon_sym_struct] = ACTIONS(114),
    [anon_sym_enum] = ACTIONS(114),
    [anon_sym_var] = ACTIONS(114),
    [anon_sym_3] = ACTIONS(112),
    [sym_comment] = ACTIONS(112),
    [anon_sym_using] = ACTIONS(114),
    [anon_sym_return] = ACTIONS(114),
    [anon_sym_int] = ACTIONS(114),
    [anon_sym_bool] = ACTIONS(114),
    [anon_sym_string] = ACTIONS(114),
    [anon_sym_char] = ACTIONS(114),
    [anon_sym_float] = ACTIONS(114),
    [anon_sym_double] = ACTIONS(114),
    [anon_sym_4] = ACTIONS(112),
    [anon_sym_5] = ACTIONS(114),
    [anon_sym_6] = ACTIONS(114),
    [anon_sym_7] = ACTIONS(114),
    [anon_sym_8] = ACTIONS(112),
    [anon_sym_9] = ACTIONS(112),
    [anon_sym_10] = ACTIONS(112),
    [anon_sym_11] = ACTIONS(112),
    [anon_sym_12] = ACTIONS(112),
    [anon_sym_13] = ACTIONS(112),
    [anon_sym_14] = ACTIONS(112),
    [anon_sym_15] = ACTIONS(112),
    [anon_sym_16] = ACTIONS(112),
    [aux_sym_z_token1] = ACTIONS(114),
    [aux_sym_z_token2] = ACTIONS(114),
    [aux_sym_z_token3] = ACTIONS(112),
    [sym_str] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(114),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [sym_int] = ACTIONS(114),
    [anon_sym_null] = ACTIONS(114),
    [anon_sym_17] = ACTIONS(112),
    [sym_real] = ACTIONS(112),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_id] = ACTIONS(118),
    [anon_sym_public] = ACTIONS(118),
    [anon_sym_internal] = ACTIONS(118),
    [anon_sym_protected] = ACTIONS(118),
    [anon_sym_private] = ACTIONS(118),
    [anon_sym_static] = ACTIONS(118),
    [anon_sym_] = ACTIONS(118),
    [anon_sym_2] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(118),
    [anon_sym_interface] = ACTIONS(118),
    [anon_sym_struct] = ACTIONS(118),
    [anon_sym_enum] = ACTIONS(118),
    [anon_sym_var] = ACTIONS(118),
    [anon_sym_3] = ACTIONS(116),
    [sym_comment] = ACTIONS(116),
    [anon_sym_using] = ACTIONS(118),
    [anon_sym_return] = ACTIONS(118),
    [anon_sym_int] = ACTIONS(118),
    [anon_sym_bool] = ACTIONS(118),
    [anon_sym_string] = ACTIONS(118),
    [anon_sym_char] = ACTIONS(118),
    [anon_sym_float] = ACTIONS(118),
    [anon_sym_double] = ACTIONS(118),
    [anon_sym_4] = ACTIONS(116),
    [anon_sym_5] = ACTIONS(118),
    [anon_sym_6] = ACTIONS(118),
    [anon_sym_7] = ACTIONS(118),
    [anon_sym_8] = ACTIONS(116),
    [anon_sym_9] = ACTIONS(116),
    [anon_sym_10] = ACTIONS(116),
    [anon_sym_11] = ACTIONS(116),
    [anon_sym_12] = ACTIONS(116),
    [anon_sym_13] = ACTIONS(116),
    [anon_sym_14] = ACTIONS(116),
    [anon_sym_15] = ACTIONS(116),
    [anon_sym_16] = ACTIONS(116),
    [aux_sym_z_token1] = ACTIONS(118),
    [aux_sym_z_token2] = ACTIONS(118),
    [aux_sym_z_token3] = ACTIONS(116),
    [sym_str] = ACTIONS(116),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [sym_int] = ACTIONS(118),
    [anon_sym_null] = ACTIONS(118),
    [anon_sym_17] = ACTIONS(116),
    [sym_real] = ACTIONS(116),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(120), 1,
      aux_sym_char_token1,
    ACTIONS(122), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 7,
  [SMALL_STATE(14)] = 11,
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
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cat, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
