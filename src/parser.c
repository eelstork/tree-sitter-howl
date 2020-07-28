#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 6
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym_id = 1,
  sym_str = 2,
  sym_comment = 3,
  anon_sym_class = 4,
  anon_sym_return = 5,
  sym_ = 6,
  sym__e = 7,
  sym_key = 8,
  aux_sym__repeat1 = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [sym_str] = "str",
  [sym_comment] = "comment",
  [anon_sym_class] = "class",
  [anon_sym_return] = "return",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym_key] = "key",
  [aux_sym__repeat1] = "Σ_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [sym_str] = sym_str,
  [sym_comment] = sym_comment,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_return] = anon_sym_return,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym_key] = sym_key,
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
  [sym_str] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(2);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(2);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_id);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
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
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 11:
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(5),
    [sym__e] = STATE(2),
    [sym_key] = STATE(2),
    [aux_sym__repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [sym_str] = ACTIONS(7),
    [sym_comment] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(9),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym_key] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_id] = ACTIONS(13),
    [sym_str] = ACTIONS(15),
    [sym_comment] = ACTIONS(13),
    [anon_sym_class] = ACTIONS(9),
    [anon_sym_return] = ACTIONS(9),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym_key] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_id] = ACTIONS(19),
    [sym_str] = ACTIONS(22),
    [sym_comment] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(25),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(28),
    [sym_id] = ACTIONS(30),
    [sym_str] = ACTIONS(28),
    [sym_comment] = ACTIONS(30),
    [anon_sym_class] = ACTIONS(30),
    [anon_sym_return] = ACTIONS(30),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [32] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
