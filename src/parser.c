#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  aux_sym_z_token1 = 8,
  aux_sym_z_token2 = 9,
  aux_sym_z_token3 = 10,
  sym_str = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_char_token1 = 15,
  sym_escape_sequence = 16,
  sym_int = 17,
  sym_null = 18,
  sym_real = 19,
  sym_ = 20,
  sym__e = 21,
  sym_key = 22,
  sym_sym = 23,
  sym_z = 24,
  sym__lit = 25,
  sym_bool = 26,
  sym_char = 27,
  aux_sym__repeat1 = 28,
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
  [sym_null] = "null",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym_key] = "key",
  [sym_sym] = "sym",
  [sym_z] = "z",
  [sym__lit] = "_lit",
  [sym_bool] = "bool",
  [sym_char] = "char",
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
  [sym_null] = sym_null,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym_key] = sym_key,
  [sym_sym] = sym_sym,
  [sym_z] = sym_z,
  [sym__lit] = sym__lit,
  [sym_bool] = sym_bool,
  [sym_char] = sym_char,
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
  [sym_null] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 10548) ADVANCE(32);
      if (lookahead == 10549) ADVANCE(33);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(38);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('!' <= lookahead && lookahead <= '@')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(10);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(24);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(21);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L') ADVANCE(25);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(21);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
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
      ACCEPT_TOKEN(sym_null);
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
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
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
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(10),
    [sym__e] = STATE(2),
    [sym_key] = STATE(2),
    [sym_sym] = STATE(2),
    [sym_z] = STATE(2),
    [sym__lit] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_char] = STATE(2),
    [aux_sym__repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_2] = ACTIONS(11),
    [aux_sym_z_token1] = ACTIONS(13),
    [aux_sym_z_token2] = ACTIONS(13),
    [aux_sym_z_token3] = ACTIONS(15),
    [sym_str] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_int] = ACTIONS(5),
    [sym_null] = ACTIONS(5),
    [sym_real] = ACTIONS(5),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_id] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(9),
    [anon_sym_] = ACTIONS(11),
    [anon_sym_2] = ACTIONS(11),
    [aux_sym_z_token1] = ACTIONS(13),
    [aux_sym_z_token2] = ACTIONS(13),
    [aux_sym_z_token3] = ACTIONS(15),
    [sym_str] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_int] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [sym_real] = ACTIONS(23),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym_key] = STATE(3),
    [sym_sym] = STATE(3),
    [sym_z] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_char] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_id] = ACTIONS(29),
    [sym_comment] = ACTIONS(32),
    [anon_sym_class] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(35),
    [anon_sym_] = ACTIONS(38),
    [anon_sym_2] = ACTIONS(38),
    [aux_sym_z_token1] = ACTIONS(41),
    [aux_sym_z_token2] = ACTIONS(41),
    [aux_sym_z_token3] = ACTIONS(44),
    [sym_str] = ACTIONS(32),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(50),
    [sym_int] = ACTIONS(29),
    [sym_null] = ACTIONS(29),
    [sym_real] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_id] = ACTIONS(55),
    [sym_comment] = ACTIONS(53),
    [anon_sym_class] = ACTIONS(55),
    [anon_sym_return] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(55),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [aux_sym_z_token1] = ACTIONS(55),
    [aux_sym_z_token2] = ACTIONS(55),
    [aux_sym_z_token3] = ACTIONS(53),
    [sym_str] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [sym_int] = ACTIONS(55),
    [sym_null] = ACTIONS(55),
    [sym_real] = ACTIONS(55),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_id] = ACTIONS(59),
    [sym_comment] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(59),
    [anon_sym_] = ACTIONS(57),
    [anon_sym_2] = ACTIONS(57),
    [aux_sym_z_token1] = ACTIONS(59),
    [aux_sym_z_token2] = ACTIONS(59),
    [aux_sym_z_token3] = ACTIONS(57),
    [sym_str] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(57),
    [sym_int] = ACTIONS(59),
    [sym_null] = ACTIONS(59),
    [sym_real] = ACTIONS(59),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_id] = ACTIONS(63),
    [sym_comment] = ACTIONS(61),
    [anon_sym_class] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_end] = ACTIONS(63),
    [anon_sym_] = ACTIONS(61),
    [anon_sym_2] = ACTIONS(61),
    [aux_sym_z_token1] = ACTIONS(63),
    [aux_sym_z_token2] = ACTIONS(63),
    [aux_sym_z_token3] = ACTIONS(61),
    [sym_str] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_int] = ACTIONS(63),
    [sym_null] = ACTIONS(63),
    [sym_real] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_id] = ACTIONS(67),
    [sym_comment] = ACTIONS(65),
    [anon_sym_class] = ACTIONS(67),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(67),
    [anon_sym_] = ACTIONS(65),
    [anon_sym_2] = ACTIONS(65),
    [aux_sym_z_token1] = ACTIONS(67),
    [aux_sym_z_token2] = ACTIONS(67),
    [aux_sym_z_token3] = ACTIONS(65),
    [sym_str] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [sym_int] = ACTIONS(67),
    [sym_null] = ACTIONS(67),
    [sym_real] = ACTIONS(67),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_id] = ACTIONS(71),
    [sym_comment] = ACTIONS(69),
    [anon_sym_class] = ACTIONS(71),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_end] = ACTIONS(71),
    [anon_sym_] = ACTIONS(69),
    [anon_sym_2] = ACTIONS(69),
    [aux_sym_z_token1] = ACTIONS(71),
    [aux_sym_z_token2] = ACTIONS(71),
    [aux_sym_z_token3] = ACTIONS(69),
    [sym_str] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(69),
    [sym_int] = ACTIONS(71),
    [sym_null] = ACTIONS(71),
    [sym_real] = ACTIONS(71),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(73), 1,
      aux_sym_char_token1,
    ACTIONS(75), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 7,
  [SMALL_STATE(11)] = 11,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
