#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 229
#define ALIAS_COUNT 0
#define TOKEN_COUNT 214
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
  anon_sym_abstract = 7,
  anon_sym_const = 8,
  anon_sym_extern = 9,
  anon_sym_override = 10,
  anon_sym_partial = 11,
  anon_sym_readonly = 12,
  anon_sym_sealed = 13,
  anon_sym_unsafe = 14,
  anon_sym_virtual = 15,
  anon_sym_volatile = 16,
  anon_sym_explicit = 17,
  anon_sym_implicit = 18,
  anon_sym_ = 19,
  anon_sym_2 = 20,
  anon_sym_3 = 21,
  anon_sym_4 = 22,
  anon_sym_5 = 23,
  anon_sym_6 = 24,
  anon_sym_7 = 25,
  anon_sym_8 = 26,
  anon_sym_9 = 27,
  anon_sym_10 = 28,
  anon_sym_11 = 29,
  anon_sym_12 = 30,
  anon_sym_13 = 31,
  anon_sym_14 = 32,
  anon_sym_15 = 33,
  anon_sym_16 = 34,
  anon_sym_17 = 35,
  anon_sym_18 = 36,
  anon_sym_19 = 37,
  anon_sym_20 = 38,
  anon_sym_21 = 39,
  anon_sym_class = 40,
  anon_sym_interface = 41,
  anon_sym_struct = 42,
  anon_sym_enum = 43,
  anon_sym_var = 44,
  anon_sym_delegate = 45,
  anon_sym_22 = 46,
  anon_sym_23 = 47,
  anon_sym_24 = 48,
  anon_sym_25 = 49,
  anon_sym_26 = 50,
  anon_sym_27 = 51,
  anon_sym_28 = 52,
  anon_sym_29 = 53,
  anon_sym_30 = 54,
  anon_sym_31 = 55,
  anon_sym_32 = 56,
  anon_sym_33 = 57,
  anon_sym_34 = 58,
  anon_sym_35 = 59,
  anon_sym_36 = 60,
  anon_sym_37 = 61,
  anon_sym_38 = 62,
  anon_sym_39 = 63,
  anon_sym_async = 64,
  anon_sym_await = 65,
  anon_sym_by = 66,
  anon_sym_if = 67,
  anon_sym_else = 68,
  anon_sym_foreach = 69,
  anon_sym_in = 70,
  anon_sym_for = 71,
  anon_sym_do = 72,
  anon_sym_while = 73,
  anon_sym_switch = 74,
  anon_sym_case = 75,
  anon_sym_break = 76,
  anon_sym_return = 77,
  anon_sym_yield = 78,
  anon_sym_try = 79,
  anon_sym_catch = 80,
  anon_sym_finally = 81,
  anon_sym_continue = 82,
  anon_sym_from = 83,
  anon_sym_where = 84,
  anon_sym_select = 85,
  anon_sym_throw = 86,
  anon_sym_join = 87,
  anon_sym_goto = 88,
  anon_sym_lock = 89,
  anon_sym_orderby = 90,
  anon_sym_40 = 91,
  anon_sym_41 = 92,
  anon_sym_42 = 93,
  anon_sym_43 = 94,
  anon_sym_LPAREN_RPAREN = 95,
  anon_sym_44 = 96,
  anon_sym_45 = 97,
  anon_sym_46 = 98,
  anon_sym_47 = 99,
  anon_sym_48 = 100,
  anon_sym_49 = 101,
  anon_sym_50 = 102,
  anon_sym_51 = 103,
  anon_sym_52 = 104,
  anon_sym_LPAREN_RPAREN2 = 105,
  anon_sym_53 = 106,
  anon_sym_54 = 107,
  anon_sym_55 = 108,
  anon_sym_add = 109,
  anon_sym_using = 110,
  anon_sym_into = 111,
  anon_sym_value = 112,
  anon_sym_checked = 113,
  anon_sym_global = 114,
  anon_sym_let = 115,
  anon_sym_new = 116,
  anon_sym_operator = 117,
  anon_sym_params = 118,
  anon_sym_this = 119,
  anon_sym_typeof = 120,
  anon_sym_default = 121,
  anon_sym_equals = 122,
  anon_sym_long = 123,
  anon_sym_out = 124,
  anon_sym_ref = 125,
  anon_sym_sizeof = 126,
  anon_sym_descending = 127,
  anon_sym_ascending = 128,
  anon_sym_dynamic = 129,
  anon_sym_fixed = 130,
  anon_sym_group = 131,
  anon_sym_is = 132,
  anon_sym_get = 133,
  anon_sym_set = 134,
  anon_sym_on = 135,
  anon_sym_remove = 136,
  anon_sym_stackalloc = 137,
  anon_sym_unchecked = 138,
  anon_sym_as = 139,
  anon_sym_base = 140,
  anon_sym_56 = 141,
  anon_sym_57 = 142,
  anon_sym_58 = 143,
  anon_sym_59 = 144,
  anon_sym_60 = 145,
  anon_sym_61 = 146,
  anon_sym_62 = 147,
  anon_sym_63 = 148,
  anon_sym_64 = 149,
  anon_sym_65 = 150,
  anon_sym_66 = 151,
  anon_sym_67 = 152,
  anon_sym_68 = 153,
  anon_sym_69 = 154,
  anon_sym_70 = 155,
  anon_sym_71 = 156,
  anon_sym_72 = 157,
  anon_sym_int = 158,
  anon_sym_bool = 159,
  anon_sym_string = 160,
  anon_sym_float = 161,
  anon_sym_char = 162,
  anon_sym_double = 163,
  anon_sym_byte = 164,
  anon_sym_decimal = 165,
  anon_sym_sbyte = 166,
  anon_sym_short = 167,
  anon_sym_uint = 168,
  anon_sym_ushort = 169,
  anon_sym_object = 170,
  anon_sym_ulong = 171,
  anon_sym_73 = 172,
  anon_sym_74 = 173,
  anon_sym_75 = 174,
  anon_sym_76 = 175,
  anon_sym_77 = 176,
  anon_sym_78 = 177,
  anon_sym_79 = 178,
  anon_sym_80 = 179,
  anon_sym_81 = 180,
  anon_sym_82 = 181,
  anon_sym_83 = 182,
  anon_sym_84 = 183,
  anon_sym_85 = 184,
  anon_sym_86 = 185,
  anon_sym_87 = 186,
  anon_sym_88 = 187,
  anon_sym_89 = 188,
  anon_sym_90 = 189,
  anon_sym_91 = 190,
  anon_sym_92 = 191,
  anon_sym_93 = 192,
  anon_sym_94 = 193,
  sym_type = 194,
  sym_comment = 195,
  aux_sym_z_token1 = 196,
  aux_sym_z_token2 = 197,
  aux_sym_z_token3 = 198,
  sym_str = 199,
  anon_sym_true = 200,
  anon_sym_false = 201,
  anon_sym_95 = 202,
  anon_sym_96 = 203,
  anon_sym_97 = 204,
  anon_sym_98 = 205,
  anon_sym_99 = 206,
  anon_sym_SQUOTE = 207,
  aux_sym_char_token1 = 208,
  sym_escape_sequence = 209,
  sym_int = 210,
  anon_sym_null = 211,
  anon_sym_100 = 212,
  sym_real = 213,
  sym_ = 214,
  sym__e = 215,
  sym__lit = 216,
  sym_mod = 217,
  sym_cat = 218,
  sym_op = 219,
  sym_flow = 220,
  sym_key = 221,
  sym_prim = 222,
  sym_z = 223,
  sym_bool = 224,
  sym_bt = 225,
  sym_char = 226,
  sym_null = 227,
  aux_sym__repeat1 = 228,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_public] = "public",
  [anon_sym_internal] = "internal",
  [anon_sym_protected] = "protected",
  [anon_sym_private] = "private",
  [anon_sym_static] = "static",
  [anon_sym_abstract] = "abstract",
  [anon_sym_const] = "const",
  [anon_sym_extern] = "extern",
  [anon_sym_override] = "override",
  [anon_sym_partial] = "partial",
  [anon_sym_readonly] = "readonly",
  [anon_sym_sealed] = "sealed",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_virtual] = "virtual",
  [anon_sym_volatile] = "volatile",
  [anon_sym_explicit] = "explicit",
  [anon_sym_implicit] = "implicit",
  [anon_sym_] = "‒̥",
  [anon_sym_2] = "؟",
  [anon_sym_3] = "⍜",
  [anon_sym_4] = "⍉",
  [anon_sym_5] = "⏚",
  [anon_sym_6] = "‒",
  [anon_sym_7] = "╍̥",
  [anon_sym_8] = "╍",
  [anon_sym_9] = "◠̥",
  [anon_sym_10] = "◠",
  [anon_sym_11] = "╌̥",
  [anon_sym_12] = "╌",
  [anon_sym_13] = "▰̥",
  [anon_sym_14] = "▰",
  [anon_sym_15] = "ᴬ",
  [anon_sym_16] = "ᴸ",
  [anon_sym_17] = "⁺",
  [anon_sym_18] = "ᴾ",
  [anon_sym_19] = "∘",
  [anon_sym_20] = "ᵛ",
  [anon_sym_21] = "🔒",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_var] = "var",
  [anon_sym_delegate] = "delegate",
  [anon_sym_22] = "⊓",
  [anon_sym_23] = "○",
  [anon_sym_24] = "◌",
  [anon_sym_25] = "⊟",
  [anon_sym_26] = "🝠",
  [anon_sym_27] = "⎚",
  [anon_sym_28] = "→",
  [anon_sym_29] = "☰",
  [anon_sym_30] = "≠",
  [anon_sym_31] = "≥",
  [anon_sym_32] = "≤",
  [anon_sym_33] = "∧",
  [anon_sym_34] = "∨",
  [anon_sym_35] = "⩜",
  [anon_sym_36] = "⩝",
  [anon_sym_37] = "⁝",
  [anon_sym_38] = "❙",
  [anon_sym_39] = "৴",
  [anon_sym_async] = "async",
  [anon_sym_await] = "await",
  [anon_sym_by] = "by",
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
  [anon_sym_continue] = "continue",
  [anon_sym_from] = "from",
  [anon_sym_where] = "where",
  [anon_sym_select] = "select",
  [anon_sym_throw] = "throw",
  [anon_sym_join] = "join",
  [anon_sym_goto] = "goto",
  [anon_sym_lock] = "lock",
  [anon_sym_orderby] = "orderby",
  [anon_sym_40] = "⤳",
  [anon_sym_41] = "⤴",
  [anon_sym_42] = "⤵",
  [anon_sym_43] = "∀",
  [anon_sym_LPAREN_RPAREN] = "(˙▿˙)",
  [anon_sym_44] = "∈",
  [anon_sym_45] = "⟳",
  [anon_sym_46] = "⟲",
  [anon_sym_47] = "⤭",
  [anon_sym_48] = "⥰",
  [anon_sym_49] = "¦",
  [anon_sym_50] = "⮐",
  [anon_sym_51] = "↯",
  [anon_sym_52] = "⇤",
  [anon_sym_LPAREN_RPAREN2] = "(╯°□°)╯",
  [anon_sym_53] = "‖",
  [anon_sym_54] = "¿",
  [anon_sym_55] = "፥",
  [anon_sym_add] = "add",
  [anon_sym_using] = "using",
  [anon_sym_into] = "into",
  [anon_sym_value] = "value",
  [anon_sym_checked] = "checked",
  [anon_sym_global] = "global",
  [anon_sym_let] = "let",
  [anon_sym_new] = "new",
  [anon_sym_operator] = "operator",
  [anon_sym_params] = "params",
  [anon_sym_this] = "this",
  [anon_sym_typeof] = "typeof",
  [anon_sym_default] = "default",
  [anon_sym_equals] = "equals",
  [anon_sym_long] = "long",
  [anon_sym_out] = "out",
  [anon_sym_ref] = "ref",
  [anon_sym_sizeof] = "sizeof",
  [anon_sym_descending] = "descending",
  [anon_sym_ascending] = "ascending",
  [anon_sym_dynamic] = "dynamic",
  [anon_sym_fixed] = "fixed",
  [anon_sym_group] = "group",
  [anon_sym_is] = "is",
  [anon_sym_get] = "get",
  [anon_sym_set] = "set",
  [anon_sym_on] = "on",
  [anon_sym_remove] = "remove",
  [anon_sym_stackalloc] = "stackalloc",
  [anon_sym_unchecked] = "unchecked",
  [anon_sym_as] = "as",
  [anon_sym_base] = "base",
  [anon_sym_56] = "⊐̥",
  [anon_sym_57] = "⊐",
  [anon_sym_58] = "🚸",
  [anon_sym_59] = "⏰",
  [anon_sym_60] = "⌽",
  [anon_sym_61] = "⇖",
  [anon_sym_62] = "⇘",
  [anon_sym_63] = "⨕",
  [anon_sym_64] = "ᵉ",
  [anon_sym_65] = "ⁱ",
  [anon_sym_66] = "↖",
  [anon_sym_67] = "↘",
  [anon_sym_68] = "⌢",
  [anon_sym_69] = "∙",
  [anon_sym_70] = "⦿",
  [anon_sym_71] = "⛔️",
  [anon_sym_72] = "📝",
  [anon_sym_int] = "int",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_float] = "float",
  [anon_sym_char] = "char",
  [anon_sym_double] = "double",
  [anon_sym_byte] = "byte",
  [anon_sym_decimal] = "decimal",
  [anon_sym_sbyte] = "sbyte",
  [anon_sym_short] = "short",
  [anon_sym_uint] = "uint",
  [anon_sym_ushort] = "ushort",
  [anon_sym_object] = "object",
  [anon_sym_ulong] = "ulong",
  [anon_sym_73] = "▷",
  [anon_sym_74] = "▶",
  [anon_sym_75] = "ᆞ",
  [anon_sym_76] = "ㄹ",
  [anon_sym_77] = "エ",
  [anon_sym_78] = "ㅇ",
  [anon_sym_79] = "ㅅ",
  [anon_sym_80] = "⒜",
  [anon_sym_81] = "⒡",
  [anon_sym_82] = "𝕄",
  [anon_sym_83] = "𝕊",
  [anon_sym_84] = "𝕃",
  [anon_sym_85] = "ロ",
  [anon_sym_86] = "⫙",
  [anon_sym_87] = "ペ",
  [anon_sym_88] = "フ",
  [anon_sym_89] = "シ",
  [anon_sym_90] = "タ",
  [anon_sym_91] = "ト",
  [anon_sym_92] = "メ",
  [anon_sym_93] = "メ̂",
  [anon_sym_94] = "⑂",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [aux_sym_z_token1] = "z_token1",
  [aux_sym_z_token2] = "z_token2",
  [aux_sym_z_token3] = "z_token3",
  [sym_str] = "str",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_95] = "✓",
  [anon_sym_96] = "✗",
  [anon_sym_97] = "◇",
  [anon_sym_98] = "☡",
  [anon_sym_99] = "■",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int] = "int",
  [anon_sym_null] = "null",
  [anon_sym_100] = "∅",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym__lit] = "_lit",
  [sym_mod] = "mod",
  [sym_cat] = "cat",
  [sym_op] = "op",
  [sym_flow] = "flow",
  [sym_key] = "key",
  [sym_prim] = "prim",
  [sym_z] = "z",
  [sym_bool] = "bool",
  [sym_bt] = "bt",
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
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_partial] = anon_sym_partial,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_sealed] = anon_sym_sealed,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_explicit] = anon_sym_explicit,
  [anon_sym_implicit] = anon_sym_implicit,
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
  [anon_sym_13] = anon_sym_13,
  [anon_sym_14] = anon_sym_14,
  [anon_sym_15] = anon_sym_15,
  [anon_sym_16] = anon_sym_16,
  [anon_sym_17] = anon_sym_17,
  [anon_sym_18] = anon_sym_18,
  [anon_sym_19] = anon_sym_19,
  [anon_sym_20] = anon_sym_20,
  [anon_sym_21] = anon_sym_21,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_22] = anon_sym_22,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_31] = anon_sym_31,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_33] = anon_sym_33,
  [anon_sym_34] = anon_sym_34,
  [anon_sym_35] = anon_sym_35,
  [anon_sym_36] = anon_sym_36,
  [anon_sym_37] = anon_sym_37,
  [anon_sym_38] = anon_sym_38,
  [anon_sym_39] = anon_sym_39,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_by] = anon_sym_by,
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
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_lock] = anon_sym_lock,
  [anon_sym_orderby] = anon_sym_orderby,
  [anon_sym_40] = anon_sym_40,
  [anon_sym_41] = anon_sym_41,
  [anon_sym_42] = anon_sym_42,
  [anon_sym_43] = anon_sym_43,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_44] = anon_sym_44,
  [anon_sym_45] = anon_sym_45,
  [anon_sym_46] = anon_sym_46,
  [anon_sym_47] = anon_sym_47,
  [anon_sym_48] = anon_sym_48,
  [anon_sym_49] = anon_sym_49,
  [anon_sym_50] = anon_sym_50,
  [anon_sym_51] = anon_sym_51,
  [anon_sym_52] = anon_sym_52,
  [anon_sym_LPAREN_RPAREN2] = anon_sym_LPAREN_RPAREN2,
  [anon_sym_53] = anon_sym_53,
  [anon_sym_54] = anon_sym_54,
  [anon_sym_55] = anon_sym_55,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_into] = anon_sym_into,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_operator] = anon_sym_operator,
  [anon_sym_params] = anon_sym_params,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_equals] = anon_sym_equals,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [anon_sym_descending] = anon_sym_descending,
  [anon_sym_ascending] = anon_sym_ascending,
  [anon_sym_dynamic] = anon_sym_dynamic,
  [anon_sym_fixed] = anon_sym_fixed,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_remove] = anon_sym_remove,
  [anon_sym_stackalloc] = anon_sym_stackalloc,
  [anon_sym_unchecked] = anon_sym_unchecked,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_base] = anon_sym_base,
  [anon_sym_56] = anon_sym_56,
  [anon_sym_57] = anon_sym_57,
  [anon_sym_58] = anon_sym_58,
  [anon_sym_59] = anon_sym_59,
  [anon_sym_60] = anon_sym_60,
  [anon_sym_61] = anon_sym_61,
  [anon_sym_62] = anon_sym_62,
  [anon_sym_63] = anon_sym_63,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_65] = anon_sym_65,
  [anon_sym_66] = anon_sym_66,
  [anon_sym_67] = anon_sym_67,
  [anon_sym_68] = anon_sym_68,
  [anon_sym_69] = anon_sym_69,
  [anon_sym_70] = anon_sym_70,
  [anon_sym_71] = anon_sym_71,
  [anon_sym_72] = anon_sym_72,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_decimal] = anon_sym_decimal,
  [anon_sym_sbyte] = anon_sym_sbyte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_ushort] = anon_sym_ushort,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_ulong] = anon_sym_ulong,
  [anon_sym_73] = anon_sym_73,
  [anon_sym_74] = anon_sym_74,
  [anon_sym_75] = anon_sym_75,
  [anon_sym_76] = anon_sym_76,
  [anon_sym_77] = anon_sym_77,
  [anon_sym_78] = anon_sym_78,
  [anon_sym_79] = anon_sym_79,
  [anon_sym_80] = anon_sym_80,
  [anon_sym_81] = anon_sym_81,
  [anon_sym_82] = anon_sym_82,
  [anon_sym_83] = anon_sym_83,
  [anon_sym_84] = anon_sym_84,
  [anon_sym_85] = anon_sym_85,
  [anon_sym_86] = anon_sym_86,
  [anon_sym_87] = anon_sym_87,
  [anon_sym_88] = anon_sym_88,
  [anon_sym_89] = anon_sym_89,
  [anon_sym_90] = anon_sym_90,
  [anon_sym_91] = anon_sym_91,
  [anon_sym_92] = anon_sym_92,
  [anon_sym_93] = anon_sym_93,
  [anon_sym_94] = anon_sym_94,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [aux_sym_z_token1] = aux_sym_z_token1,
  [aux_sym_z_token2] = aux_sym_z_token2,
  [aux_sym_z_token3] = aux_sym_z_token3,
  [sym_str] = sym_str,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_95] = anon_sym_95,
  [anon_sym_96] = anon_sym_96,
  [anon_sym_97] = anon_sym_97,
  [anon_sym_98] = anon_sym_98,
  [anon_sym_99] = anon_sym_99,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int] = sym_int,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_100] = anon_sym_100,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym__lit] = sym__lit,
  [sym_mod] = sym_mod,
  [sym_cat] = sym_cat,
  [sym_op] = sym_op,
  [sym_flow] = sym_flow,
  [sym_key] = sym_key,
  [sym_prim] = sym_prim,
  [sym_z] = sym_z,
  [sym_bool] = sym_bool,
  [sym_bt] = sym_bt,
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
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sealed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implicit] = {
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
  [anon_sym_delegate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_22] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_23] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_25] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_26] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_27] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_28] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_29] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_30] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_31] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_33] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_34] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_35] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_36] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_37] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_38] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_39] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
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
  [anon_sym_continue] = {
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
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orderby] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_40] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_41] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_42] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_43] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_44] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_45] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_46] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_47] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_48] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_49] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_50] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_51] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_52] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_53] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_54] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_55] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_params] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_descending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascending] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stackalloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unchecked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_57] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_59] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_60] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_61] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_62] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_63] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_65] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_66] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_67] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_68] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_69] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_70] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_71] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_72] = {
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
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ushort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ulong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_73] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_74] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_75] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_76] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_77] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_78] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_79] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_80] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_81] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_82] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_83] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_84] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_85] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_86] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_87] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_88] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_89] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_90] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_91] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_92] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_93] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_94] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [anon_sym_95] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_96] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_97] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_98] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_99] = {
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
  [anon_sym_100] = {
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
  [sym__lit] = {
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
  [sym_op] = {
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
  [sym_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_z] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_bt] = {
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
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 166) ADVANCE(75);
      if (lookahead == 191) ADVANCE(81);
      if (lookahead == 1567) ADVANCE(31);
      if (lookahead == 2548) ADVANCE(64);
      if (lookahead == 4965) ADVANCE(82);
      if (lookahead == 8210) ADVANCE(35);
      if (lookahead == 8214) ADVANCE(80);
      if (lookahead == 8285) ADVANCE(62);
      if (lookahead == 8305) ADVANCE(91);
      if (lookahead == 8314) ADVANCE(44);
      if (lookahead == 8594) ADVANCE(53);
      if (lookahead == 8598) ADVANCE(92);
      if (lookahead == 8600) ADVANCE(93);
      if (lookahead == 8623) ADVANCE(77);
      if (lookahead == 8662) ADVANCE(88);
      if (lookahead == 8664) ADVANCE(89);
      if (lookahead == 8676) ADVANCE(78);
      if (lookahead == 8704) ADVANCE(68);
      if (lookahead == 8709) ADVANCE(145);
      if (lookahead == 8712) ADVANCE(70);
      if (lookahead == 8728) ADVANCE(45);
      if (lookahead == 8729) ADVANCE(95);
      if (lookahead == 8743) ADVANCE(58);
      if (lookahead == 8744) ADVANCE(59);
      if (lookahead == 8800) ADVANCE(55);
      if (lookahead == 8804) ADVANCE(57);
      if (lookahead == 8805) ADVANCE(56);
      if (lookahead == 8848) ADVANCE(84);
      if (lookahead == 8851) ADVANCE(47);
      if (lookahead == 8863) ADVANCE(50);
      if (lookahead == 8994) ADVANCE(94);
      if (lookahead == 9021) ADVANCE(87);
      if (lookahead == 9033) ADVANCE(33);
      if (lookahead == 9052) ADVANCE(32);
      if (lookahead == 9114) ADVANCE(52);
      if (lookahead == 9178) ADVANCE(34);
      if (lookahead == 9200) ADVANCE(86);
      if (lookahead == 9282) ADVANCE(107);
      if (lookahead == 9372) ADVANCE(101);
      if (lookahead == 9377) ADVANCE(102);
      if (lookahead == 9548) ADVANCE(41);
      if (lookahead == 9549) ADVANCE(37);
      if (lookahead == 9632) ADVANCE(132);
      if (lookahead == 9648) ADVANCE(43);
      if (lookahead == 9654) ADVANCE(100);
      if (lookahead == 9655) ADVANCE(99);
      if (lookahead == 9671) ADVANCE(130);
      if (lookahead == 9675) ADVANCE(48);
      if (lookahead == 9676) ADVANCE(49);
      if (lookahead == 9696) ADVANCE(39);
      if (lookahead == 9761) ADVANCE(131);
      if (lookahead == 9776) ADVANCE(54);
      if (lookahead == 9940) ADVANCE(14);
      if (lookahead == 10003) ADVANCE(128);
      if (lookahead == 10007) ADVANCE(129);
      if (lookahead == 10073) ADVANCE(63);
      if (lookahead == 10226) ADVANCE(72);
      if (lookahead == 10227) ADVANCE(71);
      if (lookahead == 10541) ADVANCE(73);
      if (lookahead == 10547) ADVANCE(65);
      if (lookahead == 10548) ADVANCE(66);
      if (lookahead == 10549) ADVANCE(67);
      if (lookahead == 10608) ADVANCE(74);
      if (lookahead == 10687) ADVANCE(96);
      if (lookahead == 10773) ADVANCE(90);
      if (lookahead == 10844) ADVANCE(60);
      if (lookahead == 10845) ADVANCE(61);
      if (lookahead == 10969) ADVANCE(106);
      if (lookahead == 11152) ADVANCE(76);
      if (lookahead == 120131) ADVANCE(105);
      if (lookahead == 120132) ADVANCE(103);
      if (lookahead == 120138) ADVANCE(104);
      if (lookahead == 128221) ADVANCE(98);
      if (lookahead == 128274) ADVANCE(46);
      if (lookahead == 128696) ADVANCE(85);
      if (lookahead == 128864) ADVANCE(51);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == 'x') ADVANCE(20);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(134);
      END_STATE();
    case 8:
      if (lookahead == 176) ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 176) ADVANCE(3);
      END_STATE();
    case 10:
      if (lookahead == 729) ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 9583) ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == 9633) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 9663) ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 65039) ADVANCE(97);
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(147);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
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
      if (lookahead == 805) ADVANCE(30);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == 805) ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_10);
      if (lookahead == 805) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_12);
      if (lookahead == 805) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == 805) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_22);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_24);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_25);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_26);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_27);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_28);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_29);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_30);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_33);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_34);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_35);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_36);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_37);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_38);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_42);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_44);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_45);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_46);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_47);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_48);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_49);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_50);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_56);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_57);
      if (lookahead == 805) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_60);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_61);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_62);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_67);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_68);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_82);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_83);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_84);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_86);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_94);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == 729) ADVANCE(13);
      if (lookahead == 9583) ADVANCE(8);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(113);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_95);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_96);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_97);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_98);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_99);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'U') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_100);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'j') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(19);
      if (lookahead == 'y') ADVANCE(20);
      if (lookahead == 4510) ADVANCE(21);
      if (lookahead == 7468) ADVANCE(22);
      if (lookahead == 7480) ADVANCE(23);
      if (lookahead == 7486) ADVANCE(24);
      if (lookahead == 7497) ADVANCE(25);
      if (lookahead == 7515) ADVANCE(26);
      if (lookahead == 12456) ADVANCE(27);
      if (lookahead == 12471) ADVANCE(28);
      if (lookahead == 12479) ADVANCE(29);
      if (lookahead == 12488) ADVANCE(30);
      if (lookahead == 12501) ADVANCE(31);
      if (lookahead == 12506) ADVANCE(32);
      if (lookahead == 12513) ADVANCE(33);
      if (lookahead == 12525) ADVANCE(34);
      if (lookahead == 12601) ADVANCE(35);
      if (lookahead == 12613) ADVANCE(36);
      if (lookahead == 12615) ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(54);
      if (lookahead == 'q') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'l') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'h') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_16);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_89);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_90);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_91);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_88);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_87);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_92);
      if (lookahead == 770) ADVANCE(103);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_85);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_79);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 55:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'x') ADVANCE(132);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == 'j') ADVANCE(148);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 88:
      if (lookahead == 'z') ADVANCE(166);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_93);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 137:
      if (lookahead == 'b') ADVANCE(220);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 144:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 154:
      if (lookahead == 'v') ADVANCE(236);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 157:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 170:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(260);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 194:
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 197:
      if (lookahead == 'h') ADVANCE(273);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 199:
      if (lookahead == 'k') ADVANCE(274);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(275);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 204:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 205:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 207:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 215:
      if (lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 222:
      if (lookahead == 'p') ADVANCE(293);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 234:
      if (lookahead == 'm') ADVANCE(300);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 240:
      if (lookahead == 'v') ADVANCE(306);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 247:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 249:
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 253:
      if (lookahead == 'w') ADVANCE(318);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 255:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 259:
      if (lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 263:
      if (lookahead == 'u') ADVANCE(326);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 268:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 277:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 278:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 280:
      if (lookahead == 'a') ADVANCE(337);
      END_STATE();
    case 281:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 286:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 288:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(347);
      END_STATE();
    case 295:
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 298:
      if (lookahead == 'b') ADVANCE(352);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 300:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(357);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(358);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 312:
      if (lookahead == 'f') ADVANCE(364);
      END_STATE();
    case 313:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(367);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 317:
      if (lookahead == 'h') ADVANCE(369);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 319:
      if (lookahead == 'f') ADVANCE(370);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(371);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 326:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 331:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(377);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 334:
      if (lookahead == 'u') ADVANCE(379);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(383);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 344:
      if (lookahead == 'y') ADVANCE(386);
      END_STATE();
    case 345:
      if (lookahead == 'h') ADVANCE(387);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 348:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 349:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 351:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 352:
      if (lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(396);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 359:
      if (lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 371:
      if (lookahead == 'k') ADVANCE(399);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 376:
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 389:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 391:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 397:
      if (lookahead == 'y') ADVANCE(414);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(415);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 406:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 413:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 416:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_ascending);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(424);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_unchecked);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_stackalloc);
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
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_partial] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_sealed] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_explicit] = ACTIONS(1),
    [anon_sym_implicit] = ACTIONS(1),
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
    [anon_sym_13] = ACTIONS(1),
    [anon_sym_14] = ACTIONS(1),
    [anon_sym_15] = ACTIONS(1),
    [anon_sym_16] = ACTIONS(1),
    [anon_sym_17] = ACTIONS(1),
    [anon_sym_18] = ACTIONS(1),
    [anon_sym_19] = ACTIONS(1),
    [anon_sym_20] = ACTIONS(1),
    [anon_sym_21] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [anon_sym_24] = ACTIONS(1),
    [anon_sym_25] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_33] = ACTIONS(1),
    [anon_sym_34] = ACTIONS(1),
    [anon_sym_35] = ACTIONS(1),
    [anon_sym_36] = ACTIONS(1),
    [anon_sym_37] = ACTIONS(1),
    [anon_sym_38] = ACTIONS(1),
    [anon_sym_39] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
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
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_lock] = ACTIONS(1),
    [anon_sym_orderby] = ACTIONS(1),
    [anon_sym_40] = ACTIONS(1),
    [anon_sym_41] = ACTIONS(1),
    [anon_sym_42] = ACTIONS(1),
    [anon_sym_43] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_44] = ACTIONS(1),
    [anon_sym_45] = ACTIONS(1),
    [anon_sym_46] = ACTIONS(1),
    [anon_sym_47] = ACTIONS(1),
    [anon_sym_48] = ACTIONS(1),
    [anon_sym_49] = ACTIONS(1),
    [anon_sym_50] = ACTIONS(1),
    [anon_sym_51] = ACTIONS(1),
    [anon_sym_52] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(1),
    [anon_sym_53] = ACTIONS(1),
    [anon_sym_54] = ACTIONS(1),
    [anon_sym_55] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_checked] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_operator] = ACTIONS(1),
    [anon_sym_params] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_equals] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [anon_sym_descending] = ACTIONS(1),
    [anon_sym_ascending] = ACTIONS(1),
    [anon_sym_dynamic] = ACTIONS(1),
    [anon_sym_fixed] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_stackalloc] = ACTIONS(1),
    [anon_sym_unchecked] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_base] = ACTIONS(1),
    [anon_sym_56] = ACTIONS(1),
    [anon_sym_57] = ACTIONS(1),
    [anon_sym_58] = ACTIONS(1),
    [anon_sym_59] = ACTIONS(1),
    [anon_sym_60] = ACTIONS(1),
    [anon_sym_61] = ACTIONS(1),
    [anon_sym_62] = ACTIONS(1),
    [anon_sym_63] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_65] = ACTIONS(1),
    [anon_sym_66] = ACTIONS(1),
    [anon_sym_67] = ACTIONS(1),
    [anon_sym_68] = ACTIONS(1),
    [anon_sym_69] = ACTIONS(1),
    [anon_sym_70] = ACTIONS(1),
    [anon_sym_71] = ACTIONS(1),
    [anon_sym_72] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_decimal] = ACTIONS(1),
    [anon_sym_sbyte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_ushort] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_ulong] = ACTIONS(1),
    [anon_sym_73] = ACTIONS(1),
    [anon_sym_74] = ACTIONS(1),
    [anon_sym_75] = ACTIONS(1),
    [anon_sym_76] = ACTIONS(1),
    [anon_sym_77] = ACTIONS(1),
    [anon_sym_78] = ACTIONS(1),
    [anon_sym_79] = ACTIONS(1),
    [anon_sym_80] = ACTIONS(1),
    [anon_sym_81] = ACTIONS(1),
    [anon_sym_82] = ACTIONS(1),
    [anon_sym_83] = ACTIONS(1),
    [anon_sym_84] = ACTIONS(1),
    [anon_sym_85] = ACTIONS(1),
    [anon_sym_86] = ACTIONS(1),
    [anon_sym_87] = ACTIONS(1),
    [anon_sym_88] = ACTIONS(1),
    [anon_sym_89] = ACTIONS(1),
    [anon_sym_90] = ACTIONS(1),
    [anon_sym_91] = ACTIONS(1),
    [anon_sym_92] = ACTIONS(1),
    [anon_sym_93] = ACTIONS(1),
    [anon_sym_94] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_95] = ACTIONS(1),
    [anon_sym_96] = ACTIONS(1),
    [anon_sym_97] = ACTIONS(1),
    [anon_sym_98] = ACTIONS(1),
    [anon_sym_99] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_100] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(16),
    [sym__e] = STATE(2),
    [sym__lit] = STATE(2),
    [sym_mod] = STATE(2),
    [sym_cat] = STATE(2),
    [sym_op] = STATE(2),
    [sym_flow] = STATE(2),
    [sym_key] = STATE(2),
    [sym_prim] = STATE(2),
    [sym_z] = STATE(2),
    [sym_bool] = STATE(2),
    [sym_bt] = STATE(2),
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
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(7),
    [anon_sym_sealed] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_explicit] = ACTIONS(7),
    [anon_sym_implicit] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(7),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(7),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(9),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(7),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_22] = ACTIONS(13),
    [anon_sym_23] = ACTIONS(13),
    [anon_sym_24] = ACTIONS(13),
    [anon_sym_25] = ACTIONS(13),
    [anon_sym_26] = ACTIONS(15),
    [anon_sym_27] = ACTIONS(15),
    [anon_sym_28] = ACTIONS(15),
    [anon_sym_29] = ACTIONS(15),
    [anon_sym_30] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(17),
    [anon_sym_async] = ACTIONS(19),
    [anon_sym_await] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_foreach] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_yield] = ACTIONS(19),
    [anon_sym_try] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_finally] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_select] = ACTIONS(19),
    [anon_sym_throw] = ACTIONS(19),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_goto] = ACTIONS(19),
    [anon_sym_lock] = ACTIONS(19),
    [anon_sym_orderby] = ACTIONS(19),
    [anon_sym_40] = ACTIONS(21),
    [anon_sym_41] = ACTIONS(21),
    [anon_sym_42] = ACTIONS(21),
    [anon_sym_43] = ACTIONS(21),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_44] = ACTIONS(21),
    [anon_sym_45] = ACTIONS(21),
    [anon_sym_46] = ACTIONS(21),
    [anon_sym_47] = ACTIONS(21),
    [anon_sym_48] = ACTIONS(21),
    [anon_sym_49] = ACTIONS(21),
    [anon_sym_50] = ACTIONS(21),
    [anon_sym_51] = ACTIONS(21),
    [anon_sym_52] = ACTIONS(21),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(21),
    [anon_sym_53] = ACTIONS(21),
    [anon_sym_54] = ACTIONS(21),
    [anon_sym_55] = ACTIONS(19),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_using] = ACTIONS(23),
    [anon_sym_into] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(23),
    [anon_sym_checked] = ACTIONS(23),
    [anon_sym_global] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_new] = ACTIONS(23),
    [anon_sym_operator] = ACTIONS(23),
    [anon_sym_params] = ACTIONS(23),
    [anon_sym_this] = ACTIONS(23),
    [anon_sym_typeof] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_equals] = ACTIONS(23),
    [anon_sym_long] = ACTIONS(23),
    [anon_sym_out] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(23),
    [anon_sym_sizeof] = ACTIONS(23),
    [anon_sym_descending] = ACTIONS(23),
    [anon_sym_ascending] = ACTIONS(23),
    [anon_sym_dynamic] = ACTIONS(23),
    [anon_sym_fixed] = ACTIONS(23),
    [anon_sym_group] = ACTIONS(23),
    [anon_sym_is] = ACTIONS(23),
    [anon_sym_get] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_remove] = ACTIONS(23),
    [anon_sym_stackalloc] = ACTIONS(23),
    [anon_sym_unchecked] = ACTIONS(23),
    [anon_sym_as] = ACTIONS(23),
    [anon_sym_base] = ACTIONS(23),
    [anon_sym_56] = ACTIONS(25),
    [anon_sym_57] = ACTIONS(23),
    [anon_sym_58] = ACTIONS(25),
    [anon_sym_59] = ACTIONS(25),
    [anon_sym_60] = ACTIONS(25),
    [anon_sym_61] = ACTIONS(25),
    [anon_sym_62] = ACTIONS(25),
    [anon_sym_63] = ACTIONS(25),
    [anon_sym_64] = ACTIONS(23),
    [anon_sym_65] = ACTIONS(25),
    [anon_sym_66] = ACTIONS(25),
    [anon_sym_67] = ACTIONS(25),
    [anon_sym_68] = ACTIONS(25),
    [anon_sym_69] = ACTIONS(25),
    [anon_sym_70] = ACTIONS(25),
    [anon_sym_71] = ACTIONS(25),
    [anon_sym_72] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(27),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym_double] = ACTIONS(27),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_decimal] = ACTIONS(27),
    [anon_sym_sbyte] = ACTIONS(27),
    [anon_sym_short] = ACTIONS(27),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_ushort] = ACTIONS(27),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_ulong] = ACTIONS(27),
    [anon_sym_73] = ACTIONS(29),
    [anon_sym_74] = ACTIONS(29),
    [anon_sym_75] = ACTIONS(27),
    [anon_sym_76] = ACTIONS(27),
    [anon_sym_77] = ACTIONS(27),
    [anon_sym_78] = ACTIONS(27),
    [anon_sym_79] = ACTIONS(27),
    [anon_sym_80] = ACTIONS(29),
    [anon_sym_81] = ACTIONS(29),
    [anon_sym_82] = ACTIONS(29),
    [anon_sym_83] = ACTIONS(29),
    [anon_sym_84] = ACTIONS(29),
    [anon_sym_85] = ACTIONS(27),
    [anon_sym_86] = ACTIONS(29),
    [anon_sym_87] = ACTIONS(27),
    [anon_sym_88] = ACTIONS(27),
    [anon_sym_89] = ACTIONS(27),
    [anon_sym_90] = ACTIONS(27),
    [anon_sym_91] = ACTIONS(27),
    [anon_sym_92] = ACTIONS(27),
    [anon_sym_93] = ACTIONS(27),
    [anon_sym_94] = ACTIONS(29),
    [sym_type] = ACTIONS(31),
    [sym_comment] = ACTIONS(31),
    [aux_sym_z_token1] = ACTIONS(33),
    [aux_sym_z_token2] = ACTIONS(33),
    [aux_sym_z_token3] = ACTIONS(35),
    [sym_str] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_95] = ACTIONS(39),
    [anon_sym_96] = ACTIONS(39),
    [anon_sym_97] = ACTIONS(41),
    [anon_sym_98] = ACTIONS(41),
    [anon_sym_99] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(45),
    [anon_sym_100] = ACTIONS(47),
    [sym_real] = ACTIONS(5),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_op] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_prim] = STATE(3),
    [sym_z] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_bt] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_id] = ACTIONS(51),
    [anon_sym_public] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(7),
    [anon_sym_protected] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [anon_sym_static] = ACTIONS(7),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_extern] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_partial] = ACTIONS(7),
    [anon_sym_readonly] = ACTIONS(7),
    [anon_sym_sealed] = ACTIONS(7),
    [anon_sym_unsafe] = ACTIONS(7),
    [anon_sym_virtual] = ACTIONS(7),
    [anon_sym_volatile] = ACTIONS(7),
    [anon_sym_explicit] = ACTIONS(7),
    [anon_sym_implicit] = ACTIONS(7),
    [anon_sym_] = ACTIONS(9),
    [anon_sym_2] = ACTIONS(7),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(9),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(7),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(7),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(9),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(7),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_22] = ACTIONS(13),
    [anon_sym_23] = ACTIONS(13),
    [anon_sym_24] = ACTIONS(13),
    [anon_sym_25] = ACTIONS(13),
    [anon_sym_26] = ACTIONS(15),
    [anon_sym_27] = ACTIONS(15),
    [anon_sym_28] = ACTIONS(15),
    [anon_sym_29] = ACTIONS(15),
    [anon_sym_30] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(17),
    [anon_sym_async] = ACTIONS(19),
    [anon_sym_await] = ACTIONS(19),
    [anon_sym_by] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(19),
    [anon_sym_else] = ACTIONS(19),
    [anon_sym_foreach] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_switch] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(19),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_yield] = ACTIONS(19),
    [anon_sym_try] = ACTIONS(19),
    [anon_sym_catch] = ACTIONS(19),
    [anon_sym_finally] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [anon_sym_where] = ACTIONS(19),
    [anon_sym_select] = ACTIONS(19),
    [anon_sym_throw] = ACTIONS(19),
    [anon_sym_join] = ACTIONS(19),
    [anon_sym_goto] = ACTIONS(19),
    [anon_sym_lock] = ACTIONS(19),
    [anon_sym_orderby] = ACTIONS(19),
    [anon_sym_40] = ACTIONS(21),
    [anon_sym_41] = ACTIONS(21),
    [anon_sym_42] = ACTIONS(21),
    [anon_sym_43] = ACTIONS(21),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(21),
    [anon_sym_44] = ACTIONS(21),
    [anon_sym_45] = ACTIONS(21),
    [anon_sym_46] = ACTIONS(21),
    [anon_sym_47] = ACTIONS(21),
    [anon_sym_48] = ACTIONS(21),
    [anon_sym_49] = ACTIONS(21),
    [anon_sym_50] = ACTIONS(21),
    [anon_sym_51] = ACTIONS(21),
    [anon_sym_52] = ACTIONS(21),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(21),
    [anon_sym_53] = ACTIONS(21),
    [anon_sym_54] = ACTIONS(21),
    [anon_sym_55] = ACTIONS(19),
    [anon_sym_add] = ACTIONS(23),
    [anon_sym_using] = ACTIONS(23),
    [anon_sym_into] = ACTIONS(23),
    [anon_sym_value] = ACTIONS(23),
    [anon_sym_checked] = ACTIONS(23),
    [anon_sym_global] = ACTIONS(23),
    [anon_sym_let] = ACTIONS(23),
    [anon_sym_new] = ACTIONS(23),
    [anon_sym_operator] = ACTIONS(23),
    [anon_sym_params] = ACTIONS(23),
    [anon_sym_this] = ACTIONS(23),
    [anon_sym_typeof] = ACTIONS(23),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_equals] = ACTIONS(23),
    [anon_sym_long] = ACTIONS(23),
    [anon_sym_out] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(23),
    [anon_sym_sizeof] = ACTIONS(23),
    [anon_sym_descending] = ACTIONS(23),
    [anon_sym_ascending] = ACTIONS(23),
    [anon_sym_dynamic] = ACTIONS(23),
    [anon_sym_fixed] = ACTIONS(23),
    [anon_sym_group] = ACTIONS(23),
    [anon_sym_is] = ACTIONS(23),
    [anon_sym_get] = ACTIONS(23),
    [anon_sym_set] = ACTIONS(23),
    [anon_sym_on] = ACTIONS(23),
    [anon_sym_remove] = ACTIONS(23),
    [anon_sym_stackalloc] = ACTIONS(23),
    [anon_sym_unchecked] = ACTIONS(23),
    [anon_sym_as] = ACTIONS(23),
    [anon_sym_base] = ACTIONS(23),
    [anon_sym_56] = ACTIONS(25),
    [anon_sym_57] = ACTIONS(23),
    [anon_sym_58] = ACTIONS(25),
    [anon_sym_59] = ACTIONS(25),
    [anon_sym_60] = ACTIONS(25),
    [anon_sym_61] = ACTIONS(25),
    [anon_sym_62] = ACTIONS(25),
    [anon_sym_63] = ACTIONS(25),
    [anon_sym_64] = ACTIONS(23),
    [anon_sym_65] = ACTIONS(25),
    [anon_sym_66] = ACTIONS(25),
    [anon_sym_67] = ACTIONS(25),
    [anon_sym_68] = ACTIONS(25),
    [anon_sym_69] = ACTIONS(25),
    [anon_sym_70] = ACTIONS(25),
    [anon_sym_71] = ACTIONS(25),
    [anon_sym_72] = ACTIONS(25),
    [anon_sym_int] = ACTIONS(27),
    [anon_sym_bool] = ACTIONS(27),
    [anon_sym_string] = ACTIONS(27),
    [anon_sym_float] = ACTIONS(27),
    [anon_sym_char] = ACTIONS(27),
    [anon_sym_double] = ACTIONS(27),
    [anon_sym_byte] = ACTIONS(27),
    [anon_sym_decimal] = ACTIONS(27),
    [anon_sym_sbyte] = ACTIONS(27),
    [anon_sym_short] = ACTIONS(27),
    [anon_sym_uint] = ACTIONS(27),
    [anon_sym_ushort] = ACTIONS(27),
    [anon_sym_object] = ACTIONS(27),
    [anon_sym_ulong] = ACTIONS(27),
    [anon_sym_73] = ACTIONS(29),
    [anon_sym_74] = ACTIONS(29),
    [anon_sym_75] = ACTIONS(27),
    [anon_sym_76] = ACTIONS(27),
    [anon_sym_77] = ACTIONS(27),
    [anon_sym_78] = ACTIONS(27),
    [anon_sym_79] = ACTIONS(27),
    [anon_sym_80] = ACTIONS(29),
    [anon_sym_81] = ACTIONS(29),
    [anon_sym_82] = ACTIONS(29),
    [anon_sym_83] = ACTIONS(29),
    [anon_sym_84] = ACTIONS(29),
    [anon_sym_85] = ACTIONS(27),
    [anon_sym_86] = ACTIONS(29),
    [anon_sym_87] = ACTIONS(27),
    [anon_sym_88] = ACTIONS(27),
    [anon_sym_89] = ACTIONS(27),
    [anon_sym_90] = ACTIONS(27),
    [anon_sym_91] = ACTIONS(27),
    [anon_sym_92] = ACTIONS(27),
    [anon_sym_93] = ACTIONS(27),
    [anon_sym_94] = ACTIONS(29),
    [sym_type] = ACTIONS(53),
    [sym_comment] = ACTIONS(53),
    [aux_sym_z_token1] = ACTIONS(33),
    [aux_sym_z_token2] = ACTIONS(33),
    [aux_sym_z_token3] = ACTIONS(35),
    [sym_str] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_95] = ACTIONS(39),
    [anon_sym_96] = ACTIONS(39),
    [anon_sym_97] = ACTIONS(41),
    [anon_sym_98] = ACTIONS(41),
    [anon_sym_99] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [sym_int] = ACTIONS(51),
    [anon_sym_null] = ACTIONS(45),
    [anon_sym_100] = ACTIONS(47),
    [sym_real] = ACTIONS(51),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_op] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_prim] = STATE(3),
    [sym_z] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_bt] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_id] = ACTIONS(57),
    [anon_sym_public] = ACTIONS(60),
    [anon_sym_internal] = ACTIONS(60),
    [anon_sym_protected] = ACTIONS(60),
    [anon_sym_private] = ACTIONS(60),
    [anon_sym_static] = ACTIONS(60),
    [anon_sym_abstract] = ACTIONS(60),
    [anon_sym_const] = ACTIONS(60),
    [anon_sym_extern] = ACTIONS(60),
    [anon_sym_override] = ACTIONS(60),
    [anon_sym_partial] = ACTIONS(60),
    [anon_sym_readonly] = ACTIONS(60),
    [anon_sym_sealed] = ACTIONS(60),
    [anon_sym_unsafe] = ACTIONS(60),
    [anon_sym_virtual] = ACTIONS(60),
    [anon_sym_volatile] = ACTIONS(60),
    [anon_sym_explicit] = ACTIONS(60),
    [anon_sym_implicit] = ACTIONS(60),
    [anon_sym_] = ACTIONS(63),
    [anon_sym_2] = ACTIONS(60),
    [anon_sym_3] = ACTIONS(63),
    [anon_sym_4] = ACTIONS(63),
    [anon_sym_5] = ACTIONS(63),
    [anon_sym_6] = ACTIONS(60),
    [anon_sym_7] = ACTIONS(63),
    [anon_sym_8] = ACTIONS(60),
    [anon_sym_9] = ACTIONS(63),
    [anon_sym_10] = ACTIONS(60),
    [anon_sym_11] = ACTIONS(63),
    [anon_sym_12] = ACTIONS(60),
    [anon_sym_13] = ACTIONS(63),
    [anon_sym_14] = ACTIONS(60),
    [anon_sym_15] = ACTIONS(60),
    [anon_sym_16] = ACTIONS(60),
    [anon_sym_17] = ACTIONS(63),
    [anon_sym_18] = ACTIONS(60),
    [anon_sym_19] = ACTIONS(63),
    [anon_sym_20] = ACTIONS(60),
    [anon_sym_21] = ACTIONS(63),
    [anon_sym_class] = ACTIONS(66),
    [anon_sym_interface] = ACTIONS(66),
    [anon_sym_struct] = ACTIONS(66),
    [anon_sym_enum] = ACTIONS(66),
    [anon_sym_var] = ACTIONS(66),
    [anon_sym_delegate] = ACTIONS(66),
    [anon_sym_22] = ACTIONS(69),
    [anon_sym_23] = ACTIONS(69),
    [anon_sym_24] = ACTIONS(69),
    [anon_sym_25] = ACTIONS(69),
    [anon_sym_26] = ACTIONS(72),
    [anon_sym_27] = ACTIONS(72),
    [anon_sym_28] = ACTIONS(72),
    [anon_sym_29] = ACTIONS(72),
    [anon_sym_30] = ACTIONS(72),
    [anon_sym_31] = ACTIONS(72),
    [anon_sym_32] = ACTIONS(72),
    [anon_sym_33] = ACTIONS(72),
    [anon_sym_34] = ACTIONS(72),
    [anon_sym_35] = ACTIONS(72),
    [anon_sym_36] = ACTIONS(72),
    [anon_sym_37] = ACTIONS(72),
    [anon_sym_38] = ACTIONS(72),
    [anon_sym_39] = ACTIONS(75),
    [anon_sym_async] = ACTIONS(78),
    [anon_sym_await] = ACTIONS(78),
    [anon_sym_by] = ACTIONS(78),
    [anon_sym_if] = ACTIONS(78),
    [anon_sym_else] = ACTIONS(78),
    [anon_sym_foreach] = ACTIONS(78),
    [anon_sym_in] = ACTIONS(78),
    [anon_sym_for] = ACTIONS(78),
    [anon_sym_do] = ACTIONS(78),
    [anon_sym_while] = ACTIONS(78),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_case] = ACTIONS(78),
    [anon_sym_break] = ACTIONS(78),
    [anon_sym_return] = ACTIONS(78),
    [anon_sym_yield] = ACTIONS(78),
    [anon_sym_try] = ACTIONS(78),
    [anon_sym_catch] = ACTIONS(78),
    [anon_sym_finally] = ACTIONS(78),
    [anon_sym_continue] = ACTIONS(78),
    [anon_sym_from] = ACTIONS(78),
    [anon_sym_where] = ACTIONS(78),
    [anon_sym_select] = ACTIONS(78),
    [anon_sym_throw] = ACTIONS(78),
    [anon_sym_join] = ACTIONS(78),
    [anon_sym_goto] = ACTIONS(78),
    [anon_sym_lock] = ACTIONS(78),
    [anon_sym_orderby] = ACTIONS(78),
    [anon_sym_40] = ACTIONS(81),
    [anon_sym_41] = ACTIONS(81),
    [anon_sym_42] = ACTIONS(81),
    [anon_sym_43] = ACTIONS(81),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(81),
    [anon_sym_44] = ACTIONS(81),
    [anon_sym_45] = ACTIONS(81),
    [anon_sym_46] = ACTIONS(81),
    [anon_sym_47] = ACTIONS(81),
    [anon_sym_48] = ACTIONS(81),
    [anon_sym_49] = ACTIONS(81),
    [anon_sym_50] = ACTIONS(81),
    [anon_sym_51] = ACTIONS(81),
    [anon_sym_52] = ACTIONS(81),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(81),
    [anon_sym_53] = ACTIONS(81),
    [anon_sym_54] = ACTIONS(81),
    [anon_sym_55] = ACTIONS(78),
    [anon_sym_add] = ACTIONS(84),
    [anon_sym_using] = ACTIONS(84),
    [anon_sym_into] = ACTIONS(84),
    [anon_sym_value] = ACTIONS(84),
    [anon_sym_checked] = ACTIONS(84),
    [anon_sym_global] = ACTIONS(84),
    [anon_sym_let] = ACTIONS(84),
    [anon_sym_new] = ACTIONS(84),
    [anon_sym_operator] = ACTIONS(84),
    [anon_sym_params] = ACTIONS(84),
    [anon_sym_this] = ACTIONS(84),
    [anon_sym_typeof] = ACTIONS(84),
    [anon_sym_default] = ACTIONS(84),
    [anon_sym_equals] = ACTIONS(84),
    [anon_sym_long] = ACTIONS(84),
    [anon_sym_out] = ACTIONS(84),
    [anon_sym_ref] = ACTIONS(84),
    [anon_sym_sizeof] = ACTIONS(84),
    [anon_sym_descending] = ACTIONS(84),
    [anon_sym_ascending] = ACTIONS(84),
    [anon_sym_dynamic] = ACTIONS(84),
    [anon_sym_fixed] = ACTIONS(84),
    [anon_sym_group] = ACTIONS(84),
    [anon_sym_is] = ACTIONS(84),
    [anon_sym_get] = ACTIONS(84),
    [anon_sym_set] = ACTIONS(84),
    [anon_sym_on] = ACTIONS(84),
    [anon_sym_remove] = ACTIONS(84),
    [anon_sym_stackalloc] = ACTIONS(84),
    [anon_sym_unchecked] = ACTIONS(84),
    [anon_sym_as] = ACTIONS(84),
    [anon_sym_base] = ACTIONS(84),
    [anon_sym_56] = ACTIONS(87),
    [anon_sym_57] = ACTIONS(84),
    [anon_sym_58] = ACTIONS(87),
    [anon_sym_59] = ACTIONS(87),
    [anon_sym_60] = ACTIONS(87),
    [anon_sym_61] = ACTIONS(87),
    [anon_sym_62] = ACTIONS(87),
    [anon_sym_63] = ACTIONS(87),
    [anon_sym_64] = ACTIONS(84),
    [anon_sym_65] = ACTIONS(87),
    [anon_sym_66] = ACTIONS(87),
    [anon_sym_67] = ACTIONS(87),
    [anon_sym_68] = ACTIONS(87),
    [anon_sym_69] = ACTIONS(87),
    [anon_sym_70] = ACTIONS(87),
    [anon_sym_71] = ACTIONS(87),
    [anon_sym_72] = ACTIONS(87),
    [anon_sym_int] = ACTIONS(90),
    [anon_sym_bool] = ACTIONS(90),
    [anon_sym_string] = ACTIONS(90),
    [anon_sym_float] = ACTIONS(90),
    [anon_sym_char] = ACTIONS(90),
    [anon_sym_double] = ACTIONS(90),
    [anon_sym_byte] = ACTIONS(90),
    [anon_sym_decimal] = ACTIONS(90),
    [anon_sym_sbyte] = ACTIONS(90),
    [anon_sym_short] = ACTIONS(90),
    [anon_sym_uint] = ACTIONS(90),
    [anon_sym_ushort] = ACTIONS(90),
    [anon_sym_object] = ACTIONS(90),
    [anon_sym_ulong] = ACTIONS(90),
    [anon_sym_73] = ACTIONS(93),
    [anon_sym_74] = ACTIONS(93),
    [anon_sym_75] = ACTIONS(90),
    [anon_sym_76] = ACTIONS(90),
    [anon_sym_77] = ACTIONS(90),
    [anon_sym_78] = ACTIONS(90),
    [anon_sym_79] = ACTIONS(90),
    [anon_sym_80] = ACTIONS(93),
    [anon_sym_81] = ACTIONS(93),
    [anon_sym_82] = ACTIONS(93),
    [anon_sym_83] = ACTIONS(93),
    [anon_sym_84] = ACTIONS(93),
    [anon_sym_85] = ACTIONS(90),
    [anon_sym_86] = ACTIONS(93),
    [anon_sym_87] = ACTIONS(90),
    [anon_sym_88] = ACTIONS(90),
    [anon_sym_89] = ACTIONS(90),
    [anon_sym_90] = ACTIONS(90),
    [anon_sym_91] = ACTIONS(90),
    [anon_sym_92] = ACTIONS(90),
    [anon_sym_93] = ACTIONS(90),
    [anon_sym_94] = ACTIONS(93),
    [sym_type] = ACTIONS(96),
    [sym_comment] = ACTIONS(96),
    [aux_sym_z_token1] = ACTIONS(99),
    [aux_sym_z_token2] = ACTIONS(99),
    [aux_sym_z_token3] = ACTIONS(102),
    [sym_str] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_95] = ACTIONS(108),
    [anon_sym_96] = ACTIONS(108),
    [anon_sym_97] = ACTIONS(111),
    [anon_sym_98] = ACTIONS(111),
    [anon_sym_99] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [sym_int] = ACTIONS(57),
    [anon_sym_null] = ACTIONS(117),
    [anon_sym_100] = ACTIONS(120),
    [sym_real] = ACTIONS(57),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_id] = ACTIONS(125),
    [anon_sym_public] = ACTIONS(125),
    [anon_sym_internal] = ACTIONS(125),
    [anon_sym_protected] = ACTIONS(125),
    [anon_sym_private] = ACTIONS(125),
    [anon_sym_static] = ACTIONS(125),
    [anon_sym_abstract] = ACTIONS(125),
    [anon_sym_const] = ACTIONS(125),
    [anon_sym_extern] = ACTIONS(125),
    [anon_sym_override] = ACTIONS(125),
    [anon_sym_partial] = ACTIONS(125),
    [anon_sym_readonly] = ACTIONS(125),
    [anon_sym_sealed] = ACTIONS(125),
    [anon_sym_unsafe] = ACTIONS(125),
    [anon_sym_virtual] = ACTIONS(125),
    [anon_sym_volatile] = ACTIONS(125),
    [anon_sym_explicit] = ACTIONS(125),
    [anon_sym_implicit] = ACTIONS(125),
    [anon_sym_] = ACTIONS(123),
    [anon_sym_2] = ACTIONS(125),
    [anon_sym_3] = ACTIONS(123),
    [anon_sym_4] = ACTIONS(123),
    [anon_sym_5] = ACTIONS(123),
    [anon_sym_6] = ACTIONS(125),
    [anon_sym_7] = ACTIONS(123),
    [anon_sym_8] = ACTIONS(125),
    [anon_sym_9] = ACTIONS(123),
    [anon_sym_10] = ACTIONS(125),
    [anon_sym_11] = ACTIONS(123),
    [anon_sym_12] = ACTIONS(125),
    [anon_sym_13] = ACTIONS(123),
    [anon_sym_14] = ACTIONS(125),
    [anon_sym_15] = ACTIONS(125),
    [anon_sym_16] = ACTIONS(125),
    [anon_sym_17] = ACTIONS(123),
    [anon_sym_18] = ACTIONS(125),
    [anon_sym_19] = ACTIONS(123),
    [anon_sym_20] = ACTIONS(125),
    [anon_sym_21] = ACTIONS(123),
    [anon_sym_class] = ACTIONS(125),
    [anon_sym_interface] = ACTIONS(125),
    [anon_sym_struct] = ACTIONS(125),
    [anon_sym_enum] = ACTIONS(125),
    [anon_sym_var] = ACTIONS(125),
    [anon_sym_delegate] = ACTIONS(125),
    [anon_sym_22] = ACTIONS(123),
    [anon_sym_23] = ACTIONS(123),
    [anon_sym_24] = ACTIONS(123),
    [anon_sym_25] = ACTIONS(123),
    [anon_sym_26] = ACTIONS(123),
    [anon_sym_27] = ACTIONS(123),
    [anon_sym_28] = ACTIONS(123),
    [anon_sym_29] = ACTIONS(123),
    [anon_sym_30] = ACTIONS(123),
    [anon_sym_31] = ACTIONS(123),
    [anon_sym_32] = ACTIONS(123),
    [anon_sym_33] = ACTIONS(123),
    [anon_sym_34] = ACTIONS(123),
    [anon_sym_35] = ACTIONS(123),
    [anon_sym_36] = ACTIONS(123),
    [anon_sym_37] = ACTIONS(123),
    [anon_sym_38] = ACTIONS(123),
    [anon_sym_39] = ACTIONS(125),
    [anon_sym_async] = ACTIONS(125),
    [anon_sym_await] = ACTIONS(125),
    [anon_sym_by] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_else] = ACTIONS(125),
    [anon_sym_foreach] = ACTIONS(125),
    [anon_sym_in] = ACTIONS(125),
    [anon_sym_for] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(125),
    [anon_sym_while] = ACTIONS(125),
    [anon_sym_switch] = ACTIONS(125),
    [anon_sym_case] = ACTIONS(125),
    [anon_sym_break] = ACTIONS(125),
    [anon_sym_return] = ACTIONS(125),
    [anon_sym_yield] = ACTIONS(125),
    [anon_sym_try] = ACTIONS(125),
    [anon_sym_catch] = ACTIONS(125),
    [anon_sym_finally] = ACTIONS(125),
    [anon_sym_continue] = ACTIONS(125),
    [anon_sym_from] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_select] = ACTIONS(125),
    [anon_sym_throw] = ACTIONS(125),
    [anon_sym_join] = ACTIONS(125),
    [anon_sym_goto] = ACTIONS(125),
    [anon_sym_lock] = ACTIONS(125),
    [anon_sym_orderby] = ACTIONS(125),
    [anon_sym_40] = ACTIONS(123),
    [anon_sym_41] = ACTIONS(123),
    [anon_sym_42] = ACTIONS(123),
    [anon_sym_43] = ACTIONS(123),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(123),
    [anon_sym_44] = ACTIONS(123),
    [anon_sym_45] = ACTIONS(123),
    [anon_sym_46] = ACTIONS(123),
    [anon_sym_47] = ACTIONS(123),
    [anon_sym_48] = ACTIONS(123),
    [anon_sym_49] = ACTIONS(123),
    [anon_sym_50] = ACTIONS(123),
    [anon_sym_51] = ACTIONS(123),
    [anon_sym_52] = ACTIONS(123),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(123),
    [anon_sym_53] = ACTIONS(123),
    [anon_sym_54] = ACTIONS(123),
    [anon_sym_55] = ACTIONS(125),
    [anon_sym_add] = ACTIONS(125),
    [anon_sym_using] = ACTIONS(125),
    [anon_sym_into] = ACTIONS(125),
    [anon_sym_value] = ACTIONS(125),
    [anon_sym_checked] = ACTIONS(125),
    [anon_sym_global] = ACTIONS(125),
    [anon_sym_let] = ACTIONS(125),
    [anon_sym_new] = ACTIONS(125),
    [anon_sym_operator] = ACTIONS(125),
    [anon_sym_params] = ACTIONS(125),
    [anon_sym_this] = ACTIONS(125),
    [anon_sym_typeof] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [anon_sym_equals] = ACTIONS(125),
    [anon_sym_long] = ACTIONS(125),
    [anon_sym_out] = ACTIONS(125),
    [anon_sym_ref] = ACTIONS(125),
    [anon_sym_sizeof] = ACTIONS(125),
    [anon_sym_descending] = ACTIONS(125),
    [anon_sym_ascending] = ACTIONS(125),
    [anon_sym_dynamic] = ACTIONS(125),
    [anon_sym_fixed] = ACTIONS(125),
    [anon_sym_group] = ACTIONS(125),
    [anon_sym_is] = ACTIONS(125),
    [anon_sym_get] = ACTIONS(125),
    [anon_sym_set] = ACTIONS(125),
    [anon_sym_on] = ACTIONS(125),
    [anon_sym_remove] = ACTIONS(125),
    [anon_sym_stackalloc] = ACTIONS(125),
    [anon_sym_unchecked] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(125),
    [anon_sym_base] = ACTIONS(125),
    [anon_sym_56] = ACTIONS(123),
    [anon_sym_57] = ACTIONS(125),
    [anon_sym_58] = ACTIONS(123),
    [anon_sym_59] = ACTIONS(123),
    [anon_sym_60] = ACTIONS(123),
    [anon_sym_61] = ACTIONS(123),
    [anon_sym_62] = ACTIONS(123),
    [anon_sym_63] = ACTIONS(123),
    [anon_sym_64] = ACTIONS(125),
    [anon_sym_65] = ACTIONS(123),
    [anon_sym_66] = ACTIONS(123),
    [anon_sym_67] = ACTIONS(123),
    [anon_sym_68] = ACTIONS(123),
    [anon_sym_69] = ACTIONS(123),
    [anon_sym_70] = ACTIONS(123),
    [anon_sym_71] = ACTIONS(123),
    [anon_sym_72] = ACTIONS(123),
    [anon_sym_int] = ACTIONS(125),
    [anon_sym_bool] = ACTIONS(125),
    [anon_sym_string] = ACTIONS(125),
    [anon_sym_float] = ACTIONS(125),
    [anon_sym_char] = ACTIONS(125),
    [anon_sym_double] = ACTIONS(125),
    [anon_sym_byte] = ACTIONS(125),
    [anon_sym_decimal] = ACTIONS(125),
    [anon_sym_sbyte] = ACTIONS(125),
    [anon_sym_short] = ACTIONS(125),
    [anon_sym_uint] = ACTIONS(125),
    [anon_sym_ushort] = ACTIONS(125),
    [anon_sym_object] = ACTIONS(125),
    [anon_sym_ulong] = ACTIONS(125),
    [anon_sym_73] = ACTIONS(123),
    [anon_sym_74] = ACTIONS(123),
    [anon_sym_75] = ACTIONS(125),
    [anon_sym_76] = ACTIONS(125),
    [anon_sym_77] = ACTIONS(125),
    [anon_sym_78] = ACTIONS(125),
    [anon_sym_79] = ACTIONS(125),
    [anon_sym_80] = ACTIONS(123),
    [anon_sym_81] = ACTIONS(123),
    [anon_sym_82] = ACTIONS(123),
    [anon_sym_83] = ACTIONS(123),
    [anon_sym_84] = ACTIONS(123),
    [anon_sym_85] = ACTIONS(125),
    [anon_sym_86] = ACTIONS(123),
    [anon_sym_87] = ACTIONS(125),
    [anon_sym_88] = ACTIONS(125),
    [anon_sym_89] = ACTIONS(125),
    [anon_sym_90] = ACTIONS(125),
    [anon_sym_91] = ACTIONS(125),
    [anon_sym_92] = ACTIONS(125),
    [anon_sym_93] = ACTIONS(125),
    [anon_sym_94] = ACTIONS(123),
    [sym_type] = ACTIONS(123),
    [sym_comment] = ACTIONS(123),
    [aux_sym_z_token1] = ACTIONS(125),
    [aux_sym_z_token2] = ACTIONS(125),
    [aux_sym_z_token3] = ACTIONS(123),
    [sym_str] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_95] = ACTIONS(123),
    [anon_sym_96] = ACTIONS(123),
    [anon_sym_97] = ACTIONS(123),
    [anon_sym_98] = ACTIONS(123),
    [anon_sym_99] = ACTIONS(123),
    [anon_sym_SQUOTE] = ACTIONS(123),
    [sym_int] = ACTIONS(125),
    [anon_sym_null] = ACTIONS(125),
    [anon_sym_100] = ACTIONS(123),
    [sym_real] = ACTIONS(125),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_id] = ACTIONS(129),
    [anon_sym_public] = ACTIONS(129),
    [anon_sym_internal] = ACTIONS(129),
    [anon_sym_protected] = ACTIONS(129),
    [anon_sym_private] = ACTIONS(129),
    [anon_sym_static] = ACTIONS(129),
    [anon_sym_abstract] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_extern] = ACTIONS(129),
    [anon_sym_override] = ACTIONS(129),
    [anon_sym_partial] = ACTIONS(129),
    [anon_sym_readonly] = ACTIONS(129),
    [anon_sym_sealed] = ACTIONS(129),
    [anon_sym_unsafe] = ACTIONS(129),
    [anon_sym_virtual] = ACTIONS(129),
    [anon_sym_volatile] = ACTIONS(129),
    [anon_sym_explicit] = ACTIONS(129),
    [anon_sym_implicit] = ACTIONS(129),
    [anon_sym_] = ACTIONS(127),
    [anon_sym_2] = ACTIONS(129),
    [anon_sym_3] = ACTIONS(127),
    [anon_sym_4] = ACTIONS(127),
    [anon_sym_5] = ACTIONS(127),
    [anon_sym_6] = ACTIONS(129),
    [anon_sym_7] = ACTIONS(127),
    [anon_sym_8] = ACTIONS(129),
    [anon_sym_9] = ACTIONS(127),
    [anon_sym_10] = ACTIONS(129),
    [anon_sym_11] = ACTIONS(127),
    [anon_sym_12] = ACTIONS(129),
    [anon_sym_13] = ACTIONS(127),
    [anon_sym_14] = ACTIONS(129),
    [anon_sym_15] = ACTIONS(129),
    [anon_sym_16] = ACTIONS(129),
    [anon_sym_17] = ACTIONS(127),
    [anon_sym_18] = ACTIONS(129),
    [anon_sym_19] = ACTIONS(127),
    [anon_sym_20] = ACTIONS(129),
    [anon_sym_21] = ACTIONS(127),
    [anon_sym_class] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [anon_sym_struct] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_delegate] = ACTIONS(129),
    [anon_sym_22] = ACTIONS(127),
    [anon_sym_23] = ACTIONS(127),
    [anon_sym_24] = ACTIONS(127),
    [anon_sym_25] = ACTIONS(127),
    [anon_sym_26] = ACTIONS(127),
    [anon_sym_27] = ACTIONS(127),
    [anon_sym_28] = ACTIONS(127),
    [anon_sym_29] = ACTIONS(127),
    [anon_sym_30] = ACTIONS(127),
    [anon_sym_31] = ACTIONS(127),
    [anon_sym_32] = ACTIONS(127),
    [anon_sym_33] = ACTIONS(127),
    [anon_sym_34] = ACTIONS(127),
    [anon_sym_35] = ACTIONS(127),
    [anon_sym_36] = ACTIONS(127),
    [anon_sym_37] = ACTIONS(127),
    [anon_sym_38] = ACTIONS(127),
    [anon_sym_39] = ACTIONS(129),
    [anon_sym_async] = ACTIONS(129),
    [anon_sym_await] = ACTIONS(129),
    [anon_sym_by] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_foreach] = ACTIONS(129),
    [anon_sym_in] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_switch] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [anon_sym_try] = ACTIONS(129),
    [anon_sym_catch] = ACTIONS(129),
    [anon_sym_finally] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(129),
    [anon_sym_from] = ACTIONS(129),
    [anon_sym_where] = ACTIONS(129),
    [anon_sym_select] = ACTIONS(129),
    [anon_sym_throw] = ACTIONS(129),
    [anon_sym_join] = ACTIONS(129),
    [anon_sym_goto] = ACTIONS(129),
    [anon_sym_lock] = ACTIONS(129),
    [anon_sym_orderby] = ACTIONS(129),
    [anon_sym_40] = ACTIONS(127),
    [anon_sym_41] = ACTIONS(127),
    [anon_sym_42] = ACTIONS(127),
    [anon_sym_43] = ACTIONS(127),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(127),
    [anon_sym_44] = ACTIONS(127),
    [anon_sym_45] = ACTIONS(127),
    [anon_sym_46] = ACTIONS(127),
    [anon_sym_47] = ACTIONS(127),
    [anon_sym_48] = ACTIONS(127),
    [anon_sym_49] = ACTIONS(127),
    [anon_sym_50] = ACTIONS(127),
    [anon_sym_51] = ACTIONS(127),
    [anon_sym_52] = ACTIONS(127),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(127),
    [anon_sym_53] = ACTIONS(127),
    [anon_sym_54] = ACTIONS(127),
    [anon_sym_55] = ACTIONS(129),
    [anon_sym_add] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_into] = ACTIONS(129),
    [anon_sym_value] = ACTIONS(129),
    [anon_sym_checked] = ACTIONS(129),
    [anon_sym_global] = ACTIONS(129),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_new] = ACTIONS(129),
    [anon_sym_operator] = ACTIONS(129),
    [anon_sym_params] = ACTIONS(129),
    [anon_sym_this] = ACTIONS(129),
    [anon_sym_typeof] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_equals] = ACTIONS(129),
    [anon_sym_long] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_sizeof] = ACTIONS(129),
    [anon_sym_descending] = ACTIONS(129),
    [anon_sym_ascending] = ACTIONS(129),
    [anon_sym_dynamic] = ACTIONS(129),
    [anon_sym_fixed] = ACTIONS(129),
    [anon_sym_group] = ACTIONS(129),
    [anon_sym_is] = ACTIONS(129),
    [anon_sym_get] = ACTIONS(129),
    [anon_sym_set] = ACTIONS(129),
    [anon_sym_on] = ACTIONS(129),
    [anon_sym_remove] = ACTIONS(129),
    [anon_sym_stackalloc] = ACTIONS(129),
    [anon_sym_unchecked] = ACTIONS(129),
    [anon_sym_as] = ACTIONS(129),
    [anon_sym_base] = ACTIONS(129),
    [anon_sym_56] = ACTIONS(127),
    [anon_sym_57] = ACTIONS(129),
    [anon_sym_58] = ACTIONS(127),
    [anon_sym_59] = ACTIONS(127),
    [anon_sym_60] = ACTIONS(127),
    [anon_sym_61] = ACTIONS(127),
    [anon_sym_62] = ACTIONS(127),
    [anon_sym_63] = ACTIONS(127),
    [anon_sym_64] = ACTIONS(129),
    [anon_sym_65] = ACTIONS(127),
    [anon_sym_66] = ACTIONS(127),
    [anon_sym_67] = ACTIONS(127),
    [anon_sym_68] = ACTIONS(127),
    [anon_sym_69] = ACTIONS(127),
    [anon_sym_70] = ACTIONS(127),
    [anon_sym_71] = ACTIONS(127),
    [anon_sym_72] = ACTIONS(127),
    [anon_sym_int] = ACTIONS(129),
    [anon_sym_bool] = ACTIONS(129),
    [anon_sym_string] = ACTIONS(129),
    [anon_sym_float] = ACTIONS(129),
    [anon_sym_char] = ACTIONS(129),
    [anon_sym_double] = ACTIONS(129),
    [anon_sym_byte] = ACTIONS(129),
    [anon_sym_decimal] = ACTIONS(129),
    [anon_sym_sbyte] = ACTIONS(129),
    [anon_sym_short] = ACTIONS(129),
    [anon_sym_uint] = ACTIONS(129),
    [anon_sym_ushort] = ACTIONS(129),
    [anon_sym_object] = ACTIONS(129),
    [anon_sym_ulong] = ACTIONS(129),
    [anon_sym_73] = ACTIONS(127),
    [anon_sym_74] = ACTIONS(127),
    [anon_sym_75] = ACTIONS(129),
    [anon_sym_76] = ACTIONS(129),
    [anon_sym_77] = ACTIONS(129),
    [anon_sym_78] = ACTIONS(129),
    [anon_sym_79] = ACTIONS(129),
    [anon_sym_80] = ACTIONS(127),
    [anon_sym_81] = ACTIONS(127),
    [anon_sym_82] = ACTIONS(127),
    [anon_sym_83] = ACTIONS(127),
    [anon_sym_84] = ACTIONS(127),
    [anon_sym_85] = ACTIONS(129),
    [anon_sym_86] = ACTIONS(127),
    [anon_sym_87] = ACTIONS(129),
    [anon_sym_88] = ACTIONS(129),
    [anon_sym_89] = ACTIONS(129),
    [anon_sym_90] = ACTIONS(129),
    [anon_sym_91] = ACTIONS(129),
    [anon_sym_92] = ACTIONS(129),
    [anon_sym_93] = ACTIONS(129),
    [anon_sym_94] = ACTIONS(127),
    [sym_type] = ACTIONS(127),
    [sym_comment] = ACTIONS(127),
    [aux_sym_z_token1] = ACTIONS(129),
    [aux_sym_z_token2] = ACTIONS(129),
    [aux_sym_z_token3] = ACTIONS(127),
    [sym_str] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_95] = ACTIONS(127),
    [anon_sym_96] = ACTIONS(127),
    [anon_sym_97] = ACTIONS(127),
    [anon_sym_98] = ACTIONS(127),
    [anon_sym_99] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [sym_int] = ACTIONS(129),
    [anon_sym_null] = ACTIONS(129),
    [anon_sym_100] = ACTIONS(127),
    [sym_real] = ACTIONS(129),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_id] = ACTIONS(133),
    [anon_sym_public] = ACTIONS(133),
    [anon_sym_internal] = ACTIONS(133),
    [anon_sym_protected] = ACTIONS(133),
    [anon_sym_private] = ACTIONS(133),
    [anon_sym_static] = ACTIONS(133),
    [anon_sym_abstract] = ACTIONS(133),
    [anon_sym_const] = ACTIONS(133),
    [anon_sym_extern] = ACTIONS(133),
    [anon_sym_override] = ACTIONS(133),
    [anon_sym_partial] = ACTIONS(133),
    [anon_sym_readonly] = ACTIONS(133),
    [anon_sym_sealed] = ACTIONS(133),
    [anon_sym_unsafe] = ACTIONS(133),
    [anon_sym_virtual] = ACTIONS(133),
    [anon_sym_volatile] = ACTIONS(133),
    [anon_sym_explicit] = ACTIONS(133),
    [anon_sym_implicit] = ACTIONS(133),
    [anon_sym_] = ACTIONS(131),
    [anon_sym_2] = ACTIONS(133),
    [anon_sym_3] = ACTIONS(131),
    [anon_sym_4] = ACTIONS(131),
    [anon_sym_5] = ACTIONS(131),
    [anon_sym_6] = ACTIONS(133),
    [anon_sym_7] = ACTIONS(131),
    [anon_sym_8] = ACTIONS(133),
    [anon_sym_9] = ACTIONS(131),
    [anon_sym_10] = ACTIONS(133),
    [anon_sym_11] = ACTIONS(131),
    [anon_sym_12] = ACTIONS(133),
    [anon_sym_13] = ACTIONS(131),
    [anon_sym_14] = ACTIONS(133),
    [anon_sym_15] = ACTIONS(133),
    [anon_sym_16] = ACTIONS(133),
    [anon_sym_17] = ACTIONS(131),
    [anon_sym_18] = ACTIONS(133),
    [anon_sym_19] = ACTIONS(131),
    [anon_sym_20] = ACTIONS(133),
    [anon_sym_21] = ACTIONS(131),
    [anon_sym_class] = ACTIONS(133),
    [anon_sym_interface] = ACTIONS(133),
    [anon_sym_struct] = ACTIONS(133),
    [anon_sym_enum] = ACTIONS(133),
    [anon_sym_var] = ACTIONS(133),
    [anon_sym_delegate] = ACTIONS(133),
    [anon_sym_22] = ACTIONS(131),
    [anon_sym_23] = ACTIONS(131),
    [anon_sym_24] = ACTIONS(131),
    [anon_sym_25] = ACTIONS(131),
    [anon_sym_26] = ACTIONS(131),
    [anon_sym_27] = ACTIONS(131),
    [anon_sym_28] = ACTIONS(131),
    [anon_sym_29] = ACTIONS(131),
    [anon_sym_30] = ACTIONS(131),
    [anon_sym_31] = ACTIONS(131),
    [anon_sym_32] = ACTIONS(131),
    [anon_sym_33] = ACTIONS(131),
    [anon_sym_34] = ACTIONS(131),
    [anon_sym_35] = ACTIONS(131),
    [anon_sym_36] = ACTIONS(131),
    [anon_sym_37] = ACTIONS(131),
    [anon_sym_38] = ACTIONS(131),
    [anon_sym_39] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(133),
    [anon_sym_await] = ACTIONS(133),
    [anon_sym_by] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_foreach] = ACTIONS(133),
    [anon_sym_in] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(133),
    [anon_sym_do] = ACTIONS(133),
    [anon_sym_while] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(133),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_break] = ACTIONS(133),
    [anon_sym_return] = ACTIONS(133),
    [anon_sym_yield] = ACTIONS(133),
    [anon_sym_try] = ACTIONS(133),
    [anon_sym_catch] = ACTIONS(133),
    [anon_sym_finally] = ACTIONS(133),
    [anon_sym_continue] = ACTIONS(133),
    [anon_sym_from] = ACTIONS(133),
    [anon_sym_where] = ACTIONS(133),
    [anon_sym_select] = ACTIONS(133),
    [anon_sym_throw] = ACTIONS(133),
    [anon_sym_join] = ACTIONS(133),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_lock] = ACTIONS(133),
    [anon_sym_orderby] = ACTIONS(133),
    [anon_sym_40] = ACTIONS(131),
    [anon_sym_41] = ACTIONS(131),
    [anon_sym_42] = ACTIONS(131),
    [anon_sym_43] = ACTIONS(131),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(131),
    [anon_sym_44] = ACTIONS(131),
    [anon_sym_45] = ACTIONS(131),
    [anon_sym_46] = ACTIONS(131),
    [anon_sym_47] = ACTIONS(131),
    [anon_sym_48] = ACTIONS(131),
    [anon_sym_49] = ACTIONS(131),
    [anon_sym_50] = ACTIONS(131),
    [anon_sym_51] = ACTIONS(131),
    [anon_sym_52] = ACTIONS(131),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(131),
    [anon_sym_53] = ACTIONS(131),
    [anon_sym_54] = ACTIONS(131),
    [anon_sym_55] = ACTIONS(133),
    [anon_sym_add] = ACTIONS(133),
    [anon_sym_using] = ACTIONS(133),
    [anon_sym_into] = ACTIONS(133),
    [anon_sym_value] = ACTIONS(133),
    [anon_sym_checked] = ACTIONS(133),
    [anon_sym_global] = ACTIONS(133),
    [anon_sym_let] = ACTIONS(133),
    [anon_sym_new] = ACTIONS(133),
    [anon_sym_operator] = ACTIONS(133),
    [anon_sym_params] = ACTIONS(133),
    [anon_sym_this] = ACTIONS(133),
    [anon_sym_typeof] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_equals] = ACTIONS(133),
    [anon_sym_long] = ACTIONS(133),
    [anon_sym_out] = ACTIONS(133),
    [anon_sym_ref] = ACTIONS(133),
    [anon_sym_sizeof] = ACTIONS(133),
    [anon_sym_descending] = ACTIONS(133),
    [anon_sym_ascending] = ACTIONS(133),
    [anon_sym_dynamic] = ACTIONS(133),
    [anon_sym_fixed] = ACTIONS(133),
    [anon_sym_group] = ACTIONS(133),
    [anon_sym_is] = ACTIONS(133),
    [anon_sym_get] = ACTIONS(133),
    [anon_sym_set] = ACTIONS(133),
    [anon_sym_on] = ACTIONS(133),
    [anon_sym_remove] = ACTIONS(133),
    [anon_sym_stackalloc] = ACTIONS(133),
    [anon_sym_unchecked] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(133),
    [anon_sym_base] = ACTIONS(133),
    [anon_sym_56] = ACTIONS(131),
    [anon_sym_57] = ACTIONS(133),
    [anon_sym_58] = ACTIONS(131),
    [anon_sym_59] = ACTIONS(131),
    [anon_sym_60] = ACTIONS(131),
    [anon_sym_61] = ACTIONS(131),
    [anon_sym_62] = ACTIONS(131),
    [anon_sym_63] = ACTIONS(131),
    [anon_sym_64] = ACTIONS(133),
    [anon_sym_65] = ACTIONS(131),
    [anon_sym_66] = ACTIONS(131),
    [anon_sym_67] = ACTIONS(131),
    [anon_sym_68] = ACTIONS(131),
    [anon_sym_69] = ACTIONS(131),
    [anon_sym_70] = ACTIONS(131),
    [anon_sym_71] = ACTIONS(131),
    [anon_sym_72] = ACTIONS(131),
    [anon_sym_int] = ACTIONS(133),
    [anon_sym_bool] = ACTIONS(133),
    [anon_sym_string] = ACTIONS(133),
    [anon_sym_float] = ACTIONS(133),
    [anon_sym_char] = ACTIONS(133),
    [anon_sym_double] = ACTIONS(133),
    [anon_sym_byte] = ACTIONS(133),
    [anon_sym_decimal] = ACTIONS(133),
    [anon_sym_sbyte] = ACTIONS(133),
    [anon_sym_short] = ACTIONS(133),
    [anon_sym_uint] = ACTIONS(133),
    [anon_sym_ushort] = ACTIONS(133),
    [anon_sym_object] = ACTIONS(133),
    [anon_sym_ulong] = ACTIONS(133),
    [anon_sym_73] = ACTIONS(131),
    [anon_sym_74] = ACTIONS(131),
    [anon_sym_75] = ACTIONS(133),
    [anon_sym_76] = ACTIONS(133),
    [anon_sym_77] = ACTIONS(133),
    [anon_sym_78] = ACTIONS(133),
    [anon_sym_79] = ACTIONS(133),
    [anon_sym_80] = ACTIONS(131),
    [anon_sym_81] = ACTIONS(131),
    [anon_sym_82] = ACTIONS(131),
    [anon_sym_83] = ACTIONS(131),
    [anon_sym_84] = ACTIONS(131),
    [anon_sym_85] = ACTIONS(133),
    [anon_sym_86] = ACTIONS(131),
    [anon_sym_87] = ACTIONS(133),
    [anon_sym_88] = ACTIONS(133),
    [anon_sym_89] = ACTIONS(133),
    [anon_sym_90] = ACTIONS(133),
    [anon_sym_91] = ACTIONS(133),
    [anon_sym_92] = ACTIONS(133),
    [anon_sym_93] = ACTIONS(133),
    [anon_sym_94] = ACTIONS(131),
    [sym_type] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
    [aux_sym_z_token1] = ACTIONS(133),
    [aux_sym_z_token2] = ACTIONS(133),
    [aux_sym_z_token3] = ACTIONS(131),
    [sym_str] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_95] = ACTIONS(131),
    [anon_sym_96] = ACTIONS(131),
    [anon_sym_97] = ACTIONS(131),
    [anon_sym_98] = ACTIONS(131),
    [anon_sym_99] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [sym_int] = ACTIONS(133),
    [anon_sym_null] = ACTIONS(133),
    [anon_sym_100] = ACTIONS(131),
    [sym_real] = ACTIONS(133),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_id] = ACTIONS(137),
    [anon_sym_public] = ACTIONS(137),
    [anon_sym_internal] = ACTIONS(137),
    [anon_sym_protected] = ACTIONS(137),
    [anon_sym_private] = ACTIONS(137),
    [anon_sym_static] = ACTIONS(137),
    [anon_sym_abstract] = ACTIONS(137),
    [anon_sym_const] = ACTIONS(137),
    [anon_sym_extern] = ACTIONS(137),
    [anon_sym_override] = ACTIONS(137),
    [anon_sym_partial] = ACTIONS(137),
    [anon_sym_readonly] = ACTIONS(137),
    [anon_sym_sealed] = ACTIONS(137),
    [anon_sym_unsafe] = ACTIONS(137),
    [anon_sym_virtual] = ACTIONS(137),
    [anon_sym_volatile] = ACTIONS(137),
    [anon_sym_explicit] = ACTIONS(137),
    [anon_sym_implicit] = ACTIONS(137),
    [anon_sym_] = ACTIONS(135),
    [anon_sym_2] = ACTIONS(137),
    [anon_sym_3] = ACTIONS(135),
    [anon_sym_4] = ACTIONS(135),
    [anon_sym_5] = ACTIONS(135),
    [anon_sym_6] = ACTIONS(137),
    [anon_sym_7] = ACTIONS(135),
    [anon_sym_8] = ACTIONS(137),
    [anon_sym_9] = ACTIONS(135),
    [anon_sym_10] = ACTIONS(137),
    [anon_sym_11] = ACTIONS(135),
    [anon_sym_12] = ACTIONS(137),
    [anon_sym_13] = ACTIONS(135),
    [anon_sym_14] = ACTIONS(137),
    [anon_sym_15] = ACTIONS(137),
    [anon_sym_16] = ACTIONS(137),
    [anon_sym_17] = ACTIONS(135),
    [anon_sym_18] = ACTIONS(137),
    [anon_sym_19] = ACTIONS(135),
    [anon_sym_20] = ACTIONS(137),
    [anon_sym_21] = ACTIONS(135),
    [anon_sym_class] = ACTIONS(137),
    [anon_sym_interface] = ACTIONS(137),
    [anon_sym_struct] = ACTIONS(137),
    [anon_sym_enum] = ACTIONS(137),
    [anon_sym_var] = ACTIONS(137),
    [anon_sym_delegate] = ACTIONS(137),
    [anon_sym_22] = ACTIONS(135),
    [anon_sym_23] = ACTIONS(135),
    [anon_sym_24] = ACTIONS(135),
    [anon_sym_25] = ACTIONS(135),
    [anon_sym_26] = ACTIONS(135),
    [anon_sym_27] = ACTIONS(135),
    [anon_sym_28] = ACTIONS(135),
    [anon_sym_29] = ACTIONS(135),
    [anon_sym_30] = ACTIONS(135),
    [anon_sym_31] = ACTIONS(135),
    [anon_sym_32] = ACTIONS(135),
    [anon_sym_33] = ACTIONS(135),
    [anon_sym_34] = ACTIONS(135),
    [anon_sym_35] = ACTIONS(135),
    [anon_sym_36] = ACTIONS(135),
    [anon_sym_37] = ACTIONS(135),
    [anon_sym_38] = ACTIONS(135),
    [anon_sym_39] = ACTIONS(137),
    [anon_sym_async] = ACTIONS(137),
    [anon_sym_await] = ACTIONS(137),
    [anon_sym_by] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(137),
    [anon_sym_foreach] = ACTIONS(137),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(137),
    [anon_sym_do] = ACTIONS(137),
    [anon_sym_while] = ACTIONS(137),
    [anon_sym_switch] = ACTIONS(137),
    [anon_sym_case] = ACTIONS(137),
    [anon_sym_break] = ACTIONS(137),
    [anon_sym_return] = ACTIONS(137),
    [anon_sym_yield] = ACTIONS(137),
    [anon_sym_try] = ACTIONS(137),
    [anon_sym_catch] = ACTIONS(137),
    [anon_sym_finally] = ACTIONS(137),
    [anon_sym_continue] = ACTIONS(137),
    [anon_sym_from] = ACTIONS(137),
    [anon_sym_where] = ACTIONS(137),
    [anon_sym_select] = ACTIONS(137),
    [anon_sym_throw] = ACTIONS(137),
    [anon_sym_join] = ACTIONS(137),
    [anon_sym_goto] = ACTIONS(137),
    [anon_sym_lock] = ACTIONS(137),
    [anon_sym_orderby] = ACTIONS(137),
    [anon_sym_40] = ACTIONS(135),
    [anon_sym_41] = ACTIONS(135),
    [anon_sym_42] = ACTIONS(135),
    [anon_sym_43] = ACTIONS(135),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(135),
    [anon_sym_44] = ACTIONS(135),
    [anon_sym_45] = ACTIONS(135),
    [anon_sym_46] = ACTIONS(135),
    [anon_sym_47] = ACTIONS(135),
    [anon_sym_48] = ACTIONS(135),
    [anon_sym_49] = ACTIONS(135),
    [anon_sym_50] = ACTIONS(135),
    [anon_sym_51] = ACTIONS(135),
    [anon_sym_52] = ACTIONS(135),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(135),
    [anon_sym_53] = ACTIONS(135),
    [anon_sym_54] = ACTIONS(135),
    [anon_sym_55] = ACTIONS(137),
    [anon_sym_add] = ACTIONS(137),
    [anon_sym_using] = ACTIONS(137),
    [anon_sym_into] = ACTIONS(137),
    [anon_sym_value] = ACTIONS(137),
    [anon_sym_checked] = ACTIONS(137),
    [anon_sym_global] = ACTIONS(137),
    [anon_sym_let] = ACTIONS(137),
    [anon_sym_new] = ACTIONS(137),
    [anon_sym_operator] = ACTIONS(137),
    [anon_sym_params] = ACTIONS(137),
    [anon_sym_this] = ACTIONS(137),
    [anon_sym_typeof] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_equals] = ACTIONS(137),
    [anon_sym_long] = ACTIONS(137),
    [anon_sym_out] = ACTIONS(137),
    [anon_sym_ref] = ACTIONS(137),
    [anon_sym_sizeof] = ACTIONS(137),
    [anon_sym_descending] = ACTIONS(137),
    [anon_sym_ascending] = ACTIONS(137),
    [anon_sym_dynamic] = ACTIONS(137),
    [anon_sym_fixed] = ACTIONS(137),
    [anon_sym_group] = ACTIONS(137),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_get] = ACTIONS(137),
    [anon_sym_set] = ACTIONS(137),
    [anon_sym_on] = ACTIONS(137),
    [anon_sym_remove] = ACTIONS(137),
    [anon_sym_stackalloc] = ACTIONS(137),
    [anon_sym_unchecked] = ACTIONS(137),
    [anon_sym_as] = ACTIONS(137),
    [anon_sym_base] = ACTIONS(137),
    [anon_sym_56] = ACTIONS(135),
    [anon_sym_57] = ACTIONS(137),
    [anon_sym_58] = ACTIONS(135),
    [anon_sym_59] = ACTIONS(135),
    [anon_sym_60] = ACTIONS(135),
    [anon_sym_61] = ACTIONS(135),
    [anon_sym_62] = ACTIONS(135),
    [anon_sym_63] = ACTIONS(135),
    [anon_sym_64] = ACTIONS(137),
    [anon_sym_65] = ACTIONS(135),
    [anon_sym_66] = ACTIONS(135),
    [anon_sym_67] = ACTIONS(135),
    [anon_sym_68] = ACTIONS(135),
    [anon_sym_69] = ACTIONS(135),
    [anon_sym_70] = ACTIONS(135),
    [anon_sym_71] = ACTIONS(135),
    [anon_sym_72] = ACTIONS(135),
    [anon_sym_int] = ACTIONS(137),
    [anon_sym_bool] = ACTIONS(137),
    [anon_sym_string] = ACTIONS(137),
    [anon_sym_float] = ACTIONS(137),
    [anon_sym_char] = ACTIONS(137),
    [anon_sym_double] = ACTIONS(137),
    [anon_sym_byte] = ACTIONS(137),
    [anon_sym_decimal] = ACTIONS(137),
    [anon_sym_sbyte] = ACTIONS(137),
    [anon_sym_short] = ACTIONS(137),
    [anon_sym_uint] = ACTIONS(137),
    [anon_sym_ushort] = ACTIONS(137),
    [anon_sym_object] = ACTIONS(137),
    [anon_sym_ulong] = ACTIONS(137),
    [anon_sym_73] = ACTIONS(135),
    [anon_sym_74] = ACTIONS(135),
    [anon_sym_75] = ACTIONS(137),
    [anon_sym_76] = ACTIONS(137),
    [anon_sym_77] = ACTIONS(137),
    [anon_sym_78] = ACTIONS(137),
    [anon_sym_79] = ACTIONS(137),
    [anon_sym_80] = ACTIONS(135),
    [anon_sym_81] = ACTIONS(135),
    [anon_sym_82] = ACTIONS(135),
    [anon_sym_83] = ACTIONS(135),
    [anon_sym_84] = ACTIONS(135),
    [anon_sym_85] = ACTIONS(137),
    [anon_sym_86] = ACTIONS(135),
    [anon_sym_87] = ACTIONS(137),
    [anon_sym_88] = ACTIONS(137),
    [anon_sym_89] = ACTIONS(137),
    [anon_sym_90] = ACTIONS(137),
    [anon_sym_91] = ACTIONS(137),
    [anon_sym_92] = ACTIONS(137),
    [anon_sym_93] = ACTIONS(137),
    [anon_sym_94] = ACTIONS(135),
    [sym_type] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [aux_sym_z_token1] = ACTIONS(137),
    [aux_sym_z_token2] = ACTIONS(137),
    [aux_sym_z_token3] = ACTIONS(135),
    [sym_str] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_95] = ACTIONS(135),
    [anon_sym_96] = ACTIONS(135),
    [anon_sym_97] = ACTIONS(135),
    [anon_sym_98] = ACTIONS(135),
    [anon_sym_99] = ACTIONS(135),
    [anon_sym_SQUOTE] = ACTIONS(135),
    [sym_int] = ACTIONS(137),
    [anon_sym_null] = ACTIONS(137),
    [anon_sym_100] = ACTIONS(135),
    [sym_real] = ACTIONS(137),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_id] = ACTIONS(141),
    [anon_sym_public] = ACTIONS(141),
    [anon_sym_internal] = ACTIONS(141),
    [anon_sym_protected] = ACTIONS(141),
    [anon_sym_private] = ACTIONS(141),
    [anon_sym_static] = ACTIONS(141),
    [anon_sym_abstract] = ACTIONS(141),
    [anon_sym_const] = ACTIONS(141),
    [anon_sym_extern] = ACTIONS(141),
    [anon_sym_override] = ACTIONS(141),
    [anon_sym_partial] = ACTIONS(141),
    [anon_sym_readonly] = ACTIONS(141),
    [anon_sym_sealed] = ACTIONS(141),
    [anon_sym_unsafe] = ACTIONS(141),
    [anon_sym_virtual] = ACTIONS(141),
    [anon_sym_volatile] = ACTIONS(141),
    [anon_sym_explicit] = ACTIONS(141),
    [anon_sym_implicit] = ACTIONS(141),
    [anon_sym_] = ACTIONS(139),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(139),
    [anon_sym_4] = ACTIONS(139),
    [anon_sym_5] = ACTIONS(139),
    [anon_sym_6] = ACTIONS(141),
    [anon_sym_7] = ACTIONS(139),
    [anon_sym_8] = ACTIONS(141),
    [anon_sym_9] = ACTIONS(139),
    [anon_sym_10] = ACTIONS(141),
    [anon_sym_11] = ACTIONS(139),
    [anon_sym_12] = ACTIONS(141),
    [anon_sym_13] = ACTIONS(139),
    [anon_sym_14] = ACTIONS(141),
    [anon_sym_15] = ACTIONS(141),
    [anon_sym_16] = ACTIONS(141),
    [anon_sym_17] = ACTIONS(139),
    [anon_sym_18] = ACTIONS(141),
    [anon_sym_19] = ACTIONS(139),
    [anon_sym_20] = ACTIONS(141),
    [anon_sym_21] = ACTIONS(139),
    [anon_sym_class] = ACTIONS(141),
    [anon_sym_interface] = ACTIONS(141),
    [anon_sym_struct] = ACTIONS(141),
    [anon_sym_enum] = ACTIONS(141),
    [anon_sym_var] = ACTIONS(141),
    [anon_sym_delegate] = ACTIONS(141),
    [anon_sym_22] = ACTIONS(139),
    [anon_sym_23] = ACTIONS(139),
    [anon_sym_24] = ACTIONS(139),
    [anon_sym_25] = ACTIONS(139),
    [anon_sym_26] = ACTIONS(139),
    [anon_sym_27] = ACTIONS(139),
    [anon_sym_28] = ACTIONS(139),
    [anon_sym_29] = ACTIONS(139),
    [anon_sym_30] = ACTIONS(139),
    [anon_sym_31] = ACTIONS(139),
    [anon_sym_32] = ACTIONS(139),
    [anon_sym_33] = ACTIONS(139),
    [anon_sym_34] = ACTIONS(139),
    [anon_sym_35] = ACTIONS(139),
    [anon_sym_36] = ACTIONS(139),
    [anon_sym_37] = ACTIONS(139),
    [anon_sym_38] = ACTIONS(139),
    [anon_sym_39] = ACTIONS(141),
    [anon_sym_async] = ACTIONS(141),
    [anon_sym_await] = ACTIONS(141),
    [anon_sym_by] = ACTIONS(141),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_else] = ACTIONS(141),
    [anon_sym_foreach] = ACTIONS(141),
    [anon_sym_in] = ACTIONS(141),
    [anon_sym_for] = ACTIONS(141),
    [anon_sym_do] = ACTIONS(141),
    [anon_sym_while] = ACTIONS(141),
    [anon_sym_switch] = ACTIONS(141),
    [anon_sym_case] = ACTIONS(141),
    [anon_sym_break] = ACTIONS(141),
    [anon_sym_return] = ACTIONS(141),
    [anon_sym_yield] = ACTIONS(141),
    [anon_sym_try] = ACTIONS(141),
    [anon_sym_catch] = ACTIONS(141),
    [anon_sym_finally] = ACTIONS(141),
    [anon_sym_continue] = ACTIONS(141),
    [anon_sym_from] = ACTIONS(141),
    [anon_sym_where] = ACTIONS(141),
    [anon_sym_select] = ACTIONS(141),
    [anon_sym_throw] = ACTIONS(141),
    [anon_sym_join] = ACTIONS(141),
    [anon_sym_goto] = ACTIONS(141),
    [anon_sym_lock] = ACTIONS(141),
    [anon_sym_orderby] = ACTIONS(141),
    [anon_sym_40] = ACTIONS(139),
    [anon_sym_41] = ACTIONS(139),
    [anon_sym_42] = ACTIONS(139),
    [anon_sym_43] = ACTIONS(139),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(139),
    [anon_sym_44] = ACTIONS(139),
    [anon_sym_45] = ACTIONS(139),
    [anon_sym_46] = ACTIONS(139),
    [anon_sym_47] = ACTIONS(139),
    [anon_sym_48] = ACTIONS(139),
    [anon_sym_49] = ACTIONS(139),
    [anon_sym_50] = ACTIONS(139),
    [anon_sym_51] = ACTIONS(139),
    [anon_sym_52] = ACTIONS(139),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(139),
    [anon_sym_53] = ACTIONS(139),
    [anon_sym_54] = ACTIONS(139),
    [anon_sym_55] = ACTIONS(141),
    [anon_sym_add] = ACTIONS(141),
    [anon_sym_using] = ACTIONS(141),
    [anon_sym_into] = ACTIONS(141),
    [anon_sym_value] = ACTIONS(141),
    [anon_sym_checked] = ACTIONS(141),
    [anon_sym_global] = ACTIONS(141),
    [anon_sym_let] = ACTIONS(141),
    [anon_sym_new] = ACTIONS(141),
    [anon_sym_operator] = ACTIONS(141),
    [anon_sym_params] = ACTIONS(141),
    [anon_sym_this] = ACTIONS(141),
    [anon_sym_typeof] = ACTIONS(141),
    [anon_sym_default] = ACTIONS(141),
    [anon_sym_equals] = ACTIONS(141),
    [anon_sym_long] = ACTIONS(141),
    [anon_sym_out] = ACTIONS(141),
    [anon_sym_ref] = ACTIONS(141),
    [anon_sym_sizeof] = ACTIONS(141),
    [anon_sym_descending] = ACTIONS(141),
    [anon_sym_ascending] = ACTIONS(141),
    [anon_sym_dynamic] = ACTIONS(141),
    [anon_sym_fixed] = ACTIONS(141),
    [anon_sym_group] = ACTIONS(141),
    [anon_sym_is] = ACTIONS(141),
    [anon_sym_get] = ACTIONS(141),
    [anon_sym_set] = ACTIONS(141),
    [anon_sym_on] = ACTIONS(141),
    [anon_sym_remove] = ACTIONS(141),
    [anon_sym_stackalloc] = ACTIONS(141),
    [anon_sym_unchecked] = ACTIONS(141),
    [anon_sym_as] = ACTIONS(141),
    [anon_sym_base] = ACTIONS(141),
    [anon_sym_56] = ACTIONS(139),
    [anon_sym_57] = ACTIONS(141),
    [anon_sym_58] = ACTIONS(139),
    [anon_sym_59] = ACTIONS(139),
    [anon_sym_60] = ACTIONS(139),
    [anon_sym_61] = ACTIONS(139),
    [anon_sym_62] = ACTIONS(139),
    [anon_sym_63] = ACTIONS(139),
    [anon_sym_64] = ACTIONS(141),
    [anon_sym_65] = ACTIONS(139),
    [anon_sym_66] = ACTIONS(139),
    [anon_sym_67] = ACTIONS(139),
    [anon_sym_68] = ACTIONS(139),
    [anon_sym_69] = ACTIONS(139),
    [anon_sym_70] = ACTIONS(139),
    [anon_sym_71] = ACTIONS(139),
    [anon_sym_72] = ACTIONS(139),
    [anon_sym_int] = ACTIONS(141),
    [anon_sym_bool] = ACTIONS(141),
    [anon_sym_string] = ACTIONS(141),
    [anon_sym_float] = ACTIONS(141),
    [anon_sym_char] = ACTIONS(141),
    [anon_sym_double] = ACTIONS(141),
    [anon_sym_byte] = ACTIONS(141),
    [anon_sym_decimal] = ACTIONS(141),
    [anon_sym_sbyte] = ACTIONS(141),
    [anon_sym_short] = ACTIONS(141),
    [anon_sym_uint] = ACTIONS(141),
    [anon_sym_ushort] = ACTIONS(141),
    [anon_sym_object] = ACTIONS(141),
    [anon_sym_ulong] = ACTIONS(141),
    [anon_sym_73] = ACTIONS(139),
    [anon_sym_74] = ACTIONS(139),
    [anon_sym_75] = ACTIONS(141),
    [anon_sym_76] = ACTIONS(141),
    [anon_sym_77] = ACTIONS(141),
    [anon_sym_78] = ACTIONS(141),
    [anon_sym_79] = ACTIONS(141),
    [anon_sym_80] = ACTIONS(139),
    [anon_sym_81] = ACTIONS(139),
    [anon_sym_82] = ACTIONS(139),
    [anon_sym_83] = ACTIONS(139),
    [anon_sym_84] = ACTIONS(139),
    [anon_sym_85] = ACTIONS(141),
    [anon_sym_86] = ACTIONS(139),
    [anon_sym_87] = ACTIONS(141),
    [anon_sym_88] = ACTIONS(141),
    [anon_sym_89] = ACTIONS(141),
    [anon_sym_90] = ACTIONS(141),
    [anon_sym_91] = ACTIONS(141),
    [anon_sym_92] = ACTIONS(141),
    [anon_sym_93] = ACTIONS(141),
    [anon_sym_94] = ACTIONS(139),
    [sym_type] = ACTIONS(139),
    [sym_comment] = ACTIONS(139),
    [aux_sym_z_token1] = ACTIONS(141),
    [aux_sym_z_token2] = ACTIONS(141),
    [aux_sym_z_token3] = ACTIONS(139),
    [sym_str] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_95] = ACTIONS(139),
    [anon_sym_96] = ACTIONS(139),
    [anon_sym_97] = ACTIONS(139),
    [anon_sym_98] = ACTIONS(139),
    [anon_sym_99] = ACTIONS(139),
    [anon_sym_SQUOTE] = ACTIONS(139),
    [sym_int] = ACTIONS(141),
    [anon_sym_null] = ACTIONS(141),
    [anon_sym_100] = ACTIONS(139),
    [sym_real] = ACTIONS(141),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_id] = ACTIONS(145),
    [anon_sym_public] = ACTIONS(145),
    [anon_sym_internal] = ACTIONS(145),
    [anon_sym_protected] = ACTIONS(145),
    [anon_sym_private] = ACTIONS(145),
    [anon_sym_static] = ACTIONS(145),
    [anon_sym_abstract] = ACTIONS(145),
    [anon_sym_const] = ACTIONS(145),
    [anon_sym_extern] = ACTIONS(145),
    [anon_sym_override] = ACTIONS(145),
    [anon_sym_partial] = ACTIONS(145),
    [anon_sym_readonly] = ACTIONS(145),
    [anon_sym_sealed] = ACTIONS(145),
    [anon_sym_unsafe] = ACTIONS(145),
    [anon_sym_virtual] = ACTIONS(145),
    [anon_sym_volatile] = ACTIONS(145),
    [anon_sym_explicit] = ACTIONS(145),
    [anon_sym_implicit] = ACTIONS(145),
    [anon_sym_] = ACTIONS(143),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(143),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym_5] = ACTIONS(143),
    [anon_sym_6] = ACTIONS(145),
    [anon_sym_7] = ACTIONS(143),
    [anon_sym_8] = ACTIONS(145),
    [anon_sym_9] = ACTIONS(143),
    [anon_sym_10] = ACTIONS(145),
    [anon_sym_11] = ACTIONS(143),
    [anon_sym_12] = ACTIONS(145),
    [anon_sym_13] = ACTIONS(143),
    [anon_sym_14] = ACTIONS(145),
    [anon_sym_15] = ACTIONS(145),
    [anon_sym_16] = ACTIONS(145),
    [anon_sym_17] = ACTIONS(143),
    [anon_sym_18] = ACTIONS(145),
    [anon_sym_19] = ACTIONS(143),
    [anon_sym_20] = ACTIONS(145),
    [anon_sym_21] = ACTIONS(143),
    [anon_sym_class] = ACTIONS(145),
    [anon_sym_interface] = ACTIONS(145),
    [anon_sym_struct] = ACTIONS(145),
    [anon_sym_enum] = ACTIONS(145),
    [anon_sym_var] = ACTIONS(145),
    [anon_sym_delegate] = ACTIONS(145),
    [anon_sym_22] = ACTIONS(143),
    [anon_sym_23] = ACTIONS(143),
    [anon_sym_24] = ACTIONS(143),
    [anon_sym_25] = ACTIONS(143),
    [anon_sym_26] = ACTIONS(143),
    [anon_sym_27] = ACTIONS(143),
    [anon_sym_28] = ACTIONS(143),
    [anon_sym_29] = ACTIONS(143),
    [anon_sym_30] = ACTIONS(143),
    [anon_sym_31] = ACTIONS(143),
    [anon_sym_32] = ACTIONS(143),
    [anon_sym_33] = ACTIONS(143),
    [anon_sym_34] = ACTIONS(143),
    [anon_sym_35] = ACTIONS(143),
    [anon_sym_36] = ACTIONS(143),
    [anon_sym_37] = ACTIONS(143),
    [anon_sym_38] = ACTIONS(143),
    [anon_sym_39] = ACTIONS(145),
    [anon_sym_async] = ACTIONS(145),
    [anon_sym_await] = ACTIONS(145),
    [anon_sym_by] = ACTIONS(145),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_else] = ACTIONS(145),
    [anon_sym_foreach] = ACTIONS(145),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_for] = ACTIONS(145),
    [anon_sym_do] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(145),
    [anon_sym_switch] = ACTIONS(145),
    [anon_sym_case] = ACTIONS(145),
    [anon_sym_break] = ACTIONS(145),
    [anon_sym_return] = ACTIONS(145),
    [anon_sym_yield] = ACTIONS(145),
    [anon_sym_try] = ACTIONS(145),
    [anon_sym_catch] = ACTIONS(145),
    [anon_sym_finally] = ACTIONS(145),
    [anon_sym_continue] = ACTIONS(145),
    [anon_sym_from] = ACTIONS(145),
    [anon_sym_where] = ACTIONS(145),
    [anon_sym_select] = ACTIONS(145),
    [anon_sym_throw] = ACTIONS(145),
    [anon_sym_join] = ACTIONS(145),
    [anon_sym_goto] = ACTIONS(145),
    [anon_sym_lock] = ACTIONS(145),
    [anon_sym_orderby] = ACTIONS(145),
    [anon_sym_40] = ACTIONS(143),
    [anon_sym_41] = ACTIONS(143),
    [anon_sym_42] = ACTIONS(143),
    [anon_sym_43] = ACTIONS(143),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(143),
    [anon_sym_44] = ACTIONS(143),
    [anon_sym_45] = ACTIONS(143),
    [anon_sym_46] = ACTIONS(143),
    [anon_sym_47] = ACTIONS(143),
    [anon_sym_48] = ACTIONS(143),
    [anon_sym_49] = ACTIONS(143),
    [anon_sym_50] = ACTIONS(143),
    [anon_sym_51] = ACTIONS(143),
    [anon_sym_52] = ACTIONS(143),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(143),
    [anon_sym_53] = ACTIONS(143),
    [anon_sym_54] = ACTIONS(143),
    [anon_sym_55] = ACTIONS(145),
    [anon_sym_add] = ACTIONS(145),
    [anon_sym_using] = ACTIONS(145),
    [anon_sym_into] = ACTIONS(145),
    [anon_sym_value] = ACTIONS(145),
    [anon_sym_checked] = ACTIONS(145),
    [anon_sym_global] = ACTIONS(145),
    [anon_sym_let] = ACTIONS(145),
    [anon_sym_new] = ACTIONS(145),
    [anon_sym_operator] = ACTIONS(145),
    [anon_sym_params] = ACTIONS(145),
    [anon_sym_this] = ACTIONS(145),
    [anon_sym_typeof] = ACTIONS(145),
    [anon_sym_default] = ACTIONS(145),
    [anon_sym_equals] = ACTIONS(145),
    [anon_sym_long] = ACTIONS(145),
    [anon_sym_out] = ACTIONS(145),
    [anon_sym_ref] = ACTIONS(145),
    [anon_sym_sizeof] = ACTIONS(145),
    [anon_sym_descending] = ACTIONS(145),
    [anon_sym_ascending] = ACTIONS(145),
    [anon_sym_dynamic] = ACTIONS(145),
    [anon_sym_fixed] = ACTIONS(145),
    [anon_sym_group] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_get] = ACTIONS(145),
    [anon_sym_set] = ACTIONS(145),
    [anon_sym_on] = ACTIONS(145),
    [anon_sym_remove] = ACTIONS(145),
    [anon_sym_stackalloc] = ACTIONS(145),
    [anon_sym_unchecked] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(145),
    [anon_sym_base] = ACTIONS(145),
    [anon_sym_56] = ACTIONS(143),
    [anon_sym_57] = ACTIONS(145),
    [anon_sym_58] = ACTIONS(143),
    [anon_sym_59] = ACTIONS(143),
    [anon_sym_60] = ACTIONS(143),
    [anon_sym_61] = ACTIONS(143),
    [anon_sym_62] = ACTIONS(143),
    [anon_sym_63] = ACTIONS(143),
    [anon_sym_64] = ACTIONS(145),
    [anon_sym_65] = ACTIONS(143),
    [anon_sym_66] = ACTIONS(143),
    [anon_sym_67] = ACTIONS(143),
    [anon_sym_68] = ACTIONS(143),
    [anon_sym_69] = ACTIONS(143),
    [anon_sym_70] = ACTIONS(143),
    [anon_sym_71] = ACTIONS(143),
    [anon_sym_72] = ACTIONS(143),
    [anon_sym_int] = ACTIONS(145),
    [anon_sym_bool] = ACTIONS(145),
    [anon_sym_string] = ACTIONS(145),
    [anon_sym_float] = ACTIONS(145),
    [anon_sym_char] = ACTIONS(145),
    [anon_sym_double] = ACTIONS(145),
    [anon_sym_byte] = ACTIONS(145),
    [anon_sym_decimal] = ACTIONS(145),
    [anon_sym_sbyte] = ACTIONS(145),
    [anon_sym_short] = ACTIONS(145),
    [anon_sym_uint] = ACTIONS(145),
    [anon_sym_ushort] = ACTIONS(145),
    [anon_sym_object] = ACTIONS(145),
    [anon_sym_ulong] = ACTIONS(145),
    [anon_sym_73] = ACTIONS(143),
    [anon_sym_74] = ACTIONS(143),
    [anon_sym_75] = ACTIONS(145),
    [anon_sym_76] = ACTIONS(145),
    [anon_sym_77] = ACTIONS(145),
    [anon_sym_78] = ACTIONS(145),
    [anon_sym_79] = ACTIONS(145),
    [anon_sym_80] = ACTIONS(143),
    [anon_sym_81] = ACTIONS(143),
    [anon_sym_82] = ACTIONS(143),
    [anon_sym_83] = ACTIONS(143),
    [anon_sym_84] = ACTIONS(143),
    [anon_sym_85] = ACTIONS(145),
    [anon_sym_86] = ACTIONS(143),
    [anon_sym_87] = ACTIONS(145),
    [anon_sym_88] = ACTIONS(145),
    [anon_sym_89] = ACTIONS(145),
    [anon_sym_90] = ACTIONS(145),
    [anon_sym_91] = ACTIONS(145),
    [anon_sym_92] = ACTIONS(145),
    [anon_sym_93] = ACTIONS(145),
    [anon_sym_94] = ACTIONS(143),
    [sym_type] = ACTIONS(143),
    [sym_comment] = ACTIONS(143),
    [aux_sym_z_token1] = ACTIONS(145),
    [aux_sym_z_token2] = ACTIONS(145),
    [aux_sym_z_token3] = ACTIONS(143),
    [sym_str] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_95] = ACTIONS(143),
    [anon_sym_96] = ACTIONS(143),
    [anon_sym_97] = ACTIONS(143),
    [anon_sym_98] = ACTIONS(143),
    [anon_sym_99] = ACTIONS(143),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [sym_int] = ACTIONS(145),
    [anon_sym_null] = ACTIONS(145),
    [anon_sym_100] = ACTIONS(143),
    [sym_real] = ACTIONS(145),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_id] = ACTIONS(149),
    [anon_sym_public] = ACTIONS(149),
    [anon_sym_internal] = ACTIONS(149),
    [anon_sym_protected] = ACTIONS(149),
    [anon_sym_private] = ACTIONS(149),
    [anon_sym_static] = ACTIONS(149),
    [anon_sym_abstract] = ACTIONS(149),
    [anon_sym_const] = ACTIONS(149),
    [anon_sym_extern] = ACTIONS(149),
    [anon_sym_override] = ACTIONS(149),
    [anon_sym_partial] = ACTIONS(149),
    [anon_sym_readonly] = ACTIONS(149),
    [anon_sym_sealed] = ACTIONS(149),
    [anon_sym_unsafe] = ACTIONS(149),
    [anon_sym_virtual] = ACTIONS(149),
    [anon_sym_volatile] = ACTIONS(149),
    [anon_sym_explicit] = ACTIONS(149),
    [anon_sym_implicit] = ACTIONS(149),
    [anon_sym_] = ACTIONS(147),
    [anon_sym_2] = ACTIONS(149),
    [anon_sym_3] = ACTIONS(147),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym_5] = ACTIONS(147),
    [anon_sym_6] = ACTIONS(149),
    [anon_sym_7] = ACTIONS(147),
    [anon_sym_8] = ACTIONS(149),
    [anon_sym_9] = ACTIONS(147),
    [anon_sym_10] = ACTIONS(149),
    [anon_sym_11] = ACTIONS(147),
    [anon_sym_12] = ACTIONS(149),
    [anon_sym_13] = ACTIONS(147),
    [anon_sym_14] = ACTIONS(149),
    [anon_sym_15] = ACTIONS(149),
    [anon_sym_16] = ACTIONS(149),
    [anon_sym_17] = ACTIONS(147),
    [anon_sym_18] = ACTIONS(149),
    [anon_sym_19] = ACTIONS(147),
    [anon_sym_20] = ACTIONS(149),
    [anon_sym_21] = ACTIONS(147),
    [anon_sym_class] = ACTIONS(149),
    [anon_sym_interface] = ACTIONS(149),
    [anon_sym_struct] = ACTIONS(149),
    [anon_sym_enum] = ACTIONS(149),
    [anon_sym_var] = ACTIONS(149),
    [anon_sym_delegate] = ACTIONS(149),
    [anon_sym_22] = ACTIONS(147),
    [anon_sym_23] = ACTIONS(147),
    [anon_sym_24] = ACTIONS(147),
    [anon_sym_25] = ACTIONS(147),
    [anon_sym_26] = ACTIONS(147),
    [anon_sym_27] = ACTIONS(147),
    [anon_sym_28] = ACTIONS(147),
    [anon_sym_29] = ACTIONS(147),
    [anon_sym_30] = ACTIONS(147),
    [anon_sym_31] = ACTIONS(147),
    [anon_sym_32] = ACTIONS(147),
    [anon_sym_33] = ACTIONS(147),
    [anon_sym_34] = ACTIONS(147),
    [anon_sym_35] = ACTIONS(147),
    [anon_sym_36] = ACTIONS(147),
    [anon_sym_37] = ACTIONS(147),
    [anon_sym_38] = ACTIONS(147),
    [anon_sym_39] = ACTIONS(149),
    [anon_sym_async] = ACTIONS(149),
    [anon_sym_await] = ACTIONS(149),
    [anon_sym_by] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_else] = ACTIONS(149),
    [anon_sym_foreach] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(149),
    [anon_sym_for] = ACTIONS(149),
    [anon_sym_do] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(149),
    [anon_sym_switch] = ACTIONS(149),
    [anon_sym_case] = ACTIONS(149),
    [anon_sym_break] = ACTIONS(149),
    [anon_sym_return] = ACTIONS(149),
    [anon_sym_yield] = ACTIONS(149),
    [anon_sym_try] = ACTIONS(149),
    [anon_sym_catch] = ACTIONS(149),
    [anon_sym_finally] = ACTIONS(149),
    [anon_sym_continue] = ACTIONS(149),
    [anon_sym_from] = ACTIONS(149),
    [anon_sym_where] = ACTIONS(149),
    [anon_sym_select] = ACTIONS(149),
    [anon_sym_throw] = ACTIONS(149),
    [anon_sym_join] = ACTIONS(149),
    [anon_sym_goto] = ACTIONS(149),
    [anon_sym_lock] = ACTIONS(149),
    [anon_sym_orderby] = ACTIONS(149),
    [anon_sym_40] = ACTIONS(147),
    [anon_sym_41] = ACTIONS(147),
    [anon_sym_42] = ACTIONS(147),
    [anon_sym_43] = ACTIONS(147),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(147),
    [anon_sym_44] = ACTIONS(147),
    [anon_sym_45] = ACTIONS(147),
    [anon_sym_46] = ACTIONS(147),
    [anon_sym_47] = ACTIONS(147),
    [anon_sym_48] = ACTIONS(147),
    [anon_sym_49] = ACTIONS(147),
    [anon_sym_50] = ACTIONS(147),
    [anon_sym_51] = ACTIONS(147),
    [anon_sym_52] = ACTIONS(147),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(147),
    [anon_sym_53] = ACTIONS(147),
    [anon_sym_54] = ACTIONS(147),
    [anon_sym_55] = ACTIONS(149),
    [anon_sym_add] = ACTIONS(149),
    [anon_sym_using] = ACTIONS(149),
    [anon_sym_into] = ACTIONS(149),
    [anon_sym_value] = ACTIONS(149),
    [anon_sym_checked] = ACTIONS(149),
    [anon_sym_global] = ACTIONS(149),
    [anon_sym_let] = ACTIONS(149),
    [anon_sym_new] = ACTIONS(149),
    [anon_sym_operator] = ACTIONS(149),
    [anon_sym_params] = ACTIONS(149),
    [anon_sym_this] = ACTIONS(149),
    [anon_sym_typeof] = ACTIONS(149),
    [anon_sym_default] = ACTIONS(149),
    [anon_sym_equals] = ACTIONS(149),
    [anon_sym_long] = ACTIONS(149),
    [anon_sym_out] = ACTIONS(149),
    [anon_sym_ref] = ACTIONS(149),
    [anon_sym_sizeof] = ACTIONS(149),
    [anon_sym_descending] = ACTIONS(149),
    [anon_sym_ascending] = ACTIONS(149),
    [anon_sym_dynamic] = ACTIONS(149),
    [anon_sym_fixed] = ACTIONS(149),
    [anon_sym_group] = ACTIONS(149),
    [anon_sym_is] = ACTIONS(149),
    [anon_sym_get] = ACTIONS(149),
    [anon_sym_set] = ACTIONS(149),
    [anon_sym_on] = ACTIONS(149),
    [anon_sym_remove] = ACTIONS(149),
    [anon_sym_stackalloc] = ACTIONS(149),
    [anon_sym_unchecked] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(149),
    [anon_sym_base] = ACTIONS(149),
    [anon_sym_56] = ACTIONS(147),
    [anon_sym_57] = ACTIONS(149),
    [anon_sym_58] = ACTIONS(147),
    [anon_sym_59] = ACTIONS(147),
    [anon_sym_60] = ACTIONS(147),
    [anon_sym_61] = ACTIONS(147),
    [anon_sym_62] = ACTIONS(147),
    [anon_sym_63] = ACTIONS(147),
    [anon_sym_64] = ACTIONS(149),
    [anon_sym_65] = ACTIONS(147),
    [anon_sym_66] = ACTIONS(147),
    [anon_sym_67] = ACTIONS(147),
    [anon_sym_68] = ACTIONS(147),
    [anon_sym_69] = ACTIONS(147),
    [anon_sym_70] = ACTIONS(147),
    [anon_sym_71] = ACTIONS(147),
    [anon_sym_72] = ACTIONS(147),
    [anon_sym_int] = ACTIONS(149),
    [anon_sym_bool] = ACTIONS(149),
    [anon_sym_string] = ACTIONS(149),
    [anon_sym_float] = ACTIONS(149),
    [anon_sym_char] = ACTIONS(149),
    [anon_sym_double] = ACTIONS(149),
    [anon_sym_byte] = ACTIONS(149),
    [anon_sym_decimal] = ACTIONS(149),
    [anon_sym_sbyte] = ACTIONS(149),
    [anon_sym_short] = ACTIONS(149),
    [anon_sym_uint] = ACTIONS(149),
    [anon_sym_ushort] = ACTIONS(149),
    [anon_sym_object] = ACTIONS(149),
    [anon_sym_ulong] = ACTIONS(149),
    [anon_sym_73] = ACTIONS(147),
    [anon_sym_74] = ACTIONS(147),
    [anon_sym_75] = ACTIONS(149),
    [anon_sym_76] = ACTIONS(149),
    [anon_sym_77] = ACTIONS(149),
    [anon_sym_78] = ACTIONS(149),
    [anon_sym_79] = ACTIONS(149),
    [anon_sym_80] = ACTIONS(147),
    [anon_sym_81] = ACTIONS(147),
    [anon_sym_82] = ACTIONS(147),
    [anon_sym_83] = ACTIONS(147),
    [anon_sym_84] = ACTIONS(147),
    [anon_sym_85] = ACTIONS(149),
    [anon_sym_86] = ACTIONS(147),
    [anon_sym_87] = ACTIONS(149),
    [anon_sym_88] = ACTIONS(149),
    [anon_sym_89] = ACTIONS(149),
    [anon_sym_90] = ACTIONS(149),
    [anon_sym_91] = ACTIONS(149),
    [anon_sym_92] = ACTIONS(149),
    [anon_sym_93] = ACTIONS(149),
    [anon_sym_94] = ACTIONS(147),
    [sym_type] = ACTIONS(147),
    [sym_comment] = ACTIONS(147),
    [aux_sym_z_token1] = ACTIONS(149),
    [aux_sym_z_token2] = ACTIONS(149),
    [aux_sym_z_token3] = ACTIONS(147),
    [sym_str] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_95] = ACTIONS(147),
    [anon_sym_96] = ACTIONS(147),
    [anon_sym_97] = ACTIONS(147),
    [anon_sym_98] = ACTIONS(147),
    [anon_sym_99] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [sym_int] = ACTIONS(149),
    [anon_sym_null] = ACTIONS(149),
    [anon_sym_100] = ACTIONS(147),
    [sym_real] = ACTIONS(149),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_id] = ACTIONS(153),
    [anon_sym_public] = ACTIONS(153),
    [anon_sym_internal] = ACTIONS(153),
    [anon_sym_protected] = ACTIONS(153),
    [anon_sym_private] = ACTIONS(153),
    [anon_sym_static] = ACTIONS(153),
    [anon_sym_abstract] = ACTIONS(153),
    [anon_sym_const] = ACTIONS(153),
    [anon_sym_extern] = ACTIONS(153),
    [anon_sym_override] = ACTIONS(153),
    [anon_sym_partial] = ACTIONS(153),
    [anon_sym_readonly] = ACTIONS(153),
    [anon_sym_sealed] = ACTIONS(153),
    [anon_sym_unsafe] = ACTIONS(153),
    [anon_sym_virtual] = ACTIONS(153),
    [anon_sym_volatile] = ACTIONS(153),
    [anon_sym_explicit] = ACTIONS(153),
    [anon_sym_implicit] = ACTIONS(153),
    [anon_sym_] = ACTIONS(151),
    [anon_sym_2] = ACTIONS(153),
    [anon_sym_3] = ACTIONS(151),
    [anon_sym_4] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(151),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(151),
    [anon_sym_8] = ACTIONS(153),
    [anon_sym_9] = ACTIONS(151),
    [anon_sym_10] = ACTIONS(153),
    [anon_sym_11] = ACTIONS(151),
    [anon_sym_12] = ACTIONS(153),
    [anon_sym_13] = ACTIONS(151),
    [anon_sym_14] = ACTIONS(153),
    [anon_sym_15] = ACTIONS(153),
    [anon_sym_16] = ACTIONS(153),
    [anon_sym_17] = ACTIONS(151),
    [anon_sym_18] = ACTIONS(153),
    [anon_sym_19] = ACTIONS(151),
    [anon_sym_20] = ACTIONS(153),
    [anon_sym_21] = ACTIONS(151),
    [anon_sym_class] = ACTIONS(153),
    [anon_sym_interface] = ACTIONS(153),
    [anon_sym_struct] = ACTIONS(153),
    [anon_sym_enum] = ACTIONS(153),
    [anon_sym_var] = ACTIONS(153),
    [anon_sym_delegate] = ACTIONS(153),
    [anon_sym_22] = ACTIONS(151),
    [anon_sym_23] = ACTIONS(151),
    [anon_sym_24] = ACTIONS(151),
    [anon_sym_25] = ACTIONS(151),
    [anon_sym_26] = ACTIONS(151),
    [anon_sym_27] = ACTIONS(151),
    [anon_sym_28] = ACTIONS(151),
    [anon_sym_29] = ACTIONS(151),
    [anon_sym_30] = ACTIONS(151),
    [anon_sym_31] = ACTIONS(151),
    [anon_sym_32] = ACTIONS(151),
    [anon_sym_33] = ACTIONS(151),
    [anon_sym_34] = ACTIONS(151),
    [anon_sym_35] = ACTIONS(151),
    [anon_sym_36] = ACTIONS(151),
    [anon_sym_37] = ACTIONS(151),
    [anon_sym_38] = ACTIONS(151),
    [anon_sym_39] = ACTIONS(153),
    [anon_sym_async] = ACTIONS(153),
    [anon_sym_await] = ACTIONS(153),
    [anon_sym_by] = ACTIONS(153),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_else] = ACTIONS(153),
    [anon_sym_foreach] = ACTIONS(153),
    [anon_sym_in] = ACTIONS(153),
    [anon_sym_for] = ACTIONS(153),
    [anon_sym_do] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(153),
    [anon_sym_switch] = ACTIONS(153),
    [anon_sym_case] = ACTIONS(153),
    [anon_sym_break] = ACTIONS(153),
    [anon_sym_return] = ACTIONS(153),
    [anon_sym_yield] = ACTIONS(153),
    [anon_sym_try] = ACTIONS(153),
    [anon_sym_catch] = ACTIONS(153),
    [anon_sym_finally] = ACTIONS(153),
    [anon_sym_continue] = ACTIONS(153),
    [anon_sym_from] = ACTIONS(153),
    [anon_sym_where] = ACTIONS(153),
    [anon_sym_select] = ACTIONS(153),
    [anon_sym_throw] = ACTIONS(153),
    [anon_sym_join] = ACTIONS(153),
    [anon_sym_goto] = ACTIONS(153),
    [anon_sym_lock] = ACTIONS(153),
    [anon_sym_orderby] = ACTIONS(153),
    [anon_sym_40] = ACTIONS(151),
    [anon_sym_41] = ACTIONS(151),
    [anon_sym_42] = ACTIONS(151),
    [anon_sym_43] = ACTIONS(151),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(151),
    [anon_sym_44] = ACTIONS(151),
    [anon_sym_45] = ACTIONS(151),
    [anon_sym_46] = ACTIONS(151),
    [anon_sym_47] = ACTIONS(151),
    [anon_sym_48] = ACTIONS(151),
    [anon_sym_49] = ACTIONS(151),
    [anon_sym_50] = ACTIONS(151),
    [anon_sym_51] = ACTIONS(151),
    [anon_sym_52] = ACTIONS(151),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(151),
    [anon_sym_53] = ACTIONS(151),
    [anon_sym_54] = ACTIONS(151),
    [anon_sym_55] = ACTIONS(153),
    [anon_sym_add] = ACTIONS(153),
    [anon_sym_using] = ACTIONS(153),
    [anon_sym_into] = ACTIONS(153),
    [anon_sym_value] = ACTIONS(153),
    [anon_sym_checked] = ACTIONS(153),
    [anon_sym_global] = ACTIONS(153),
    [anon_sym_let] = ACTIONS(153),
    [anon_sym_new] = ACTIONS(153),
    [anon_sym_operator] = ACTIONS(153),
    [anon_sym_params] = ACTIONS(153),
    [anon_sym_this] = ACTIONS(153),
    [anon_sym_typeof] = ACTIONS(153),
    [anon_sym_default] = ACTIONS(153),
    [anon_sym_equals] = ACTIONS(153),
    [anon_sym_long] = ACTIONS(153),
    [anon_sym_out] = ACTIONS(153),
    [anon_sym_ref] = ACTIONS(153),
    [anon_sym_sizeof] = ACTIONS(153),
    [anon_sym_descending] = ACTIONS(153),
    [anon_sym_ascending] = ACTIONS(153),
    [anon_sym_dynamic] = ACTIONS(153),
    [anon_sym_fixed] = ACTIONS(153),
    [anon_sym_group] = ACTIONS(153),
    [anon_sym_is] = ACTIONS(153),
    [anon_sym_get] = ACTIONS(153),
    [anon_sym_set] = ACTIONS(153),
    [anon_sym_on] = ACTIONS(153),
    [anon_sym_remove] = ACTIONS(153),
    [anon_sym_stackalloc] = ACTIONS(153),
    [anon_sym_unchecked] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(153),
    [anon_sym_base] = ACTIONS(153),
    [anon_sym_56] = ACTIONS(151),
    [anon_sym_57] = ACTIONS(153),
    [anon_sym_58] = ACTIONS(151),
    [anon_sym_59] = ACTIONS(151),
    [anon_sym_60] = ACTIONS(151),
    [anon_sym_61] = ACTIONS(151),
    [anon_sym_62] = ACTIONS(151),
    [anon_sym_63] = ACTIONS(151),
    [anon_sym_64] = ACTIONS(153),
    [anon_sym_65] = ACTIONS(151),
    [anon_sym_66] = ACTIONS(151),
    [anon_sym_67] = ACTIONS(151),
    [anon_sym_68] = ACTIONS(151),
    [anon_sym_69] = ACTIONS(151),
    [anon_sym_70] = ACTIONS(151),
    [anon_sym_71] = ACTIONS(151),
    [anon_sym_72] = ACTIONS(151),
    [anon_sym_int] = ACTIONS(153),
    [anon_sym_bool] = ACTIONS(153),
    [anon_sym_string] = ACTIONS(153),
    [anon_sym_float] = ACTIONS(153),
    [anon_sym_char] = ACTIONS(153),
    [anon_sym_double] = ACTIONS(153),
    [anon_sym_byte] = ACTIONS(153),
    [anon_sym_decimal] = ACTIONS(153),
    [anon_sym_sbyte] = ACTIONS(153),
    [anon_sym_short] = ACTIONS(153),
    [anon_sym_uint] = ACTIONS(153),
    [anon_sym_ushort] = ACTIONS(153),
    [anon_sym_object] = ACTIONS(153),
    [anon_sym_ulong] = ACTIONS(153),
    [anon_sym_73] = ACTIONS(151),
    [anon_sym_74] = ACTIONS(151),
    [anon_sym_75] = ACTIONS(153),
    [anon_sym_76] = ACTIONS(153),
    [anon_sym_77] = ACTIONS(153),
    [anon_sym_78] = ACTIONS(153),
    [anon_sym_79] = ACTIONS(153),
    [anon_sym_80] = ACTIONS(151),
    [anon_sym_81] = ACTIONS(151),
    [anon_sym_82] = ACTIONS(151),
    [anon_sym_83] = ACTIONS(151),
    [anon_sym_84] = ACTIONS(151),
    [anon_sym_85] = ACTIONS(153),
    [anon_sym_86] = ACTIONS(151),
    [anon_sym_87] = ACTIONS(153),
    [anon_sym_88] = ACTIONS(153),
    [anon_sym_89] = ACTIONS(153),
    [anon_sym_90] = ACTIONS(153),
    [anon_sym_91] = ACTIONS(153),
    [anon_sym_92] = ACTIONS(153),
    [anon_sym_93] = ACTIONS(153),
    [anon_sym_94] = ACTIONS(151),
    [sym_type] = ACTIONS(151),
    [sym_comment] = ACTIONS(151),
    [aux_sym_z_token1] = ACTIONS(153),
    [aux_sym_z_token2] = ACTIONS(153),
    [aux_sym_z_token3] = ACTIONS(151),
    [sym_str] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_95] = ACTIONS(151),
    [anon_sym_96] = ACTIONS(151),
    [anon_sym_97] = ACTIONS(151),
    [anon_sym_98] = ACTIONS(151),
    [anon_sym_99] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [sym_int] = ACTIONS(153),
    [anon_sym_null] = ACTIONS(153),
    [anon_sym_100] = ACTIONS(151),
    [sym_real] = ACTIONS(153),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_id] = ACTIONS(157),
    [anon_sym_public] = ACTIONS(157),
    [anon_sym_internal] = ACTIONS(157),
    [anon_sym_protected] = ACTIONS(157),
    [anon_sym_private] = ACTIONS(157),
    [anon_sym_static] = ACTIONS(157),
    [anon_sym_abstract] = ACTIONS(157),
    [anon_sym_const] = ACTIONS(157),
    [anon_sym_extern] = ACTIONS(157),
    [anon_sym_override] = ACTIONS(157),
    [anon_sym_partial] = ACTIONS(157),
    [anon_sym_readonly] = ACTIONS(157),
    [anon_sym_sealed] = ACTIONS(157),
    [anon_sym_unsafe] = ACTIONS(157),
    [anon_sym_virtual] = ACTIONS(157),
    [anon_sym_volatile] = ACTIONS(157),
    [anon_sym_explicit] = ACTIONS(157),
    [anon_sym_implicit] = ACTIONS(157),
    [anon_sym_] = ACTIONS(155),
    [anon_sym_2] = ACTIONS(157),
    [anon_sym_3] = ACTIONS(155),
    [anon_sym_4] = ACTIONS(155),
    [anon_sym_5] = ACTIONS(155),
    [anon_sym_6] = ACTIONS(157),
    [anon_sym_7] = ACTIONS(155),
    [anon_sym_8] = ACTIONS(157),
    [anon_sym_9] = ACTIONS(155),
    [anon_sym_10] = ACTIONS(157),
    [anon_sym_11] = ACTIONS(155),
    [anon_sym_12] = ACTIONS(157),
    [anon_sym_13] = ACTIONS(155),
    [anon_sym_14] = ACTIONS(157),
    [anon_sym_15] = ACTIONS(157),
    [anon_sym_16] = ACTIONS(157),
    [anon_sym_17] = ACTIONS(155),
    [anon_sym_18] = ACTIONS(157),
    [anon_sym_19] = ACTIONS(155),
    [anon_sym_20] = ACTIONS(157),
    [anon_sym_21] = ACTIONS(155),
    [anon_sym_class] = ACTIONS(157),
    [anon_sym_interface] = ACTIONS(157),
    [anon_sym_struct] = ACTIONS(157),
    [anon_sym_enum] = ACTIONS(157),
    [anon_sym_var] = ACTIONS(157),
    [anon_sym_delegate] = ACTIONS(157),
    [anon_sym_22] = ACTIONS(155),
    [anon_sym_23] = ACTIONS(155),
    [anon_sym_24] = ACTIONS(155),
    [anon_sym_25] = ACTIONS(155),
    [anon_sym_26] = ACTIONS(155),
    [anon_sym_27] = ACTIONS(155),
    [anon_sym_28] = ACTIONS(155),
    [anon_sym_29] = ACTIONS(155),
    [anon_sym_30] = ACTIONS(155),
    [anon_sym_31] = ACTIONS(155),
    [anon_sym_32] = ACTIONS(155),
    [anon_sym_33] = ACTIONS(155),
    [anon_sym_34] = ACTIONS(155),
    [anon_sym_35] = ACTIONS(155),
    [anon_sym_36] = ACTIONS(155),
    [anon_sym_37] = ACTIONS(155),
    [anon_sym_38] = ACTIONS(155),
    [anon_sym_39] = ACTIONS(157),
    [anon_sym_async] = ACTIONS(157),
    [anon_sym_await] = ACTIONS(157),
    [anon_sym_by] = ACTIONS(157),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_foreach] = ACTIONS(157),
    [anon_sym_in] = ACTIONS(157),
    [anon_sym_for] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_switch] = ACTIONS(157),
    [anon_sym_case] = ACTIONS(157),
    [anon_sym_break] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_yield] = ACTIONS(157),
    [anon_sym_try] = ACTIONS(157),
    [anon_sym_catch] = ACTIONS(157),
    [anon_sym_finally] = ACTIONS(157),
    [anon_sym_continue] = ACTIONS(157),
    [anon_sym_from] = ACTIONS(157),
    [anon_sym_where] = ACTIONS(157),
    [anon_sym_select] = ACTIONS(157),
    [anon_sym_throw] = ACTIONS(157),
    [anon_sym_join] = ACTIONS(157),
    [anon_sym_goto] = ACTIONS(157),
    [anon_sym_lock] = ACTIONS(157),
    [anon_sym_orderby] = ACTIONS(157),
    [anon_sym_40] = ACTIONS(155),
    [anon_sym_41] = ACTIONS(155),
    [anon_sym_42] = ACTIONS(155),
    [anon_sym_43] = ACTIONS(155),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(155),
    [anon_sym_44] = ACTIONS(155),
    [anon_sym_45] = ACTIONS(155),
    [anon_sym_46] = ACTIONS(155),
    [anon_sym_47] = ACTIONS(155),
    [anon_sym_48] = ACTIONS(155),
    [anon_sym_49] = ACTIONS(155),
    [anon_sym_50] = ACTIONS(155),
    [anon_sym_51] = ACTIONS(155),
    [anon_sym_52] = ACTIONS(155),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(155),
    [anon_sym_53] = ACTIONS(155),
    [anon_sym_54] = ACTIONS(155),
    [anon_sym_55] = ACTIONS(157),
    [anon_sym_add] = ACTIONS(157),
    [anon_sym_using] = ACTIONS(157),
    [anon_sym_into] = ACTIONS(157),
    [anon_sym_value] = ACTIONS(157),
    [anon_sym_checked] = ACTIONS(157),
    [anon_sym_global] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_new] = ACTIONS(157),
    [anon_sym_operator] = ACTIONS(157),
    [anon_sym_params] = ACTIONS(157),
    [anon_sym_this] = ACTIONS(157),
    [anon_sym_typeof] = ACTIONS(157),
    [anon_sym_default] = ACTIONS(157),
    [anon_sym_equals] = ACTIONS(157),
    [anon_sym_long] = ACTIONS(157),
    [anon_sym_out] = ACTIONS(157),
    [anon_sym_ref] = ACTIONS(157),
    [anon_sym_sizeof] = ACTIONS(157),
    [anon_sym_descending] = ACTIONS(157),
    [anon_sym_ascending] = ACTIONS(157),
    [anon_sym_dynamic] = ACTIONS(157),
    [anon_sym_fixed] = ACTIONS(157),
    [anon_sym_group] = ACTIONS(157),
    [anon_sym_is] = ACTIONS(157),
    [anon_sym_get] = ACTIONS(157),
    [anon_sym_set] = ACTIONS(157),
    [anon_sym_on] = ACTIONS(157),
    [anon_sym_remove] = ACTIONS(157),
    [anon_sym_stackalloc] = ACTIONS(157),
    [anon_sym_unchecked] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(157),
    [anon_sym_base] = ACTIONS(157),
    [anon_sym_56] = ACTIONS(155),
    [anon_sym_57] = ACTIONS(157),
    [anon_sym_58] = ACTIONS(155),
    [anon_sym_59] = ACTIONS(155),
    [anon_sym_60] = ACTIONS(155),
    [anon_sym_61] = ACTIONS(155),
    [anon_sym_62] = ACTIONS(155),
    [anon_sym_63] = ACTIONS(155),
    [anon_sym_64] = ACTIONS(157),
    [anon_sym_65] = ACTIONS(155),
    [anon_sym_66] = ACTIONS(155),
    [anon_sym_67] = ACTIONS(155),
    [anon_sym_68] = ACTIONS(155),
    [anon_sym_69] = ACTIONS(155),
    [anon_sym_70] = ACTIONS(155),
    [anon_sym_71] = ACTIONS(155),
    [anon_sym_72] = ACTIONS(155),
    [anon_sym_int] = ACTIONS(157),
    [anon_sym_bool] = ACTIONS(157),
    [anon_sym_string] = ACTIONS(157),
    [anon_sym_float] = ACTIONS(157),
    [anon_sym_char] = ACTIONS(157),
    [anon_sym_double] = ACTIONS(157),
    [anon_sym_byte] = ACTIONS(157),
    [anon_sym_decimal] = ACTIONS(157),
    [anon_sym_sbyte] = ACTIONS(157),
    [anon_sym_short] = ACTIONS(157),
    [anon_sym_uint] = ACTIONS(157),
    [anon_sym_ushort] = ACTIONS(157),
    [anon_sym_object] = ACTIONS(157),
    [anon_sym_ulong] = ACTIONS(157),
    [anon_sym_73] = ACTIONS(155),
    [anon_sym_74] = ACTIONS(155),
    [anon_sym_75] = ACTIONS(157),
    [anon_sym_76] = ACTIONS(157),
    [anon_sym_77] = ACTIONS(157),
    [anon_sym_78] = ACTIONS(157),
    [anon_sym_79] = ACTIONS(157),
    [anon_sym_80] = ACTIONS(155),
    [anon_sym_81] = ACTIONS(155),
    [anon_sym_82] = ACTIONS(155),
    [anon_sym_83] = ACTIONS(155),
    [anon_sym_84] = ACTIONS(155),
    [anon_sym_85] = ACTIONS(157),
    [anon_sym_86] = ACTIONS(155),
    [anon_sym_87] = ACTIONS(157),
    [anon_sym_88] = ACTIONS(157),
    [anon_sym_89] = ACTIONS(157),
    [anon_sym_90] = ACTIONS(157),
    [anon_sym_91] = ACTIONS(157),
    [anon_sym_92] = ACTIONS(157),
    [anon_sym_93] = ACTIONS(157),
    [anon_sym_94] = ACTIONS(155),
    [sym_type] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
    [aux_sym_z_token1] = ACTIONS(157),
    [aux_sym_z_token2] = ACTIONS(157),
    [aux_sym_z_token3] = ACTIONS(155),
    [sym_str] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_95] = ACTIONS(155),
    [anon_sym_96] = ACTIONS(155),
    [anon_sym_97] = ACTIONS(155),
    [anon_sym_98] = ACTIONS(155),
    [anon_sym_99] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_int] = ACTIONS(157),
    [anon_sym_null] = ACTIONS(157),
    [anon_sym_100] = ACTIONS(155),
    [sym_real] = ACTIONS(157),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_id] = ACTIONS(161),
    [anon_sym_public] = ACTIONS(161),
    [anon_sym_internal] = ACTIONS(161),
    [anon_sym_protected] = ACTIONS(161),
    [anon_sym_private] = ACTIONS(161),
    [anon_sym_static] = ACTIONS(161),
    [anon_sym_abstract] = ACTIONS(161),
    [anon_sym_const] = ACTIONS(161),
    [anon_sym_extern] = ACTIONS(161),
    [anon_sym_override] = ACTIONS(161),
    [anon_sym_partial] = ACTIONS(161),
    [anon_sym_readonly] = ACTIONS(161),
    [anon_sym_sealed] = ACTIONS(161),
    [anon_sym_unsafe] = ACTIONS(161),
    [anon_sym_virtual] = ACTIONS(161),
    [anon_sym_volatile] = ACTIONS(161),
    [anon_sym_explicit] = ACTIONS(161),
    [anon_sym_implicit] = ACTIONS(161),
    [anon_sym_] = ACTIONS(159),
    [anon_sym_2] = ACTIONS(161),
    [anon_sym_3] = ACTIONS(159),
    [anon_sym_4] = ACTIONS(159),
    [anon_sym_5] = ACTIONS(159),
    [anon_sym_6] = ACTIONS(161),
    [anon_sym_7] = ACTIONS(159),
    [anon_sym_8] = ACTIONS(161),
    [anon_sym_9] = ACTIONS(159),
    [anon_sym_10] = ACTIONS(161),
    [anon_sym_11] = ACTIONS(159),
    [anon_sym_12] = ACTIONS(161),
    [anon_sym_13] = ACTIONS(159),
    [anon_sym_14] = ACTIONS(161),
    [anon_sym_15] = ACTIONS(161),
    [anon_sym_16] = ACTIONS(161),
    [anon_sym_17] = ACTIONS(159),
    [anon_sym_18] = ACTIONS(161),
    [anon_sym_19] = ACTIONS(159),
    [anon_sym_20] = ACTIONS(161),
    [anon_sym_21] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(161),
    [anon_sym_interface] = ACTIONS(161),
    [anon_sym_struct] = ACTIONS(161),
    [anon_sym_enum] = ACTIONS(161),
    [anon_sym_var] = ACTIONS(161),
    [anon_sym_delegate] = ACTIONS(161),
    [anon_sym_22] = ACTIONS(159),
    [anon_sym_23] = ACTIONS(159),
    [anon_sym_24] = ACTIONS(159),
    [anon_sym_25] = ACTIONS(159),
    [anon_sym_26] = ACTIONS(159),
    [anon_sym_27] = ACTIONS(159),
    [anon_sym_28] = ACTIONS(159),
    [anon_sym_29] = ACTIONS(159),
    [anon_sym_30] = ACTIONS(159),
    [anon_sym_31] = ACTIONS(159),
    [anon_sym_32] = ACTIONS(159),
    [anon_sym_33] = ACTIONS(159),
    [anon_sym_34] = ACTIONS(159),
    [anon_sym_35] = ACTIONS(159),
    [anon_sym_36] = ACTIONS(159),
    [anon_sym_37] = ACTIONS(159),
    [anon_sym_38] = ACTIONS(159),
    [anon_sym_39] = ACTIONS(161),
    [anon_sym_async] = ACTIONS(161),
    [anon_sym_await] = ACTIONS(161),
    [anon_sym_by] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(161),
    [anon_sym_foreach] = ACTIONS(161),
    [anon_sym_in] = ACTIONS(161),
    [anon_sym_for] = ACTIONS(161),
    [anon_sym_do] = ACTIONS(161),
    [anon_sym_while] = ACTIONS(161),
    [anon_sym_switch] = ACTIONS(161),
    [anon_sym_case] = ACTIONS(161),
    [anon_sym_break] = ACTIONS(161),
    [anon_sym_return] = ACTIONS(161),
    [anon_sym_yield] = ACTIONS(161),
    [anon_sym_try] = ACTIONS(161),
    [anon_sym_catch] = ACTIONS(161),
    [anon_sym_finally] = ACTIONS(161),
    [anon_sym_continue] = ACTIONS(161),
    [anon_sym_from] = ACTIONS(161),
    [anon_sym_where] = ACTIONS(161),
    [anon_sym_select] = ACTIONS(161),
    [anon_sym_throw] = ACTIONS(161),
    [anon_sym_join] = ACTIONS(161),
    [anon_sym_goto] = ACTIONS(161),
    [anon_sym_lock] = ACTIONS(161),
    [anon_sym_orderby] = ACTIONS(161),
    [anon_sym_40] = ACTIONS(159),
    [anon_sym_41] = ACTIONS(159),
    [anon_sym_42] = ACTIONS(159),
    [anon_sym_43] = ACTIONS(159),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(159),
    [anon_sym_44] = ACTIONS(159),
    [anon_sym_45] = ACTIONS(159),
    [anon_sym_46] = ACTIONS(159),
    [anon_sym_47] = ACTIONS(159),
    [anon_sym_48] = ACTIONS(159),
    [anon_sym_49] = ACTIONS(159),
    [anon_sym_50] = ACTIONS(159),
    [anon_sym_51] = ACTIONS(159),
    [anon_sym_52] = ACTIONS(159),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(159),
    [anon_sym_53] = ACTIONS(159),
    [anon_sym_54] = ACTIONS(159),
    [anon_sym_55] = ACTIONS(161),
    [anon_sym_add] = ACTIONS(161),
    [anon_sym_using] = ACTIONS(161),
    [anon_sym_into] = ACTIONS(161),
    [anon_sym_value] = ACTIONS(161),
    [anon_sym_checked] = ACTIONS(161),
    [anon_sym_global] = ACTIONS(161),
    [anon_sym_let] = ACTIONS(161),
    [anon_sym_new] = ACTIONS(161),
    [anon_sym_operator] = ACTIONS(161),
    [anon_sym_params] = ACTIONS(161),
    [anon_sym_this] = ACTIONS(161),
    [anon_sym_typeof] = ACTIONS(161),
    [anon_sym_default] = ACTIONS(161),
    [anon_sym_equals] = ACTIONS(161),
    [anon_sym_long] = ACTIONS(161),
    [anon_sym_out] = ACTIONS(161),
    [anon_sym_ref] = ACTIONS(161),
    [anon_sym_sizeof] = ACTIONS(161),
    [anon_sym_descending] = ACTIONS(161),
    [anon_sym_ascending] = ACTIONS(161),
    [anon_sym_dynamic] = ACTIONS(161),
    [anon_sym_fixed] = ACTIONS(161),
    [anon_sym_group] = ACTIONS(161),
    [anon_sym_is] = ACTIONS(161),
    [anon_sym_get] = ACTIONS(161),
    [anon_sym_set] = ACTIONS(161),
    [anon_sym_on] = ACTIONS(161),
    [anon_sym_remove] = ACTIONS(161),
    [anon_sym_stackalloc] = ACTIONS(161),
    [anon_sym_unchecked] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(161),
    [anon_sym_base] = ACTIONS(161),
    [anon_sym_56] = ACTIONS(159),
    [anon_sym_57] = ACTIONS(161),
    [anon_sym_58] = ACTIONS(159),
    [anon_sym_59] = ACTIONS(159),
    [anon_sym_60] = ACTIONS(159),
    [anon_sym_61] = ACTIONS(159),
    [anon_sym_62] = ACTIONS(159),
    [anon_sym_63] = ACTIONS(159),
    [anon_sym_64] = ACTIONS(161),
    [anon_sym_65] = ACTIONS(159),
    [anon_sym_66] = ACTIONS(159),
    [anon_sym_67] = ACTIONS(159),
    [anon_sym_68] = ACTIONS(159),
    [anon_sym_69] = ACTIONS(159),
    [anon_sym_70] = ACTIONS(159),
    [anon_sym_71] = ACTIONS(159),
    [anon_sym_72] = ACTIONS(159),
    [anon_sym_int] = ACTIONS(161),
    [anon_sym_bool] = ACTIONS(161),
    [anon_sym_string] = ACTIONS(161),
    [anon_sym_float] = ACTIONS(161),
    [anon_sym_char] = ACTIONS(161),
    [anon_sym_double] = ACTIONS(161),
    [anon_sym_byte] = ACTIONS(161),
    [anon_sym_decimal] = ACTIONS(161),
    [anon_sym_sbyte] = ACTIONS(161),
    [anon_sym_short] = ACTIONS(161),
    [anon_sym_uint] = ACTIONS(161),
    [anon_sym_ushort] = ACTIONS(161),
    [anon_sym_object] = ACTIONS(161),
    [anon_sym_ulong] = ACTIONS(161),
    [anon_sym_73] = ACTIONS(159),
    [anon_sym_74] = ACTIONS(159),
    [anon_sym_75] = ACTIONS(161),
    [anon_sym_76] = ACTIONS(161),
    [anon_sym_77] = ACTIONS(161),
    [anon_sym_78] = ACTIONS(161),
    [anon_sym_79] = ACTIONS(161),
    [anon_sym_80] = ACTIONS(159),
    [anon_sym_81] = ACTIONS(159),
    [anon_sym_82] = ACTIONS(159),
    [anon_sym_83] = ACTIONS(159),
    [anon_sym_84] = ACTIONS(159),
    [anon_sym_85] = ACTIONS(161),
    [anon_sym_86] = ACTIONS(159),
    [anon_sym_87] = ACTIONS(161),
    [anon_sym_88] = ACTIONS(161),
    [anon_sym_89] = ACTIONS(161),
    [anon_sym_90] = ACTIONS(161),
    [anon_sym_91] = ACTIONS(161),
    [anon_sym_92] = ACTIONS(161),
    [anon_sym_93] = ACTIONS(161),
    [anon_sym_94] = ACTIONS(159),
    [sym_type] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [aux_sym_z_token1] = ACTIONS(161),
    [aux_sym_z_token2] = ACTIONS(161),
    [aux_sym_z_token3] = ACTIONS(159),
    [sym_str] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_95] = ACTIONS(159),
    [anon_sym_96] = ACTIONS(159),
    [anon_sym_97] = ACTIONS(159),
    [anon_sym_98] = ACTIONS(159),
    [anon_sym_99] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [sym_int] = ACTIONS(161),
    [anon_sym_null] = ACTIONS(161),
    [anon_sym_100] = ACTIONS(159),
    [sym_real] = ACTIONS(161),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_id] = ACTIONS(165),
    [anon_sym_public] = ACTIONS(165),
    [anon_sym_internal] = ACTIONS(165),
    [anon_sym_protected] = ACTIONS(165),
    [anon_sym_private] = ACTIONS(165),
    [anon_sym_static] = ACTIONS(165),
    [anon_sym_abstract] = ACTIONS(165),
    [anon_sym_const] = ACTIONS(165),
    [anon_sym_extern] = ACTIONS(165),
    [anon_sym_override] = ACTIONS(165),
    [anon_sym_partial] = ACTIONS(165),
    [anon_sym_readonly] = ACTIONS(165),
    [anon_sym_sealed] = ACTIONS(165),
    [anon_sym_unsafe] = ACTIONS(165),
    [anon_sym_virtual] = ACTIONS(165),
    [anon_sym_volatile] = ACTIONS(165),
    [anon_sym_explicit] = ACTIONS(165),
    [anon_sym_implicit] = ACTIONS(165),
    [anon_sym_] = ACTIONS(163),
    [anon_sym_2] = ACTIONS(165),
    [anon_sym_3] = ACTIONS(163),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym_5] = ACTIONS(163),
    [anon_sym_6] = ACTIONS(165),
    [anon_sym_7] = ACTIONS(163),
    [anon_sym_8] = ACTIONS(165),
    [anon_sym_9] = ACTIONS(163),
    [anon_sym_10] = ACTIONS(165),
    [anon_sym_11] = ACTIONS(163),
    [anon_sym_12] = ACTIONS(165),
    [anon_sym_13] = ACTIONS(163),
    [anon_sym_14] = ACTIONS(165),
    [anon_sym_15] = ACTIONS(165),
    [anon_sym_16] = ACTIONS(165),
    [anon_sym_17] = ACTIONS(163),
    [anon_sym_18] = ACTIONS(165),
    [anon_sym_19] = ACTIONS(163),
    [anon_sym_20] = ACTIONS(165),
    [anon_sym_21] = ACTIONS(163),
    [anon_sym_class] = ACTIONS(165),
    [anon_sym_interface] = ACTIONS(165),
    [anon_sym_struct] = ACTIONS(165),
    [anon_sym_enum] = ACTIONS(165),
    [anon_sym_var] = ACTIONS(165),
    [anon_sym_delegate] = ACTIONS(165),
    [anon_sym_22] = ACTIONS(163),
    [anon_sym_23] = ACTIONS(163),
    [anon_sym_24] = ACTIONS(163),
    [anon_sym_25] = ACTIONS(163),
    [anon_sym_26] = ACTIONS(163),
    [anon_sym_27] = ACTIONS(163),
    [anon_sym_28] = ACTIONS(163),
    [anon_sym_29] = ACTIONS(163),
    [anon_sym_30] = ACTIONS(163),
    [anon_sym_31] = ACTIONS(163),
    [anon_sym_32] = ACTIONS(163),
    [anon_sym_33] = ACTIONS(163),
    [anon_sym_34] = ACTIONS(163),
    [anon_sym_35] = ACTIONS(163),
    [anon_sym_36] = ACTIONS(163),
    [anon_sym_37] = ACTIONS(163),
    [anon_sym_38] = ACTIONS(163),
    [anon_sym_39] = ACTIONS(165),
    [anon_sym_async] = ACTIONS(165),
    [anon_sym_await] = ACTIONS(165),
    [anon_sym_by] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_else] = ACTIONS(165),
    [anon_sym_foreach] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(165),
    [anon_sym_for] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [anon_sym_while] = ACTIONS(165),
    [anon_sym_switch] = ACTIONS(165),
    [anon_sym_case] = ACTIONS(165),
    [anon_sym_break] = ACTIONS(165),
    [anon_sym_return] = ACTIONS(165),
    [anon_sym_yield] = ACTIONS(165),
    [anon_sym_try] = ACTIONS(165),
    [anon_sym_catch] = ACTIONS(165),
    [anon_sym_finally] = ACTIONS(165),
    [anon_sym_continue] = ACTIONS(165),
    [anon_sym_from] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(165),
    [anon_sym_select] = ACTIONS(165),
    [anon_sym_throw] = ACTIONS(165),
    [anon_sym_join] = ACTIONS(165),
    [anon_sym_goto] = ACTIONS(165),
    [anon_sym_lock] = ACTIONS(165),
    [anon_sym_orderby] = ACTIONS(165),
    [anon_sym_40] = ACTIONS(163),
    [anon_sym_41] = ACTIONS(163),
    [anon_sym_42] = ACTIONS(163),
    [anon_sym_43] = ACTIONS(163),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(163),
    [anon_sym_44] = ACTIONS(163),
    [anon_sym_45] = ACTIONS(163),
    [anon_sym_46] = ACTIONS(163),
    [anon_sym_47] = ACTIONS(163),
    [anon_sym_48] = ACTIONS(163),
    [anon_sym_49] = ACTIONS(163),
    [anon_sym_50] = ACTIONS(163),
    [anon_sym_51] = ACTIONS(163),
    [anon_sym_52] = ACTIONS(163),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(163),
    [anon_sym_53] = ACTIONS(163),
    [anon_sym_54] = ACTIONS(163),
    [anon_sym_55] = ACTIONS(165),
    [anon_sym_add] = ACTIONS(165),
    [anon_sym_using] = ACTIONS(165),
    [anon_sym_into] = ACTIONS(165),
    [anon_sym_value] = ACTIONS(165),
    [anon_sym_checked] = ACTIONS(165),
    [anon_sym_global] = ACTIONS(165),
    [anon_sym_let] = ACTIONS(165),
    [anon_sym_new] = ACTIONS(165),
    [anon_sym_operator] = ACTIONS(165),
    [anon_sym_params] = ACTIONS(165),
    [anon_sym_this] = ACTIONS(165),
    [anon_sym_typeof] = ACTIONS(165),
    [anon_sym_default] = ACTIONS(165),
    [anon_sym_equals] = ACTIONS(165),
    [anon_sym_long] = ACTIONS(165),
    [anon_sym_out] = ACTIONS(165),
    [anon_sym_ref] = ACTIONS(165),
    [anon_sym_sizeof] = ACTIONS(165),
    [anon_sym_descending] = ACTIONS(165),
    [anon_sym_ascending] = ACTIONS(165),
    [anon_sym_dynamic] = ACTIONS(165),
    [anon_sym_fixed] = ACTIONS(165),
    [anon_sym_group] = ACTIONS(165),
    [anon_sym_is] = ACTIONS(165),
    [anon_sym_get] = ACTIONS(165),
    [anon_sym_set] = ACTIONS(165),
    [anon_sym_on] = ACTIONS(165),
    [anon_sym_remove] = ACTIONS(165),
    [anon_sym_stackalloc] = ACTIONS(165),
    [anon_sym_unchecked] = ACTIONS(165),
    [anon_sym_as] = ACTIONS(165),
    [anon_sym_base] = ACTIONS(165),
    [anon_sym_56] = ACTIONS(163),
    [anon_sym_57] = ACTIONS(165),
    [anon_sym_58] = ACTIONS(163),
    [anon_sym_59] = ACTIONS(163),
    [anon_sym_60] = ACTIONS(163),
    [anon_sym_61] = ACTIONS(163),
    [anon_sym_62] = ACTIONS(163),
    [anon_sym_63] = ACTIONS(163),
    [anon_sym_64] = ACTIONS(165),
    [anon_sym_65] = ACTIONS(163),
    [anon_sym_66] = ACTIONS(163),
    [anon_sym_67] = ACTIONS(163),
    [anon_sym_68] = ACTIONS(163),
    [anon_sym_69] = ACTIONS(163),
    [anon_sym_70] = ACTIONS(163),
    [anon_sym_71] = ACTIONS(163),
    [anon_sym_72] = ACTIONS(163),
    [anon_sym_int] = ACTIONS(165),
    [anon_sym_bool] = ACTIONS(165),
    [anon_sym_string] = ACTIONS(165),
    [anon_sym_float] = ACTIONS(165),
    [anon_sym_char] = ACTIONS(165),
    [anon_sym_double] = ACTIONS(165),
    [anon_sym_byte] = ACTIONS(165),
    [anon_sym_decimal] = ACTIONS(165),
    [anon_sym_sbyte] = ACTIONS(165),
    [anon_sym_short] = ACTIONS(165),
    [anon_sym_uint] = ACTIONS(165),
    [anon_sym_ushort] = ACTIONS(165),
    [anon_sym_object] = ACTIONS(165),
    [anon_sym_ulong] = ACTIONS(165),
    [anon_sym_73] = ACTIONS(163),
    [anon_sym_74] = ACTIONS(163),
    [anon_sym_75] = ACTIONS(165),
    [anon_sym_76] = ACTIONS(165),
    [anon_sym_77] = ACTIONS(165),
    [anon_sym_78] = ACTIONS(165),
    [anon_sym_79] = ACTIONS(165),
    [anon_sym_80] = ACTIONS(163),
    [anon_sym_81] = ACTIONS(163),
    [anon_sym_82] = ACTIONS(163),
    [anon_sym_83] = ACTIONS(163),
    [anon_sym_84] = ACTIONS(163),
    [anon_sym_85] = ACTIONS(165),
    [anon_sym_86] = ACTIONS(163),
    [anon_sym_87] = ACTIONS(165),
    [anon_sym_88] = ACTIONS(165),
    [anon_sym_89] = ACTIONS(165),
    [anon_sym_90] = ACTIONS(165),
    [anon_sym_91] = ACTIONS(165),
    [anon_sym_92] = ACTIONS(165),
    [anon_sym_93] = ACTIONS(165),
    [anon_sym_94] = ACTIONS(163),
    [sym_type] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [aux_sym_z_token1] = ACTIONS(165),
    [aux_sym_z_token2] = ACTIONS(165),
    [aux_sym_z_token3] = ACTIONS(163),
    [sym_str] = ACTIONS(163),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_95] = ACTIONS(163),
    [anon_sym_96] = ACTIONS(163),
    [anon_sym_97] = ACTIONS(163),
    [anon_sym_98] = ACTIONS(163),
    [anon_sym_99] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [sym_int] = ACTIONS(165),
    [anon_sym_null] = ACTIONS(165),
    [anon_sym_100] = ACTIONS(163),
    [sym_real] = ACTIONS(165),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(167), 1,
      aux_sym_char_token1,
    ACTIONS(169), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 7,
  [SMALL_STATE(17)] = 11,
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
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(12),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(15),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(13),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(13),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cat, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bt, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bt, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
