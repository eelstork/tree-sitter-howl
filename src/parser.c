#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_id = 1,
  sym_comment = 2,
  anon_sym_class = 3,
  anon_sym_return = 4,
  anon_sym_end = 5,
  anon_sym_ = 6,
  anon_sym_2 = 7,
  anon_sym_3 = 8,
  anon_sym_4 = 9,
  anon_sym_5 = 10,
  anon_sym_6 = 11,
  anon_sym_7 = 12,
  anon_sym_8 = 13,
  anon_sym_9 = 14,
  anon_sym_10 = 15,
  anon_sym_11 = 16,
  anon_sym_12 = 17,
  aux_sym_z_token1 = 18,
  aux_sym_z_token2 = 19,
  aux_sym_z_token3 = 20,
  sym_str = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_char_token1 = 25,
  sym_escape_sequence = 26,
  sym_int = 27,
  anon_sym_null = 28,
  anon_sym_13 = 29,
  sym_real = 30,
  sym_ = 31,
  sym__e = 32,
  sym_key = 33,
  sym_sym = 34,
  sym_z = 35,
  sym__lit = 36,
  sym_bool = 37,
  sym_char = 38,
  sym_null = 39,
  aux_sym__repeat1 = 40,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [sym_comment] = "comment",
  [anon_sym_class] = "class",
  [anon_sym_return] = "return",
  [anon_sym_end] = "end",
  [anon_sym_] = "⤴",
  [anon_sym_2] = "⤵",
  [anon_sym_3] = "⊓",
  [anon_sym_4] = "‒",
  [anon_sym_5] = "○",
  [anon_sym_6] = "‒̥",
  [anon_sym_7] = "⮐",
  [anon_sym_8] = "⌢",
  [anon_sym_9] = "→",
  [anon_sym_10] = "⨕",
  [anon_sym_11] = "∀",
  [anon_sym_12] = "∈",
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
  [anon_sym_13] = "∅",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
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
  [sym_comment] = sym_comment,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_10] = anon_sym_10,
  [anon_sym_11] = anon_sym_11,
  [anon_sym_12] = anon_sym_12,
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
  [anon_sym_13] = anon_sym_13,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
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
  [anon_sym_3] = {
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
  [anon_sym_13] = {
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
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 8210) ADVANCE(27);
      if (lookahead == 8594) ADVANCE(32);
      if (lookahead == 8704) ADVANCE(34);
      if (lookahead == 8709) ADVANCE(59);
      if (lookahead == 8712) ADVANCE(35);
      if (lookahead == 8851) ADVANCE(26);
      if (lookahead == 8994) ADVANCE(31);
      if (lookahead == 9675) ADVANCE(28);
      if (lookahead == 10548) ADVANCE(24);
      if (lookahead == 10549) ADVANCE(25);
      if (lookahead == 10773) ADVANCE(33);
      if (lookahead == 11152) ADVANCE(30);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(11);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == 805) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_10);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_12);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(19);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(21);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_z_token2);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(57);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'u') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(62);
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
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_return);
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
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_10] = ACTIONS(1),
    [anon_sym_11] = ACTIONS(1),
    [anon_sym_12] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_13] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(11),
    [sym__e] = STATE(2),
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
    [sym_comment] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_2] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(13),
    [anon_sym_5] = ACTIONS(11),
    [anon_sym_6] = ACTIONS(11),
    [anon_sym_7] = ACTIONS(11),
    [anon_sym_8] = ACTIONS(11),
    [anon_sym_9] = ACTIONS(11),
    [anon_sym_10] = ACTIONS(11),
    [anon_sym_11] = ACTIONS(11),
    [anon_sym_12] = ACTIONS(11),
    [aux_sym_z_token1] = ACTIONS(15),
    [aux_sym_z_token2] = ACTIONS(15),
    [aux_sym_z_token3] = ACTIONS(17),
    [sym_str] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_13] = ACTIONS(25),
    [sym_real] = ACTIONS(7),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_id] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_2] = ACTIONS(11),
    [anon_sym_3] = ACTIONS(11),
    [anon_sym_4] = ACTIONS(13),
    [anon_sym_5] = ACTIONS(11),
    [anon_sym_6] = ACTIONS(11),
    [anon_sym_7] = ACTIONS(11),
    [anon_sym_8] = ACTIONS(11),
    [anon_sym_9] = ACTIONS(11),
    [anon_sym_10] = ACTIONS(11),
    [anon_sym_11] = ACTIONS(11),
    [anon_sym_12] = ACTIONS(11),
    [aux_sym_z_token1] = ACTIONS(15),
    [aux_sym_z_token2] = ACTIONS(15),
    [aux_sym_z_token3] = ACTIONS(17),
    [sym_str] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [sym_int] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_13] = ACTIONS(25),
    [sym_real] = ACTIONS(31),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_id] = ACTIONS(35),
    [sym_comment] = ACTIONS(38),
    [anon_sym_class] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(41),
    [anon_sym_] = ACTIONS(44),
    [anon_sym_2] = ACTIONS(44),
    [anon_sym_3] = ACTIONS(44),
    [anon_sym_4] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(44),
    [anon_sym_6] = ACTIONS(44),
    [anon_sym_7] = ACTIONS(44),
    [anon_sym_8] = ACTIONS(44),
    [anon_sym_9] = ACTIONS(44),
    [anon_sym_10] = ACTIONS(44),
    [anon_sym_11] = ACTIONS(44),
    [anon_sym_12] = ACTIONS(44),
    [aux_sym_z_token1] = ACTIONS(50),
    [aux_sym_z_token2] = ACTIONS(50),
    [aux_sym_z_token3] = ACTIONS(53),
    [sym_str] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(59),
    [sym_int] = ACTIONS(35),
    [anon_sym_null] = ACTIONS(62),
    [anon_sym_13] = ACTIONS(65),
    [sym_real] = ACTIONS(38),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_id] = ACTIONS(70),
    [sym_comment] = ACTIONS(68),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_end] = ACTIONS(70),
    [anon_sym_] = ACTIONS(68),
    [anon_sym_2] = ACTIONS(68),
    [anon_sym_3] = ACTIONS(68),
    [anon_sym_4] = ACTIONS(70),
    [anon_sym_5] = ACTIONS(68),
    [anon_sym_6] = ACTIONS(68),
    [anon_sym_7] = ACTIONS(68),
    [anon_sym_8] = ACTIONS(68),
    [anon_sym_9] = ACTIONS(68),
    [anon_sym_10] = ACTIONS(68),
    [anon_sym_11] = ACTIONS(68),
    [anon_sym_12] = ACTIONS(68),
    [aux_sym_z_token1] = ACTIONS(70),
    [aux_sym_z_token2] = ACTIONS(70),
    [aux_sym_z_token3] = ACTIONS(68),
    [sym_str] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [sym_int] = ACTIONS(70),
    [anon_sym_null] = ACTIONS(70),
    [anon_sym_13] = ACTIONS(68),
    [sym_real] = ACTIONS(68),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_id] = ACTIONS(74),
    [sym_comment] = ACTIONS(72),
    [anon_sym_class] = ACTIONS(74),
    [anon_sym_return] = ACTIONS(74),
    [anon_sym_end] = ACTIONS(74),
    [anon_sym_] = ACTIONS(72),
    [anon_sym_2] = ACTIONS(72),
    [anon_sym_3] = ACTIONS(72),
    [anon_sym_4] = ACTIONS(74),
    [anon_sym_5] = ACTIONS(72),
    [anon_sym_6] = ACTIONS(72),
    [anon_sym_7] = ACTIONS(72),
    [anon_sym_8] = ACTIONS(72),
    [anon_sym_9] = ACTIONS(72),
    [anon_sym_10] = ACTIONS(72),
    [anon_sym_11] = ACTIONS(72),
    [anon_sym_12] = ACTIONS(72),
    [aux_sym_z_token1] = ACTIONS(74),
    [aux_sym_z_token2] = ACTIONS(74),
    [aux_sym_z_token3] = ACTIONS(72),
    [sym_str] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [sym_int] = ACTIONS(74),
    [anon_sym_null] = ACTIONS(74),
    [anon_sym_13] = ACTIONS(72),
    [sym_real] = ACTIONS(72),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_id] = ACTIONS(78),
    [sym_comment] = ACTIONS(76),
    [anon_sym_class] = ACTIONS(78),
    [anon_sym_return] = ACTIONS(78),
    [anon_sym_end] = ACTIONS(78),
    [anon_sym_] = ACTIONS(76),
    [anon_sym_2] = ACTIONS(76),
    [anon_sym_3] = ACTIONS(76),
    [anon_sym_4] = ACTIONS(78),
    [anon_sym_5] = ACTIONS(76),
    [anon_sym_6] = ACTIONS(76),
    [anon_sym_7] = ACTIONS(76),
    [anon_sym_8] = ACTIONS(76),
    [anon_sym_9] = ACTIONS(76),
    [anon_sym_10] = ACTIONS(76),
    [anon_sym_11] = ACTIONS(76),
    [anon_sym_12] = ACTIONS(76),
    [aux_sym_z_token1] = ACTIONS(78),
    [aux_sym_z_token2] = ACTIONS(78),
    [aux_sym_z_token3] = ACTIONS(76),
    [sym_str] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [sym_int] = ACTIONS(78),
    [anon_sym_null] = ACTIONS(78),
    [anon_sym_13] = ACTIONS(76),
    [sym_real] = ACTIONS(76),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_id] = ACTIONS(82),
    [sym_comment] = ACTIONS(80),
    [anon_sym_class] = ACTIONS(82),
    [anon_sym_return] = ACTIONS(82),
    [anon_sym_end] = ACTIONS(82),
    [anon_sym_] = ACTIONS(80),
    [anon_sym_2] = ACTIONS(80),
    [anon_sym_3] = ACTIONS(80),
    [anon_sym_4] = ACTIONS(82),
    [anon_sym_5] = ACTIONS(80),
    [anon_sym_6] = ACTIONS(80),
    [anon_sym_7] = ACTIONS(80),
    [anon_sym_8] = ACTIONS(80),
    [anon_sym_9] = ACTIONS(80),
    [anon_sym_10] = ACTIONS(80),
    [anon_sym_11] = ACTIONS(80),
    [anon_sym_12] = ACTIONS(80),
    [aux_sym_z_token1] = ACTIONS(82),
    [aux_sym_z_token2] = ACTIONS(82),
    [aux_sym_z_token3] = ACTIONS(80),
    [sym_str] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [sym_int] = ACTIONS(82),
    [anon_sym_null] = ACTIONS(82),
    [anon_sym_13] = ACTIONS(80),
    [sym_real] = ACTIONS(80),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_id] = ACTIONS(86),
    [sym_comment] = ACTIONS(84),
    [anon_sym_class] = ACTIONS(86),
    [anon_sym_return] = ACTIONS(86),
    [anon_sym_end] = ACTIONS(86),
    [anon_sym_] = ACTIONS(84),
    [anon_sym_2] = ACTIONS(84),
    [anon_sym_3] = ACTIONS(84),
    [anon_sym_4] = ACTIONS(86),
    [anon_sym_5] = ACTIONS(84),
    [anon_sym_6] = ACTIONS(84),
    [anon_sym_7] = ACTIONS(84),
    [anon_sym_8] = ACTIONS(84),
    [anon_sym_9] = ACTIONS(84),
    [anon_sym_10] = ACTIONS(84),
    [anon_sym_11] = ACTIONS(84),
    [anon_sym_12] = ACTIONS(84),
    [aux_sym_z_token1] = ACTIONS(86),
    [aux_sym_z_token2] = ACTIONS(86),
    [aux_sym_z_token3] = ACTIONS(84),
    [sym_str] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [sym_int] = ACTIONS(86),
    [anon_sym_null] = ACTIONS(86),
    [anon_sym_13] = ACTIONS(84),
    [sym_real] = ACTIONS(84),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_id] = ACTIONS(90),
    [sym_comment] = ACTIONS(88),
    [anon_sym_class] = ACTIONS(90),
    [anon_sym_return] = ACTIONS(90),
    [anon_sym_end] = ACTIONS(90),
    [anon_sym_] = ACTIONS(88),
    [anon_sym_2] = ACTIONS(88),
    [anon_sym_3] = ACTIONS(88),
    [anon_sym_4] = ACTIONS(90),
    [anon_sym_5] = ACTIONS(88),
    [anon_sym_6] = ACTIONS(88),
    [anon_sym_7] = ACTIONS(88),
    [anon_sym_8] = ACTIONS(88),
    [anon_sym_9] = ACTIONS(88),
    [anon_sym_10] = ACTIONS(88),
    [anon_sym_11] = ACTIONS(88),
    [anon_sym_12] = ACTIONS(88),
    [aux_sym_z_token1] = ACTIONS(90),
    [aux_sym_z_token2] = ACTIONS(90),
    [aux_sym_z_token3] = ACTIONS(88),
    [sym_str] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [sym_int] = ACTIONS(90),
    [anon_sym_null] = ACTIONS(90),
    [anon_sym_13] = ACTIONS(88),
    [sym_real] = ACTIONS(88),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(92), 1,
      aux_sym_char_token1,
    ACTIONS(94), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 7,
  [SMALL_STATE(12)] = 11,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
