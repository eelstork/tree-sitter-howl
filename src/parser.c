#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 242
#define ALIAS_COUNT 0
#define TOKEN_COUNT 226
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
  anon_sym_22 = 40,
  anon_sym_23 = 41,
  anon_sym_24 = 42,
  anon_sym_class = 43,
  anon_sym_interface = 44,
  anon_sym_struct = 45,
  anon_sym_enum = 46,
  anon_sym_var = 47,
  anon_sym_delegate = 48,
  anon_sym_25 = 49,
  anon_sym_26 = 50,
  anon_sym_27 = 51,
  anon_sym_28 = 52,
  anon_sym_29 = 53,
  anon_sym_30 = 54,
  anon_sym_PLUS = 55,
  anon_sym_DASH = 56,
  anon_sym_31 = 57,
  anon_sym_32 = 58,
  anon_sym_33 = 59,
  anon_sym_34 = 60,
  anon_sym_35 = 61,
  anon_sym_36 = 62,
  anon_sym_37 = 63,
  anon_sym_38 = 64,
  anon_sym_39 = 65,
  anon_sym_40 = 66,
  anon_sym_41 = 67,
  anon_sym_42 = 68,
  anon_sym_43 = 69,
  anon_sym_return = 70,
  anon_sym_44 = 71,
  anon_sym_async = 72,
  anon_sym_await = 73,
  anon_sym_by = 74,
  anon_sym_if = 75,
  anon_sym_else = 76,
  anon_sym_foreach = 77,
  anon_sym_in = 78,
  anon_sym_for = 79,
  anon_sym_do = 80,
  anon_sym_while = 81,
  anon_sym_switch = 82,
  anon_sym_case = 83,
  anon_sym_break = 84,
  anon_sym_yield = 85,
  anon_sym_try = 86,
  anon_sym_catch = 87,
  anon_sym_finally = 88,
  anon_sym_continue = 89,
  anon_sym_from = 90,
  anon_sym_where = 91,
  anon_sym_select = 92,
  anon_sym_throw = 93,
  anon_sym_join = 94,
  anon_sym_goto = 95,
  anon_sym_lock = 96,
  anon_sym_orderby = 97,
  anon_sym_45 = 98,
  anon_sym_46 = 99,
  anon_sym_47 = 100,
  anon_sym_48 = 101,
  anon_sym_49 = 102,
  anon_sym_LPAREN_RPAREN = 103,
  anon_sym_50 = 104,
  anon_sym_51 = 105,
  anon_sym_52 = 106,
  anon_sym_53 = 107,
  anon_sym_54 = 108,
  anon_sym_55 = 109,
  anon_sym_56 = 110,
  anon_sym_57 = 111,
  anon_sym_LPAREN_RPAREN2 = 112,
  anon_sym_58 = 113,
  anon_sym_59 = 114,
  anon_sym_60 = 115,
  anon_sym_add = 116,
  anon_sym_checked = 117,
  anon_sym_into = 118,
  anon_sym_nameof = 119,
  anon_sym_new = 120,
  anon_sym_using = 121,
  anon_sym_value = 122,
  anon_sym_global = 123,
  anon_sym_let = 124,
  anon_sym_operator = 125,
  anon_sym_params = 126,
  anon_sym_this = 127,
  anon_sym_typeof = 128,
  anon_sym_default = 129,
  anon_sym_equals = 130,
  anon_sym_long = 131,
  anon_sym_out = 132,
  anon_sym_ref = 133,
  anon_sym_sizeof = 134,
  anon_sym_descending = 135,
  anon_sym_ascending = 136,
  anon_sym_dynamic = 137,
  anon_sym_fixed = 138,
  anon_sym_group = 139,
  anon_sym_is = 140,
  anon_sym_get = 141,
  anon_sym_set = 142,
  anon_sym_on = 143,
  anon_sym_remove = 144,
  anon_sym_stackalloc = 145,
  anon_sym_unchecked = 146,
  anon_sym_as = 147,
  anon_sym_base = 148,
  anon_sym_61 = 149,
  anon_sym_62 = 150,
  anon_sym_63 = 151,
  anon_sym_64 = 152,
  anon_sym_65 = 153,
  anon_sym_66 = 154,
  anon_sym_67 = 155,
  anon_sym_68 = 156,
  anon_sym_69 = 157,
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
  anon_sym_70 = 172,
  anon_sym_71 = 173,
  anon_sym_72 = 174,
  anon_sym_73 = 175,
  anon_sym_74 = 176,
  anon_sym_75 = 177,
  anon_sym_76 = 178,
  anon_sym_77 = 179,
  anon_sym_78 = 180,
  anon_sym_79 = 181,
  anon_sym_80 = 182,
  anon_sym_81 = 183,
  anon_sym_82 = 184,
  anon_sym_83 = 185,
  anon_sym_84 = 186,
  anon_sym_85 = 187,
  anon_sym_86 = 188,
  anon_sym_87 = 189,
  anon_sym_88 = 190,
  anon_sym_89 = 191,
  anon_sym_90 = 192,
  anon_sym_91 = 193,
  anon_sym_92 = 194,
  anon_sym_93 = 195,
  anon_sym_94 = 196,
  anon_sym_95 = 197,
  anon_sym_96 = 198,
  anon_sym_97 = 199,
  anon_sym_98 = 200,
  anon_sym_99 = 201,
  anon_sym_100 = 202,
  anon_sym_101 = 203,
  anon_sym_102 = 204,
  anon_sym_103 = 205,
  sym_type = 206,
  sym_comment = 207,
  aux_sym_z_token1 = 208,
  aux_sym_z_token2 = 209,
  aux_sym_z_token3 = 210,
  sym_str = 211,
  anon_sym_true = 212,
  anon_sym_false = 213,
  anon_sym_104 = 214,
  anon_sym_105 = 215,
  anon_sym_106 = 216,
  anon_sym_107 = 217,
  anon_sym_108 = 218,
  anon_sym_SQUOTE = 219,
  aux_sym_char_token1 = 220,
  sym_escape_sequence = 221,
  sym_int = 222,
  anon_sym_null = 223,
  anon_sym_109 = 224,
  sym_real = 225,
  sym_ = 226,
  sym__e = 227,
  sym__lit = 228,
  sym_mod = 229,
  sym_cat = 230,
  sym_op = 231,
  sym_return = 232,
  sym_flow = 233,
  sym_key = 234,
  sym_prim = 235,
  sym_z = 236,
  sym_bool = 237,
  sym_bt = 238,
  sym_char = 239,
  sym_null = 240,
  aux_sym__repeat1 = 241,
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
  [anon_sym_] = "⒠",
  [anon_sym_2] = "⒤",
  [anon_sym_3] = "‒̥",
  [anon_sym_4] = "؟",
  [anon_sym_5] = "⍜",
  [anon_sym_6] = "⍉",
  [anon_sym_7] = "⏚",
  [anon_sym_8] = "‒",
  [anon_sym_9] = "╍̥",
  [anon_sym_10] = "╍",
  [anon_sym_11] = "◠̥",
  [anon_sym_12] = "◠",
  [anon_sym_13] = "╌̥",
  [anon_sym_14] = "╌",
  [anon_sym_15] = "▰̥",
  [anon_sym_16] = "▰",
  [anon_sym_17] = "☋",
  [anon_sym_18] = "ᴸ",
  [anon_sym_19] = "⁺",
  [anon_sym_20] = "ᴾ",
  [anon_sym_21] = "⌷",
  [anon_sym_22] = "∘",
  [anon_sym_23] = "ᵛ",
  [anon_sym_24] = "🔒",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_struct] = "struct",
  [anon_sym_enum] = "enum",
  [anon_sym_var] = "var",
  [anon_sym_delegate] = "delegate",
  [anon_sym_25] = "⊓",
  [anon_sym_26] = "○",
  [anon_sym_27] = "⍧",
  [anon_sym_28] = "⍥",
  [anon_sym_29] = "◌",
  [anon_sym_30] = "⊟",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_31] = "🝠",
  [anon_sym_32] = "⎚",
  [anon_sym_33] = "→",
  [anon_sym_34] = "☰",
  [anon_sym_35] = "≠",
  [anon_sym_36] = "≥",
  [anon_sym_37] = "≤",
  [anon_sym_38] = "∧",
  [anon_sym_39] = "∨",
  [anon_sym_40] = "⁝",
  [anon_sym_41] = "❙",
  [anon_sym_42] = "৴",
  [anon_sym_43] = "ᖾ",
  [anon_sym_return] = "return",
  [anon_sym_44] = "⮐",
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
  [anon_sym_45] = "⤳",
  [anon_sym_46] = "⤴",
  [anon_sym_47] = "⤵",
  [anon_sym_48] = "∀",
  [anon_sym_49] = "⤓",
  [anon_sym_LPAREN_RPAREN] = "(˙▿˙)",
  [anon_sym_50] = "∈",
  [anon_sym_51] = "⟳",
  [anon_sym_52] = "⟲",
  [anon_sym_53] = "⤭",
  [anon_sym_54] = "⥰",
  [anon_sym_55] = "¦",
  [anon_sym_56] = "↯",
  [anon_sym_57] = "⇤",
  [anon_sym_LPAREN_RPAREN2] = "(╯°□°)╯",
  [anon_sym_58] = "‖",
  [anon_sym_59] = "¿",
  [anon_sym_60] = "፥",
  [anon_sym_add] = "add",
  [anon_sym_checked] = "checked",
  [anon_sym_into] = "into",
  [anon_sym_nameof] = "nameof",
  [anon_sym_new] = "new",
  [anon_sym_using] = "using",
  [anon_sym_value] = "value",
  [anon_sym_global] = "global",
  [anon_sym_let] = "let",
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
  [anon_sym_61] = "⊐̥",
  [anon_sym_62] = "⊐",
  [anon_sym_63] = "⏰",
  [anon_sym_64] = "⌽",
  [anon_sym_65] = "⨕",
  [anon_sym_66] = "╭",
  [anon_sym_67] = "╰",
  [anon_sym_68] = "⌢",
  [anon_sym_69] = "⦿",
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
  [anon_sym_70] = "▷",
  [anon_sym_71] = "▶",
  [anon_sym_72] = "ᆞ",
  [anon_sym_73] = "ㄹ",
  [anon_sym_74] = "エ",
  [anon_sym_75] = "ㅇ",
  [anon_sym_76] = "ᆨ",
  [anon_sym_77] = "ᆩ",
  [anon_sym_78] = "ᅮ",
  [anon_sym_79] = "ᅭ",
  [anon_sym_80] = "ㅅ",
  [anon_sym_81] = "ㅆ",
  [anon_sym_82] = "ᄍ",
  [anon_sym_83] = "⊡",
  [anon_sym_84] = "∙",
  [anon_sym_85] = "⒜",
  [anon_sym_86] = "⒡",
  [anon_sym_87] = "𝕄",
  [anon_sym_88] = "𝕊",
  [anon_sym_89] = "𝔼",
  [anon_sym_90] = "𝕃",
  [anon_sym_91] = "√",
  [anon_sym_92] = "∑",
  [anon_sym_93] = "𝛑",
  [anon_sym_94] = "ロ",
  [anon_sym_95] = "⫙",
  [anon_sym_96] = "ᇅ",
  [anon_sym_97] = "フ",
  [anon_sym_98] = "シ",
  [anon_sym_99] = "タ",
  [anon_sym_100] = "ト",
  [anon_sym_101] = "メ",
  [anon_sym_102] = "メ̂",
  [anon_sym_103] = "⑂",
  [sym_type] = "type",
  [sym_comment] = "comment",
  [aux_sym_z_token1] = "z_token1",
  [aux_sym_z_token2] = "z_token2",
  [aux_sym_z_token3] = "z_token3",
  [sym_str] = "str",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_104] = "✓",
  [anon_sym_105] = "✗",
  [anon_sym_106] = "◇",
  [anon_sym_107] = "☡",
  [anon_sym_108] = "■",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_int] = "int",
  [anon_sym_null] = "null",
  [anon_sym_109] = "∅",
  [sym_real] = "real",
  [sym_] = "Σ",
  [sym__e] = "_e",
  [sym__lit] = "_lit",
  [sym_mod] = "mod",
  [sym_cat] = "cat",
  [sym_op] = "op",
  [sym_return] = "return",
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
  [anon_sym_22] = anon_sym_22,
  [anon_sym_23] = anon_sym_23,
  [anon_sym_24] = anon_sym_24,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_delegate] = anon_sym_delegate,
  [anon_sym_25] = anon_sym_25,
  [anon_sym_26] = anon_sym_26,
  [anon_sym_27] = anon_sym_27,
  [anon_sym_28] = anon_sym_28,
  [anon_sym_29] = anon_sym_29,
  [anon_sym_30] = anon_sym_30,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_31] = anon_sym_31,
  [anon_sym_32] = anon_sym_32,
  [anon_sym_33] = anon_sym_33,
  [anon_sym_34] = anon_sym_34,
  [anon_sym_35] = anon_sym_35,
  [anon_sym_36] = anon_sym_36,
  [anon_sym_37] = anon_sym_37,
  [anon_sym_38] = anon_sym_38,
  [anon_sym_39] = anon_sym_39,
  [anon_sym_40] = anon_sym_40,
  [anon_sym_41] = anon_sym_41,
  [anon_sym_42] = anon_sym_42,
  [anon_sym_43] = anon_sym_43,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_44] = anon_sym_44,
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
  [anon_sym_45] = anon_sym_45,
  [anon_sym_46] = anon_sym_46,
  [anon_sym_47] = anon_sym_47,
  [anon_sym_48] = anon_sym_48,
  [anon_sym_49] = anon_sym_49,
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_50] = anon_sym_50,
  [anon_sym_51] = anon_sym_51,
  [anon_sym_52] = anon_sym_52,
  [anon_sym_53] = anon_sym_53,
  [anon_sym_54] = anon_sym_54,
  [anon_sym_55] = anon_sym_55,
  [anon_sym_56] = anon_sym_56,
  [anon_sym_57] = anon_sym_57,
  [anon_sym_LPAREN_RPAREN2] = anon_sym_LPAREN_RPAREN2,
  [anon_sym_58] = anon_sym_58,
  [anon_sym_59] = anon_sym_59,
  [anon_sym_60] = anon_sym_60,
  [anon_sym_add] = anon_sym_add,
  [anon_sym_checked] = anon_sym_checked,
  [anon_sym_into] = anon_sym_into,
  [anon_sym_nameof] = anon_sym_nameof,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_let] = anon_sym_let,
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
  [anon_sym_61] = anon_sym_61,
  [anon_sym_62] = anon_sym_62,
  [anon_sym_63] = anon_sym_63,
  [anon_sym_64] = anon_sym_64,
  [anon_sym_65] = anon_sym_65,
  [anon_sym_66] = anon_sym_66,
  [anon_sym_67] = anon_sym_67,
  [anon_sym_68] = anon_sym_68,
  [anon_sym_69] = anon_sym_69,
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
  [anon_sym_70] = anon_sym_70,
  [anon_sym_71] = anon_sym_71,
  [anon_sym_72] = anon_sym_72,
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
  [anon_sym_95] = anon_sym_95,
  [anon_sym_96] = anon_sym_96,
  [anon_sym_97] = anon_sym_97,
  [anon_sym_98] = anon_sym_98,
  [anon_sym_99] = anon_sym_99,
  [anon_sym_100] = anon_sym_100,
  [anon_sym_101] = anon_sym_101,
  [anon_sym_102] = anon_sym_102,
  [anon_sym_103] = anon_sym_103,
  [sym_type] = sym_type,
  [sym_comment] = sym_comment,
  [aux_sym_z_token1] = aux_sym_z_token1,
  [aux_sym_z_token2] = aux_sym_z_token2,
  [aux_sym_z_token3] = aux_sym_z_token3,
  [sym_str] = sym_str,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_104] = anon_sym_104,
  [anon_sym_105] = anon_sym_105,
  [anon_sym_106] = anon_sym_106,
  [anon_sym_107] = anon_sym_107,
  [anon_sym_108] = anon_sym_108,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_int] = sym_int,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_109] = anon_sym_109,
  [sym_real] = sym_real,
  [sym_] = sym_,
  [sym__e] = sym__e,
  [sym__lit] = sym__lit,
  [sym_mod] = sym_mod,
  [sym_cat] = sym_cat,
  [sym_op] = sym_op,
  [sym_return] = sym_return,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_44] = {
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
  [anon_sym_LPAREN_RPAREN] = {
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
  [anon_sym_56] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_57] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_RPAREN2] = {
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
  [anon_sym_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_checked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nameof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
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
  [anon_sym_100] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_101] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_102] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_103] = {
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
  [anon_sym_104] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_105] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_106] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_107] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_108] = {
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
  [anon_sym_109] = {
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
  [sym_return] = {
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead == '0') ADVANCE(125);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == 166) ADVANCE(82);
      if (lookahead == 191) ADVANCE(87);
      if (lookahead == 1567) ADVANCE(32);
      if (lookahead == 2548) ADVANCE(69);
      if (lookahead == 4965) ADVANCE(88);
      if (lookahead == 8210) ADVANCE(36);
      if (lookahead == 8214) ADVANCE(86);
      if (lookahead == 8285) ADVANCE(67);
      if (lookahead == 8314) ADVANCE(46);
      if (lookahead == 8594) ADVANCE(60);
      if (lookahead == 8623) ADVANCE(83);
      if (lookahead == 8676) ADVANCE(84);
      if (lookahead == 8704) ADVANCE(74);
      if (lookahead == 8709) ADVANCE(150);
      if (lookahead == 8712) ADVANCE(77);
      if (lookahead == 8721) ADVANCE(109);
      if (lookahead == 8728) ADVANCE(48);
      if (lookahead == 8729) ADVANCE(101);
      if (lookahead == 8730) ADVANCE(108);
      if (lookahead == 8743) ADVANCE(65);
      if (lookahead == 8744) ADVANCE(66);
      if (lookahead == 8800) ADVANCE(62);
      if (lookahead == 8804) ADVANCE(64);
      if (lookahead == 8805) ADVANCE(63);
      if (lookahead == 8848) ADVANCE(90);
      if (lookahead == 8851) ADVANCE(50);
      if (lookahead == 8863) ADVANCE(55);
      if (lookahead == 8865) ADVANCE(100);
      if (lookahead == 8994) ADVANCE(96);
      if (lookahead == 9015) ADVANCE(47);
      if (lookahead == 9021) ADVANCE(92);
      if (lookahead == 9033) ADVANCE(34);
      if (lookahead == 9052) ADVANCE(33);
      if (lookahead == 9061) ADVANCE(53);
      if (lookahead == 9063) ADVANCE(52);
      if (lookahead == 9114) ADVANCE(59);
      if (lookahead == 9178) ADVANCE(35);
      if (lookahead == 9200) ADVANCE(91);
      if (lookahead == 9282) ADVANCE(112);
      if (lookahead == 9372) ADVANCE(102);
      if (lookahead == 9376) ADVANCE(29);
      if (lookahead == 9377) ADVANCE(103);
      if (lookahead == 9380) ADVANCE(30);
      if (lookahead == 9548) ADVANCE(42);
      if (lookahead == 9549) ADVANCE(38);
      if (lookahead == 9581) ADVANCE(94);
      if (lookahead == 9584) ADVANCE(95);
      if (lookahead == 9632) ADVANCE(137);
      if (lookahead == 9648) ADVANCE(44);
      if (lookahead == 9654) ADVANCE(99);
      if (lookahead == 9655) ADVANCE(98);
      if (lookahead == 9671) ADVANCE(135);
      if (lookahead == 9675) ADVANCE(51);
      if (lookahead == 9676) ADVANCE(54);
      if (lookahead == 9696) ADVANCE(40);
      if (lookahead == 9739) ADVANCE(45);
      if (lookahead == 9761) ADVANCE(136);
      if (lookahead == 9776) ADVANCE(61);
      if (lookahead == 10003) ADVANCE(133);
      if (lookahead == 10007) ADVANCE(134);
      if (lookahead == 10073) ADVANCE(68);
      if (lookahead == 10226) ADVANCE(79);
      if (lookahead == 10227) ADVANCE(78);
      if (lookahead == 10515) ADVANCE(75);
      if (lookahead == 10541) ADVANCE(80);
      if (lookahead == 10547) ADVANCE(71);
      if (lookahead == 10548) ADVANCE(72);
      if (lookahead == 10549) ADVANCE(73);
      if (lookahead == 10608) ADVANCE(81);
      if (lookahead == 10687) ADVANCE(97);
      if (lookahead == 10773) ADVANCE(93);
      if (lookahead == 10969) ADVANCE(111);
      if (lookahead == 11152) ADVANCE(70);
      if (lookahead == 120124) ADVANCE(106);
      if (lookahead == 120131) ADVANCE(107);
      if (lookahead == 120132) ADVANCE(104);
      if (lookahead == 120138) ADVANCE(105);
      if (lookahead == 120529) ADVANCE(110);
      if (lookahead == 128274) ADVANCE(49);
      if (lookahead == 128864) ADVANCE(58);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('[' <= lookahead && lookahead <= '`')) ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('!' <= lookahead && lookahead <= '?')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(132);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(19);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(139);
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
      if (lookahead == 9583) ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 9633) ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 9663) ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(152);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(153);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_8);
      if (lookahead == 805) ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_10);
      if (lookahead == 805) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_11);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_12);
      if (lookahead == 805) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_13);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_14);
      if (lookahead == 805) ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_15);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_16);
      if (lookahead == 805) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_17);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_19);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_21);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_22);
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
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_31);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_32);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_33);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_34);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_35);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_36);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_37);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_38);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_39);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_40);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_41);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
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
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_50);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_51);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_52);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_53);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_54);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_55);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_56);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_57);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_58);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_59);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_61);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_62);
      if (lookahead == 805) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_63);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_64);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_65);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_66);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_67);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_68);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_69);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_70);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_71);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_83);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_84);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_85);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_86);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_87);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_88);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_89);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_90);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_91);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_92);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_93);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_95);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_103);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == 'U') ADVANCE(115);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_z_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '"') ADVANCE(132);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (lookahead == 729) ADVANCE(13);
      if (lookahead == 9583) ADVANCE(8);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_z_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 8191) ||
          (11264 <= lookahead && lookahead <= 55295)) ADVANCE(118);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_z_token2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_z_token3);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_104);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_105);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_106);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_107);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_108);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_109);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'M' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'M' ||
          lookahead == 'd' ||
          lookahead == 'f' ||
          lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(153);
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
      if (lookahead == 4365) ADVANCE(21);
      if (lookahead == 4461) ADVANCE(22);
      if (lookahead == 4462) ADVANCE(23);
      if (lookahead == 4510) ADVANCE(24);
      if (lookahead == 4520) ADVANCE(25);
      if (lookahead == 4521) ADVANCE(26);
      if (lookahead == 4549) ADVANCE(27);
      if (lookahead == 5566) ADVANCE(28);
      if (lookahead == 7480) ADVANCE(29);
      if (lookahead == 7486) ADVANCE(30);
      if (lookahead == 7515) ADVANCE(31);
      if (lookahead == 12456) ADVANCE(32);
      if (lookahead == 12471) ADVANCE(33);
      if (lookahead == 12479) ADVANCE(34);
      if (lookahead == 12488) ADVANCE(35);
      if (lookahead == 12501) ADVANCE(36);
      if (lookahead == 12513) ADVANCE(37);
      if (lookahead == 12525) ADVANCE(38);
      if (lookahead == 12601) ADVANCE(39);
      if (lookahead == 12613) ADVANCE(40);
      if (lookahead == 12614) ADVANCE(41);
      if (lookahead == 12615) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'h') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'q') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_82);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_79);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_78);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_72);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_76);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_77);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_96);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_43);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_18);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_20);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_23);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_74);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_98);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_99);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_100);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_97);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_101);
      if (lookahead == 770) ADVANCE(109);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_94);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_73);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_80);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_81);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_75);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_by);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(138);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 81:
      if (lookahead == 'j') ADVANCE(155);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 94:
      if (lookahead == 'z') ADVANCE(173);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(179);
      if (lookahead == 'y') ADVANCE(180);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_102);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_add);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(206);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(208);
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(214);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(217);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 143:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(229);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 150:
      if (lookahead == 'k') ADVANCE(234);
      END_STATE();
    case 151:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 161:
      if (lookahead == 'v') ADVANCE(244);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 177:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(266);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_base);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 201:
      if (lookahead == 'k') ADVANCE(280);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(281);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 206:
      if (lookahead == 'k') ADVANCE(282);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(286);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 212:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 214:
      if (lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 215:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 218:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 222:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(302);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_lock);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(306);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 242:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 243:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(315);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 254:
      if (lookahead == 'o') ADVANCE(321);
      END_STATE();
    case 255:
      if (lookahead == 'k') ADVANCE(322);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(325);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 261:
      if (lookahead == 'w') ADVANCE(327);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 263:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_uint);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 267:
      if (lookahead == 'f') ADVANCE(331);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 269:
      if (lookahead == 'g') ADVANCE(333);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(335);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 276:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(341);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 286:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 287:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 288:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(351);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(353);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_fixed);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(355);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 303:
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 304:
      if (lookahead == 'f') ADVANCE(359);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 307:
      if (lookahead == 'b') ADVANCE(362);
      END_STATE();
    case 308:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 309:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 310:
      if (lookahead == 'a') ADVANCE(365);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(368);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_sbyte);
      END_STATE();
    case 318:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 321:
      if (lookahead == 'f') ADVANCE(374);
      END_STATE();
    case 322:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(377);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(378);
      END_STATE();
    case 326:
      if (lookahead == 'h') ADVANCE(379);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 328:
      if (lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_ulong);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(381);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 335:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 340:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(390);
      END_STATE();
    case 345:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 346:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(393);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 349:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_equals);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_extern);
      END_STATE();
    case 353:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 354:
      if (lookahead == 'h') ADVANCE(397);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 357:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 358:
      if (lookahead == 'a') ADVANCE(400);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_nameof);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 361:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 362:
      if (lookahead == 'y') ADVANCE(402);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_sealed);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 381:
      if (lookahead == 'k') ADVANCE(409);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_ushort);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(412);
      END_STATE();
    case 387:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_checked);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_decimal);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_dynamic);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_foreach);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 399:
      if (lookahead == 'c') ADVANCE(419);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 401:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_orderby);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_partial);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 407:
      if (lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(425);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 413:
      if (lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_delegate);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_implicit);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 425:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_ascending);
      END_STATE();
    case 429:
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 432:
      if (lookahead == 'c') ADVANCE(435);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_unchecked);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_descending);
      END_STATE();
    case 435:
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
    [anon_sym_22] = ACTIONS(1),
    [anon_sym_23] = ACTIONS(1),
    [anon_sym_24] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_delegate] = ACTIONS(1),
    [anon_sym_25] = ACTIONS(1),
    [anon_sym_26] = ACTIONS(1),
    [anon_sym_27] = ACTIONS(1),
    [anon_sym_28] = ACTIONS(1),
    [anon_sym_29] = ACTIONS(1),
    [anon_sym_30] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_31] = ACTIONS(1),
    [anon_sym_32] = ACTIONS(1),
    [anon_sym_33] = ACTIONS(1),
    [anon_sym_34] = ACTIONS(1),
    [anon_sym_35] = ACTIONS(1),
    [anon_sym_36] = ACTIONS(1),
    [anon_sym_37] = ACTIONS(1),
    [anon_sym_38] = ACTIONS(1),
    [anon_sym_39] = ACTIONS(1),
    [anon_sym_40] = ACTIONS(1),
    [anon_sym_41] = ACTIONS(1),
    [anon_sym_42] = ACTIONS(1),
    [anon_sym_43] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_44] = ACTIONS(1),
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
    [anon_sym_45] = ACTIONS(1),
    [anon_sym_46] = ACTIONS(1),
    [anon_sym_47] = ACTIONS(1),
    [anon_sym_48] = ACTIONS(1),
    [anon_sym_49] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_50] = ACTIONS(1),
    [anon_sym_51] = ACTIONS(1),
    [anon_sym_52] = ACTIONS(1),
    [anon_sym_53] = ACTIONS(1),
    [anon_sym_54] = ACTIONS(1),
    [anon_sym_55] = ACTIONS(1),
    [anon_sym_56] = ACTIONS(1),
    [anon_sym_57] = ACTIONS(1),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(1),
    [anon_sym_58] = ACTIONS(1),
    [anon_sym_59] = ACTIONS(1),
    [anon_sym_60] = ACTIONS(1),
    [anon_sym_add] = ACTIONS(1),
    [anon_sym_checked] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_nameof] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
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
    [anon_sym_61] = ACTIONS(1),
    [anon_sym_62] = ACTIONS(1),
    [anon_sym_63] = ACTIONS(1),
    [anon_sym_64] = ACTIONS(1),
    [anon_sym_65] = ACTIONS(1),
    [anon_sym_66] = ACTIONS(1),
    [anon_sym_67] = ACTIONS(1),
    [anon_sym_68] = ACTIONS(1),
    [anon_sym_69] = ACTIONS(1),
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
    [anon_sym_70] = ACTIONS(1),
    [anon_sym_71] = ACTIONS(1),
    [anon_sym_72] = ACTIONS(1),
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
    [anon_sym_95] = ACTIONS(1),
    [anon_sym_96] = ACTIONS(1),
    [anon_sym_97] = ACTIONS(1),
    [anon_sym_98] = ACTIONS(1),
    [anon_sym_99] = ACTIONS(1),
    [anon_sym_100] = ACTIONS(1),
    [anon_sym_101] = ACTIONS(1),
    [anon_sym_102] = ACTIONS(1),
    [anon_sym_103] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [aux_sym_z_token1] = ACTIONS(1),
    [aux_sym_z_token2] = ACTIONS(1),
    [aux_sym_z_token3] = ACTIONS(1),
    [sym_str] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_104] = ACTIONS(1),
    [anon_sym_105] = ACTIONS(1),
    [anon_sym_106] = ACTIONS(1),
    [anon_sym_107] = ACTIONS(1),
    [anon_sym_108] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_109] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
  },
  [1] = {
    [sym_] = STATE(17),
    [sym__e] = STATE(2),
    [sym__lit] = STATE(2),
    [sym_mod] = STATE(2),
    [sym_cat] = STATE(2),
    [sym_op] = STATE(2),
    [sym_return] = STATE(2),
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
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(7),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(7),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(9),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(7),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_25] = ACTIONS(13),
    [anon_sym_26] = ACTIONS(13),
    [anon_sym_27] = ACTIONS(13),
    [anon_sym_28] = ACTIONS(13),
    [anon_sym_29] = ACTIONS(13),
    [anon_sym_30] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(15),
    [anon_sym_42] = ACTIONS(17),
    [anon_sym_43] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_44] = ACTIONS(21),
    [anon_sym_async] = ACTIONS(23),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_by] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(23),
    [anon_sym_try] = ACTIONS(23),
    [anon_sym_catch] = ACTIONS(23),
    [anon_sym_finally] = ACTIONS(23),
    [anon_sym_continue] = ACTIONS(23),
    [anon_sym_from] = ACTIONS(23),
    [anon_sym_where] = ACTIONS(23),
    [anon_sym_select] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_orderby] = ACTIONS(23),
    [anon_sym_45] = ACTIONS(25),
    [anon_sym_46] = ACTIONS(25),
    [anon_sym_47] = ACTIONS(25),
    [anon_sym_48] = ACTIONS(25),
    [anon_sym_49] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(25),
    [anon_sym_50] = ACTIONS(25),
    [anon_sym_51] = ACTIONS(25),
    [anon_sym_52] = ACTIONS(25),
    [anon_sym_53] = ACTIONS(25),
    [anon_sym_54] = ACTIONS(25),
    [anon_sym_55] = ACTIONS(25),
    [anon_sym_56] = ACTIONS(25),
    [anon_sym_57] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(25),
    [anon_sym_58] = ACTIONS(25),
    [anon_sym_59] = ACTIONS(25),
    [anon_sym_60] = ACTIONS(23),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_checked] = ACTIONS(27),
    [anon_sym_into] = ACTIONS(27),
    [anon_sym_nameof] = ACTIONS(27),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_using] = ACTIONS(27),
    [anon_sym_value] = ACTIONS(27),
    [anon_sym_global] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_operator] = ACTIONS(27),
    [anon_sym_params] = ACTIONS(27),
    [anon_sym_this] = ACTIONS(27),
    [anon_sym_typeof] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_equals] = ACTIONS(27),
    [anon_sym_long] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(27),
    [anon_sym_sizeof] = ACTIONS(27),
    [anon_sym_descending] = ACTIONS(27),
    [anon_sym_ascending] = ACTIONS(27),
    [anon_sym_dynamic] = ACTIONS(27),
    [anon_sym_fixed] = ACTIONS(27),
    [anon_sym_group] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(27),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_set] = ACTIONS(27),
    [anon_sym_on] = ACTIONS(27),
    [anon_sym_remove] = ACTIONS(27),
    [anon_sym_stackalloc] = ACTIONS(27),
    [anon_sym_unchecked] = ACTIONS(27),
    [anon_sym_as] = ACTIONS(27),
    [anon_sym_base] = ACTIONS(27),
    [anon_sym_61] = ACTIONS(29),
    [anon_sym_62] = ACTIONS(27),
    [anon_sym_63] = ACTIONS(29),
    [anon_sym_64] = ACTIONS(29),
    [anon_sym_65] = ACTIONS(29),
    [anon_sym_66] = ACTIONS(29),
    [anon_sym_67] = ACTIONS(29),
    [anon_sym_68] = ACTIONS(29),
    [anon_sym_69] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_decimal] = ACTIONS(31),
    [anon_sym_sbyte] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_70] = ACTIONS(33),
    [anon_sym_71] = ACTIONS(33),
    [anon_sym_72] = ACTIONS(31),
    [anon_sym_73] = ACTIONS(31),
    [anon_sym_74] = ACTIONS(31),
    [anon_sym_75] = ACTIONS(31),
    [anon_sym_76] = ACTIONS(31),
    [anon_sym_77] = ACTIONS(31),
    [anon_sym_78] = ACTIONS(31),
    [anon_sym_79] = ACTIONS(31),
    [anon_sym_80] = ACTIONS(31),
    [anon_sym_81] = ACTIONS(31),
    [anon_sym_82] = ACTIONS(31),
    [anon_sym_83] = ACTIONS(33),
    [anon_sym_84] = ACTIONS(33),
    [anon_sym_85] = ACTIONS(33),
    [anon_sym_86] = ACTIONS(33),
    [anon_sym_87] = ACTIONS(33),
    [anon_sym_88] = ACTIONS(33),
    [anon_sym_89] = ACTIONS(33),
    [anon_sym_90] = ACTIONS(33),
    [anon_sym_91] = ACTIONS(33),
    [anon_sym_92] = ACTIONS(33),
    [anon_sym_93] = ACTIONS(33),
    [anon_sym_94] = ACTIONS(31),
    [anon_sym_95] = ACTIONS(33),
    [anon_sym_96] = ACTIONS(31),
    [anon_sym_97] = ACTIONS(31),
    [anon_sym_98] = ACTIONS(31),
    [anon_sym_99] = ACTIONS(31),
    [anon_sym_100] = ACTIONS(31),
    [anon_sym_101] = ACTIONS(31),
    [anon_sym_102] = ACTIONS(31),
    [anon_sym_103] = ACTIONS(33),
    [sym_type] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [aux_sym_z_token1] = ACTIONS(37),
    [aux_sym_z_token2] = ACTIONS(37),
    [aux_sym_z_token3] = ACTIONS(39),
    [sym_str] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_104] = ACTIONS(43),
    [anon_sym_105] = ACTIONS(43),
    [anon_sym_106] = ACTIONS(45),
    [anon_sym_107] = ACTIONS(45),
    [anon_sym_108] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_int] = ACTIONS(5),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_109] = ACTIONS(51),
    [sym_real] = ACTIONS(5),
  },
  [2] = {
    [sym__e] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_op] = STATE(3),
    [sym_return] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_prim] = STATE(3),
    [sym_z] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_bt] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_id] = ACTIONS(55),
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
    [anon_sym_2] = ACTIONS(9),
    [anon_sym_3] = ACTIONS(9),
    [anon_sym_4] = ACTIONS(7),
    [anon_sym_5] = ACTIONS(9),
    [anon_sym_6] = ACTIONS(9),
    [anon_sym_7] = ACTIONS(9),
    [anon_sym_8] = ACTIONS(7),
    [anon_sym_9] = ACTIONS(9),
    [anon_sym_10] = ACTIONS(7),
    [anon_sym_11] = ACTIONS(9),
    [anon_sym_12] = ACTIONS(7),
    [anon_sym_13] = ACTIONS(9),
    [anon_sym_14] = ACTIONS(7),
    [anon_sym_15] = ACTIONS(9),
    [anon_sym_16] = ACTIONS(7),
    [anon_sym_17] = ACTIONS(9),
    [anon_sym_18] = ACTIONS(7),
    [anon_sym_19] = ACTIONS(9),
    [anon_sym_20] = ACTIONS(7),
    [anon_sym_21] = ACTIONS(9),
    [anon_sym_22] = ACTIONS(9),
    [anon_sym_23] = ACTIONS(7),
    [anon_sym_24] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_delegate] = ACTIONS(11),
    [anon_sym_25] = ACTIONS(13),
    [anon_sym_26] = ACTIONS(13),
    [anon_sym_27] = ACTIONS(13),
    [anon_sym_28] = ACTIONS(13),
    [anon_sym_29] = ACTIONS(13),
    [anon_sym_30] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_31] = ACTIONS(15),
    [anon_sym_32] = ACTIONS(15),
    [anon_sym_33] = ACTIONS(15),
    [anon_sym_34] = ACTIONS(15),
    [anon_sym_35] = ACTIONS(15),
    [anon_sym_36] = ACTIONS(15),
    [anon_sym_37] = ACTIONS(15),
    [anon_sym_38] = ACTIONS(15),
    [anon_sym_39] = ACTIONS(15),
    [anon_sym_40] = ACTIONS(15),
    [anon_sym_41] = ACTIONS(15),
    [anon_sym_42] = ACTIONS(17),
    [anon_sym_43] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [anon_sym_44] = ACTIONS(21),
    [anon_sym_async] = ACTIONS(23),
    [anon_sym_await] = ACTIONS(23),
    [anon_sym_by] = ACTIONS(23),
    [anon_sym_if] = ACTIONS(23),
    [anon_sym_else] = ACTIONS(23),
    [anon_sym_foreach] = ACTIONS(23),
    [anon_sym_in] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(23),
    [anon_sym_do] = ACTIONS(23),
    [anon_sym_while] = ACTIONS(23),
    [anon_sym_switch] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(23),
    [anon_sym_yield] = ACTIONS(23),
    [anon_sym_try] = ACTIONS(23),
    [anon_sym_catch] = ACTIONS(23),
    [anon_sym_finally] = ACTIONS(23),
    [anon_sym_continue] = ACTIONS(23),
    [anon_sym_from] = ACTIONS(23),
    [anon_sym_where] = ACTIONS(23),
    [anon_sym_select] = ACTIONS(23),
    [anon_sym_throw] = ACTIONS(23),
    [anon_sym_join] = ACTIONS(23),
    [anon_sym_goto] = ACTIONS(23),
    [anon_sym_lock] = ACTIONS(23),
    [anon_sym_orderby] = ACTIONS(23),
    [anon_sym_45] = ACTIONS(25),
    [anon_sym_46] = ACTIONS(25),
    [anon_sym_47] = ACTIONS(25),
    [anon_sym_48] = ACTIONS(25),
    [anon_sym_49] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(25),
    [anon_sym_50] = ACTIONS(25),
    [anon_sym_51] = ACTIONS(25),
    [anon_sym_52] = ACTIONS(25),
    [anon_sym_53] = ACTIONS(25),
    [anon_sym_54] = ACTIONS(25),
    [anon_sym_55] = ACTIONS(25),
    [anon_sym_56] = ACTIONS(25),
    [anon_sym_57] = ACTIONS(25),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(25),
    [anon_sym_58] = ACTIONS(25),
    [anon_sym_59] = ACTIONS(25),
    [anon_sym_60] = ACTIONS(23),
    [anon_sym_add] = ACTIONS(27),
    [anon_sym_checked] = ACTIONS(27),
    [anon_sym_into] = ACTIONS(27),
    [anon_sym_nameof] = ACTIONS(27),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_using] = ACTIONS(27),
    [anon_sym_value] = ACTIONS(27),
    [anon_sym_global] = ACTIONS(27),
    [anon_sym_let] = ACTIONS(27),
    [anon_sym_operator] = ACTIONS(27),
    [anon_sym_params] = ACTIONS(27),
    [anon_sym_this] = ACTIONS(27),
    [anon_sym_typeof] = ACTIONS(27),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_equals] = ACTIONS(27),
    [anon_sym_long] = ACTIONS(27),
    [anon_sym_out] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(27),
    [anon_sym_sizeof] = ACTIONS(27),
    [anon_sym_descending] = ACTIONS(27),
    [anon_sym_ascending] = ACTIONS(27),
    [anon_sym_dynamic] = ACTIONS(27),
    [anon_sym_fixed] = ACTIONS(27),
    [anon_sym_group] = ACTIONS(27),
    [anon_sym_is] = ACTIONS(27),
    [anon_sym_get] = ACTIONS(27),
    [anon_sym_set] = ACTIONS(27),
    [anon_sym_on] = ACTIONS(27),
    [anon_sym_remove] = ACTIONS(27),
    [anon_sym_stackalloc] = ACTIONS(27),
    [anon_sym_unchecked] = ACTIONS(27),
    [anon_sym_as] = ACTIONS(27),
    [anon_sym_base] = ACTIONS(27),
    [anon_sym_61] = ACTIONS(29),
    [anon_sym_62] = ACTIONS(27),
    [anon_sym_63] = ACTIONS(29),
    [anon_sym_64] = ACTIONS(29),
    [anon_sym_65] = ACTIONS(29),
    [anon_sym_66] = ACTIONS(29),
    [anon_sym_67] = ACTIONS(29),
    [anon_sym_68] = ACTIONS(29),
    [anon_sym_69] = ACTIONS(29),
    [anon_sym_int] = ACTIONS(31),
    [anon_sym_bool] = ACTIONS(31),
    [anon_sym_string] = ACTIONS(31),
    [anon_sym_float] = ACTIONS(31),
    [anon_sym_char] = ACTIONS(31),
    [anon_sym_double] = ACTIONS(31),
    [anon_sym_byte] = ACTIONS(31),
    [anon_sym_decimal] = ACTIONS(31),
    [anon_sym_sbyte] = ACTIONS(31),
    [anon_sym_short] = ACTIONS(31),
    [anon_sym_uint] = ACTIONS(31),
    [anon_sym_ushort] = ACTIONS(31),
    [anon_sym_object] = ACTIONS(31),
    [anon_sym_ulong] = ACTIONS(31),
    [anon_sym_70] = ACTIONS(33),
    [anon_sym_71] = ACTIONS(33),
    [anon_sym_72] = ACTIONS(31),
    [anon_sym_73] = ACTIONS(31),
    [anon_sym_74] = ACTIONS(31),
    [anon_sym_75] = ACTIONS(31),
    [anon_sym_76] = ACTIONS(31),
    [anon_sym_77] = ACTIONS(31),
    [anon_sym_78] = ACTIONS(31),
    [anon_sym_79] = ACTIONS(31),
    [anon_sym_80] = ACTIONS(31),
    [anon_sym_81] = ACTIONS(31),
    [anon_sym_82] = ACTIONS(31),
    [anon_sym_83] = ACTIONS(33),
    [anon_sym_84] = ACTIONS(33),
    [anon_sym_85] = ACTIONS(33),
    [anon_sym_86] = ACTIONS(33),
    [anon_sym_87] = ACTIONS(33),
    [anon_sym_88] = ACTIONS(33),
    [anon_sym_89] = ACTIONS(33),
    [anon_sym_90] = ACTIONS(33),
    [anon_sym_91] = ACTIONS(33),
    [anon_sym_92] = ACTIONS(33),
    [anon_sym_93] = ACTIONS(33),
    [anon_sym_94] = ACTIONS(31),
    [anon_sym_95] = ACTIONS(33),
    [anon_sym_96] = ACTIONS(31),
    [anon_sym_97] = ACTIONS(31),
    [anon_sym_98] = ACTIONS(31),
    [anon_sym_99] = ACTIONS(31),
    [anon_sym_100] = ACTIONS(31),
    [anon_sym_101] = ACTIONS(31),
    [anon_sym_102] = ACTIONS(31),
    [anon_sym_103] = ACTIONS(33),
    [sym_type] = ACTIONS(57),
    [sym_comment] = ACTIONS(57),
    [aux_sym_z_token1] = ACTIONS(37),
    [aux_sym_z_token2] = ACTIONS(37),
    [aux_sym_z_token3] = ACTIONS(39),
    [sym_str] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_104] = ACTIONS(43),
    [anon_sym_105] = ACTIONS(43),
    [anon_sym_106] = ACTIONS(45),
    [anon_sym_107] = ACTIONS(45),
    [anon_sym_108] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [sym_int] = ACTIONS(55),
    [anon_sym_null] = ACTIONS(49),
    [anon_sym_109] = ACTIONS(51),
    [sym_real] = ACTIONS(55),
  },
  [3] = {
    [sym__e] = STATE(3),
    [sym__lit] = STATE(3),
    [sym_mod] = STATE(3),
    [sym_cat] = STATE(3),
    [sym_op] = STATE(3),
    [sym_return] = STATE(3),
    [sym_flow] = STATE(3),
    [sym_key] = STATE(3),
    [sym_prim] = STATE(3),
    [sym_z] = STATE(3),
    [sym_bool] = STATE(3),
    [sym_bt] = STATE(3),
    [sym_char] = STATE(3),
    [sym_null] = STATE(3),
    [aux_sym__repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_id] = ACTIONS(61),
    [anon_sym_public] = ACTIONS(64),
    [anon_sym_internal] = ACTIONS(64),
    [anon_sym_protected] = ACTIONS(64),
    [anon_sym_private] = ACTIONS(64),
    [anon_sym_static] = ACTIONS(64),
    [anon_sym_abstract] = ACTIONS(64),
    [anon_sym_const] = ACTIONS(64),
    [anon_sym_extern] = ACTIONS(64),
    [anon_sym_override] = ACTIONS(64),
    [anon_sym_partial] = ACTIONS(64),
    [anon_sym_readonly] = ACTIONS(64),
    [anon_sym_sealed] = ACTIONS(64),
    [anon_sym_unsafe] = ACTIONS(64),
    [anon_sym_virtual] = ACTIONS(64),
    [anon_sym_volatile] = ACTIONS(64),
    [anon_sym_explicit] = ACTIONS(64),
    [anon_sym_implicit] = ACTIONS(64),
    [anon_sym_] = ACTIONS(67),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym_3] = ACTIONS(67),
    [anon_sym_4] = ACTIONS(64),
    [anon_sym_5] = ACTIONS(67),
    [anon_sym_6] = ACTIONS(67),
    [anon_sym_7] = ACTIONS(67),
    [anon_sym_8] = ACTIONS(64),
    [anon_sym_9] = ACTIONS(67),
    [anon_sym_10] = ACTIONS(64),
    [anon_sym_11] = ACTIONS(67),
    [anon_sym_12] = ACTIONS(64),
    [anon_sym_13] = ACTIONS(67),
    [anon_sym_14] = ACTIONS(64),
    [anon_sym_15] = ACTIONS(67),
    [anon_sym_16] = ACTIONS(64),
    [anon_sym_17] = ACTIONS(67),
    [anon_sym_18] = ACTIONS(64),
    [anon_sym_19] = ACTIONS(67),
    [anon_sym_20] = ACTIONS(64),
    [anon_sym_21] = ACTIONS(67),
    [anon_sym_22] = ACTIONS(67),
    [anon_sym_23] = ACTIONS(64),
    [anon_sym_24] = ACTIONS(67),
    [anon_sym_class] = ACTIONS(70),
    [anon_sym_interface] = ACTIONS(70),
    [anon_sym_struct] = ACTIONS(70),
    [anon_sym_enum] = ACTIONS(70),
    [anon_sym_var] = ACTIONS(70),
    [anon_sym_delegate] = ACTIONS(70),
    [anon_sym_25] = ACTIONS(73),
    [anon_sym_26] = ACTIONS(73),
    [anon_sym_27] = ACTIONS(73),
    [anon_sym_28] = ACTIONS(73),
    [anon_sym_29] = ACTIONS(73),
    [anon_sym_30] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [anon_sym_31] = ACTIONS(76),
    [anon_sym_32] = ACTIONS(76),
    [anon_sym_33] = ACTIONS(76),
    [anon_sym_34] = ACTIONS(76),
    [anon_sym_35] = ACTIONS(76),
    [anon_sym_36] = ACTIONS(76),
    [anon_sym_37] = ACTIONS(76),
    [anon_sym_38] = ACTIONS(76),
    [anon_sym_39] = ACTIONS(76),
    [anon_sym_40] = ACTIONS(76),
    [anon_sym_41] = ACTIONS(76),
    [anon_sym_42] = ACTIONS(79),
    [anon_sym_43] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(82),
    [anon_sym_44] = ACTIONS(85),
    [anon_sym_async] = ACTIONS(88),
    [anon_sym_await] = ACTIONS(88),
    [anon_sym_by] = ACTIONS(88),
    [anon_sym_if] = ACTIONS(88),
    [anon_sym_else] = ACTIONS(88),
    [anon_sym_foreach] = ACTIONS(88),
    [anon_sym_in] = ACTIONS(88),
    [anon_sym_for] = ACTIONS(88),
    [anon_sym_do] = ACTIONS(88),
    [anon_sym_while] = ACTIONS(88),
    [anon_sym_switch] = ACTIONS(88),
    [anon_sym_case] = ACTIONS(88),
    [anon_sym_break] = ACTIONS(88),
    [anon_sym_yield] = ACTIONS(88),
    [anon_sym_try] = ACTIONS(88),
    [anon_sym_catch] = ACTIONS(88),
    [anon_sym_finally] = ACTIONS(88),
    [anon_sym_continue] = ACTIONS(88),
    [anon_sym_from] = ACTIONS(88),
    [anon_sym_where] = ACTIONS(88),
    [anon_sym_select] = ACTIONS(88),
    [anon_sym_throw] = ACTIONS(88),
    [anon_sym_join] = ACTIONS(88),
    [anon_sym_goto] = ACTIONS(88),
    [anon_sym_lock] = ACTIONS(88),
    [anon_sym_orderby] = ACTIONS(88),
    [anon_sym_45] = ACTIONS(91),
    [anon_sym_46] = ACTIONS(91),
    [anon_sym_47] = ACTIONS(91),
    [anon_sym_48] = ACTIONS(91),
    [anon_sym_49] = ACTIONS(91),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(91),
    [anon_sym_50] = ACTIONS(91),
    [anon_sym_51] = ACTIONS(91),
    [anon_sym_52] = ACTIONS(91),
    [anon_sym_53] = ACTIONS(91),
    [anon_sym_54] = ACTIONS(91),
    [anon_sym_55] = ACTIONS(91),
    [anon_sym_56] = ACTIONS(91),
    [anon_sym_57] = ACTIONS(91),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(91),
    [anon_sym_58] = ACTIONS(91),
    [anon_sym_59] = ACTIONS(91),
    [anon_sym_60] = ACTIONS(88),
    [anon_sym_add] = ACTIONS(94),
    [anon_sym_checked] = ACTIONS(94),
    [anon_sym_into] = ACTIONS(94),
    [anon_sym_nameof] = ACTIONS(94),
    [anon_sym_new] = ACTIONS(94),
    [anon_sym_using] = ACTIONS(94),
    [anon_sym_value] = ACTIONS(94),
    [anon_sym_global] = ACTIONS(94),
    [anon_sym_let] = ACTIONS(94),
    [anon_sym_operator] = ACTIONS(94),
    [anon_sym_params] = ACTIONS(94),
    [anon_sym_this] = ACTIONS(94),
    [anon_sym_typeof] = ACTIONS(94),
    [anon_sym_default] = ACTIONS(94),
    [anon_sym_equals] = ACTIONS(94),
    [anon_sym_long] = ACTIONS(94),
    [anon_sym_out] = ACTIONS(94),
    [anon_sym_ref] = ACTIONS(94),
    [anon_sym_sizeof] = ACTIONS(94),
    [anon_sym_descending] = ACTIONS(94),
    [anon_sym_ascending] = ACTIONS(94),
    [anon_sym_dynamic] = ACTIONS(94),
    [anon_sym_fixed] = ACTIONS(94),
    [anon_sym_group] = ACTIONS(94),
    [anon_sym_is] = ACTIONS(94),
    [anon_sym_get] = ACTIONS(94),
    [anon_sym_set] = ACTIONS(94),
    [anon_sym_on] = ACTIONS(94),
    [anon_sym_remove] = ACTIONS(94),
    [anon_sym_stackalloc] = ACTIONS(94),
    [anon_sym_unchecked] = ACTIONS(94),
    [anon_sym_as] = ACTIONS(94),
    [anon_sym_base] = ACTIONS(94),
    [anon_sym_61] = ACTIONS(97),
    [anon_sym_62] = ACTIONS(94),
    [anon_sym_63] = ACTIONS(97),
    [anon_sym_64] = ACTIONS(97),
    [anon_sym_65] = ACTIONS(97),
    [anon_sym_66] = ACTIONS(97),
    [anon_sym_67] = ACTIONS(97),
    [anon_sym_68] = ACTIONS(97),
    [anon_sym_69] = ACTIONS(97),
    [anon_sym_int] = ACTIONS(100),
    [anon_sym_bool] = ACTIONS(100),
    [anon_sym_string] = ACTIONS(100),
    [anon_sym_float] = ACTIONS(100),
    [anon_sym_char] = ACTIONS(100),
    [anon_sym_double] = ACTIONS(100),
    [anon_sym_byte] = ACTIONS(100),
    [anon_sym_decimal] = ACTIONS(100),
    [anon_sym_sbyte] = ACTIONS(100),
    [anon_sym_short] = ACTIONS(100),
    [anon_sym_uint] = ACTIONS(100),
    [anon_sym_ushort] = ACTIONS(100),
    [anon_sym_object] = ACTIONS(100),
    [anon_sym_ulong] = ACTIONS(100),
    [anon_sym_70] = ACTIONS(103),
    [anon_sym_71] = ACTIONS(103),
    [anon_sym_72] = ACTIONS(100),
    [anon_sym_73] = ACTIONS(100),
    [anon_sym_74] = ACTIONS(100),
    [anon_sym_75] = ACTIONS(100),
    [anon_sym_76] = ACTIONS(100),
    [anon_sym_77] = ACTIONS(100),
    [anon_sym_78] = ACTIONS(100),
    [anon_sym_79] = ACTIONS(100),
    [anon_sym_80] = ACTIONS(100),
    [anon_sym_81] = ACTIONS(100),
    [anon_sym_82] = ACTIONS(100),
    [anon_sym_83] = ACTIONS(103),
    [anon_sym_84] = ACTIONS(103),
    [anon_sym_85] = ACTIONS(103),
    [anon_sym_86] = ACTIONS(103),
    [anon_sym_87] = ACTIONS(103),
    [anon_sym_88] = ACTIONS(103),
    [anon_sym_89] = ACTIONS(103),
    [anon_sym_90] = ACTIONS(103),
    [anon_sym_91] = ACTIONS(103),
    [anon_sym_92] = ACTIONS(103),
    [anon_sym_93] = ACTIONS(103),
    [anon_sym_94] = ACTIONS(100),
    [anon_sym_95] = ACTIONS(103),
    [anon_sym_96] = ACTIONS(100),
    [anon_sym_97] = ACTIONS(100),
    [anon_sym_98] = ACTIONS(100),
    [anon_sym_99] = ACTIONS(100),
    [anon_sym_100] = ACTIONS(100),
    [anon_sym_101] = ACTIONS(100),
    [anon_sym_102] = ACTIONS(100),
    [anon_sym_103] = ACTIONS(103),
    [sym_type] = ACTIONS(106),
    [sym_comment] = ACTIONS(106),
    [aux_sym_z_token1] = ACTIONS(109),
    [aux_sym_z_token2] = ACTIONS(109),
    [aux_sym_z_token3] = ACTIONS(112),
    [sym_str] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_104] = ACTIONS(118),
    [anon_sym_105] = ACTIONS(118),
    [anon_sym_106] = ACTIONS(121),
    [anon_sym_107] = ACTIONS(121),
    [anon_sym_108] = ACTIONS(121),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [sym_int] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(127),
    [anon_sym_109] = ACTIONS(130),
    [sym_real] = ACTIONS(61),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_id] = ACTIONS(135),
    [anon_sym_public] = ACTIONS(135),
    [anon_sym_internal] = ACTIONS(135),
    [anon_sym_protected] = ACTIONS(135),
    [anon_sym_private] = ACTIONS(135),
    [anon_sym_static] = ACTIONS(135),
    [anon_sym_abstract] = ACTIONS(135),
    [anon_sym_const] = ACTIONS(135),
    [anon_sym_extern] = ACTIONS(135),
    [anon_sym_override] = ACTIONS(135),
    [anon_sym_partial] = ACTIONS(135),
    [anon_sym_readonly] = ACTIONS(135),
    [anon_sym_sealed] = ACTIONS(135),
    [anon_sym_unsafe] = ACTIONS(135),
    [anon_sym_virtual] = ACTIONS(135),
    [anon_sym_volatile] = ACTIONS(135),
    [anon_sym_explicit] = ACTIONS(135),
    [anon_sym_implicit] = ACTIONS(135),
    [anon_sym_] = ACTIONS(133),
    [anon_sym_2] = ACTIONS(133),
    [anon_sym_3] = ACTIONS(133),
    [anon_sym_4] = ACTIONS(135),
    [anon_sym_5] = ACTIONS(133),
    [anon_sym_6] = ACTIONS(133),
    [anon_sym_7] = ACTIONS(133),
    [anon_sym_8] = ACTIONS(135),
    [anon_sym_9] = ACTIONS(133),
    [anon_sym_10] = ACTIONS(135),
    [anon_sym_11] = ACTIONS(133),
    [anon_sym_12] = ACTIONS(135),
    [anon_sym_13] = ACTIONS(133),
    [anon_sym_14] = ACTIONS(135),
    [anon_sym_15] = ACTIONS(133),
    [anon_sym_16] = ACTIONS(135),
    [anon_sym_17] = ACTIONS(133),
    [anon_sym_18] = ACTIONS(135),
    [anon_sym_19] = ACTIONS(133),
    [anon_sym_20] = ACTIONS(135),
    [anon_sym_21] = ACTIONS(133),
    [anon_sym_22] = ACTIONS(133),
    [anon_sym_23] = ACTIONS(135),
    [anon_sym_24] = ACTIONS(133),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_interface] = ACTIONS(135),
    [anon_sym_struct] = ACTIONS(135),
    [anon_sym_enum] = ACTIONS(135),
    [anon_sym_var] = ACTIONS(135),
    [anon_sym_delegate] = ACTIONS(135),
    [anon_sym_25] = ACTIONS(133),
    [anon_sym_26] = ACTIONS(133),
    [anon_sym_27] = ACTIONS(133),
    [anon_sym_28] = ACTIONS(133),
    [anon_sym_29] = ACTIONS(133),
    [anon_sym_30] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_31] = ACTIONS(133),
    [anon_sym_32] = ACTIONS(133),
    [anon_sym_33] = ACTIONS(133),
    [anon_sym_34] = ACTIONS(133),
    [anon_sym_35] = ACTIONS(133),
    [anon_sym_36] = ACTIONS(133),
    [anon_sym_37] = ACTIONS(133),
    [anon_sym_38] = ACTIONS(133),
    [anon_sym_39] = ACTIONS(133),
    [anon_sym_40] = ACTIONS(133),
    [anon_sym_41] = ACTIONS(133),
    [anon_sym_42] = ACTIONS(135),
    [anon_sym_43] = ACTIONS(135),
    [anon_sym_return] = ACTIONS(135),
    [anon_sym_44] = ACTIONS(133),
    [anon_sym_async] = ACTIONS(135),
    [anon_sym_await] = ACTIONS(135),
    [anon_sym_by] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_else] = ACTIONS(135),
    [anon_sym_foreach] = ACTIONS(135),
    [anon_sym_in] = ACTIONS(135),
    [anon_sym_for] = ACTIONS(135),
    [anon_sym_do] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(135),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_case] = ACTIONS(135),
    [anon_sym_break] = ACTIONS(135),
    [anon_sym_yield] = ACTIONS(135),
    [anon_sym_try] = ACTIONS(135),
    [anon_sym_catch] = ACTIONS(135),
    [anon_sym_finally] = ACTIONS(135),
    [anon_sym_continue] = ACTIONS(135),
    [anon_sym_from] = ACTIONS(135),
    [anon_sym_where] = ACTIONS(135),
    [anon_sym_select] = ACTIONS(135),
    [anon_sym_throw] = ACTIONS(135),
    [anon_sym_join] = ACTIONS(135),
    [anon_sym_goto] = ACTIONS(135),
    [anon_sym_lock] = ACTIONS(135),
    [anon_sym_orderby] = ACTIONS(135),
    [anon_sym_45] = ACTIONS(133),
    [anon_sym_46] = ACTIONS(133),
    [anon_sym_47] = ACTIONS(133),
    [anon_sym_48] = ACTIONS(133),
    [anon_sym_49] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(133),
    [anon_sym_50] = ACTIONS(133),
    [anon_sym_51] = ACTIONS(133),
    [anon_sym_52] = ACTIONS(133),
    [anon_sym_53] = ACTIONS(133),
    [anon_sym_54] = ACTIONS(133),
    [anon_sym_55] = ACTIONS(133),
    [anon_sym_56] = ACTIONS(133),
    [anon_sym_57] = ACTIONS(133),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(133),
    [anon_sym_58] = ACTIONS(133),
    [anon_sym_59] = ACTIONS(133),
    [anon_sym_60] = ACTIONS(135),
    [anon_sym_add] = ACTIONS(135),
    [anon_sym_checked] = ACTIONS(135),
    [anon_sym_into] = ACTIONS(135),
    [anon_sym_nameof] = ACTIONS(135),
    [anon_sym_new] = ACTIONS(135),
    [anon_sym_using] = ACTIONS(135),
    [anon_sym_value] = ACTIONS(135),
    [anon_sym_global] = ACTIONS(135),
    [anon_sym_let] = ACTIONS(135),
    [anon_sym_operator] = ACTIONS(135),
    [anon_sym_params] = ACTIONS(135),
    [anon_sym_this] = ACTIONS(135),
    [anon_sym_typeof] = ACTIONS(135),
    [anon_sym_default] = ACTIONS(135),
    [anon_sym_equals] = ACTIONS(135),
    [anon_sym_long] = ACTIONS(135),
    [anon_sym_out] = ACTIONS(135),
    [anon_sym_ref] = ACTIONS(135),
    [anon_sym_sizeof] = ACTIONS(135),
    [anon_sym_descending] = ACTIONS(135),
    [anon_sym_ascending] = ACTIONS(135),
    [anon_sym_dynamic] = ACTIONS(135),
    [anon_sym_fixed] = ACTIONS(135),
    [anon_sym_group] = ACTIONS(135),
    [anon_sym_is] = ACTIONS(135),
    [anon_sym_get] = ACTIONS(135),
    [anon_sym_set] = ACTIONS(135),
    [anon_sym_on] = ACTIONS(135),
    [anon_sym_remove] = ACTIONS(135),
    [anon_sym_stackalloc] = ACTIONS(135),
    [anon_sym_unchecked] = ACTIONS(135),
    [anon_sym_as] = ACTIONS(135),
    [anon_sym_base] = ACTIONS(135),
    [anon_sym_61] = ACTIONS(133),
    [anon_sym_62] = ACTIONS(135),
    [anon_sym_63] = ACTIONS(133),
    [anon_sym_64] = ACTIONS(133),
    [anon_sym_65] = ACTIONS(133),
    [anon_sym_66] = ACTIONS(133),
    [anon_sym_67] = ACTIONS(133),
    [anon_sym_68] = ACTIONS(133),
    [anon_sym_69] = ACTIONS(133),
    [anon_sym_int] = ACTIONS(135),
    [anon_sym_bool] = ACTIONS(135),
    [anon_sym_string] = ACTIONS(135),
    [anon_sym_float] = ACTIONS(135),
    [anon_sym_char] = ACTIONS(135),
    [anon_sym_double] = ACTIONS(135),
    [anon_sym_byte] = ACTIONS(135),
    [anon_sym_decimal] = ACTIONS(135),
    [anon_sym_sbyte] = ACTIONS(135),
    [anon_sym_short] = ACTIONS(135),
    [anon_sym_uint] = ACTIONS(135),
    [anon_sym_ushort] = ACTIONS(135),
    [anon_sym_object] = ACTIONS(135),
    [anon_sym_ulong] = ACTIONS(135),
    [anon_sym_70] = ACTIONS(133),
    [anon_sym_71] = ACTIONS(133),
    [anon_sym_72] = ACTIONS(135),
    [anon_sym_73] = ACTIONS(135),
    [anon_sym_74] = ACTIONS(135),
    [anon_sym_75] = ACTIONS(135),
    [anon_sym_76] = ACTIONS(135),
    [anon_sym_77] = ACTIONS(135),
    [anon_sym_78] = ACTIONS(135),
    [anon_sym_79] = ACTIONS(135),
    [anon_sym_80] = ACTIONS(135),
    [anon_sym_81] = ACTIONS(135),
    [anon_sym_82] = ACTIONS(135),
    [anon_sym_83] = ACTIONS(133),
    [anon_sym_84] = ACTIONS(133),
    [anon_sym_85] = ACTIONS(133),
    [anon_sym_86] = ACTIONS(133),
    [anon_sym_87] = ACTIONS(133),
    [anon_sym_88] = ACTIONS(133),
    [anon_sym_89] = ACTIONS(133),
    [anon_sym_90] = ACTIONS(133),
    [anon_sym_91] = ACTIONS(133),
    [anon_sym_92] = ACTIONS(133),
    [anon_sym_93] = ACTIONS(133),
    [anon_sym_94] = ACTIONS(135),
    [anon_sym_95] = ACTIONS(133),
    [anon_sym_96] = ACTIONS(135),
    [anon_sym_97] = ACTIONS(135),
    [anon_sym_98] = ACTIONS(135),
    [anon_sym_99] = ACTIONS(135),
    [anon_sym_100] = ACTIONS(135),
    [anon_sym_101] = ACTIONS(135),
    [anon_sym_102] = ACTIONS(135),
    [anon_sym_103] = ACTIONS(133),
    [sym_type] = ACTIONS(133),
    [sym_comment] = ACTIONS(133),
    [aux_sym_z_token1] = ACTIONS(135),
    [aux_sym_z_token2] = ACTIONS(135),
    [aux_sym_z_token3] = ACTIONS(133),
    [sym_str] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_104] = ACTIONS(133),
    [anon_sym_105] = ACTIONS(133),
    [anon_sym_106] = ACTIONS(133),
    [anon_sym_107] = ACTIONS(133),
    [anon_sym_108] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
    [sym_int] = ACTIONS(135),
    [anon_sym_null] = ACTIONS(135),
    [anon_sym_109] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_id] = ACTIONS(139),
    [anon_sym_public] = ACTIONS(139),
    [anon_sym_internal] = ACTIONS(139),
    [anon_sym_protected] = ACTIONS(139),
    [anon_sym_private] = ACTIONS(139),
    [anon_sym_static] = ACTIONS(139),
    [anon_sym_abstract] = ACTIONS(139),
    [anon_sym_const] = ACTIONS(139),
    [anon_sym_extern] = ACTIONS(139),
    [anon_sym_override] = ACTIONS(139),
    [anon_sym_partial] = ACTIONS(139),
    [anon_sym_readonly] = ACTIONS(139),
    [anon_sym_sealed] = ACTIONS(139),
    [anon_sym_unsafe] = ACTIONS(139),
    [anon_sym_virtual] = ACTIONS(139),
    [anon_sym_volatile] = ACTIONS(139),
    [anon_sym_explicit] = ACTIONS(139),
    [anon_sym_implicit] = ACTIONS(139),
    [anon_sym_] = ACTIONS(137),
    [anon_sym_2] = ACTIONS(137),
    [anon_sym_3] = ACTIONS(137),
    [anon_sym_4] = ACTIONS(139),
    [anon_sym_5] = ACTIONS(137),
    [anon_sym_6] = ACTIONS(137),
    [anon_sym_7] = ACTIONS(137),
    [anon_sym_8] = ACTIONS(139),
    [anon_sym_9] = ACTIONS(137),
    [anon_sym_10] = ACTIONS(139),
    [anon_sym_11] = ACTIONS(137),
    [anon_sym_12] = ACTIONS(139),
    [anon_sym_13] = ACTIONS(137),
    [anon_sym_14] = ACTIONS(139),
    [anon_sym_15] = ACTIONS(137),
    [anon_sym_16] = ACTIONS(139),
    [anon_sym_17] = ACTIONS(137),
    [anon_sym_18] = ACTIONS(139),
    [anon_sym_19] = ACTIONS(137),
    [anon_sym_20] = ACTIONS(139),
    [anon_sym_21] = ACTIONS(137),
    [anon_sym_22] = ACTIONS(137),
    [anon_sym_23] = ACTIONS(139),
    [anon_sym_24] = ACTIONS(137),
    [anon_sym_class] = ACTIONS(139),
    [anon_sym_interface] = ACTIONS(139),
    [anon_sym_struct] = ACTIONS(139),
    [anon_sym_enum] = ACTIONS(139),
    [anon_sym_var] = ACTIONS(139),
    [anon_sym_delegate] = ACTIONS(139),
    [anon_sym_25] = ACTIONS(137),
    [anon_sym_26] = ACTIONS(137),
    [anon_sym_27] = ACTIONS(137),
    [anon_sym_28] = ACTIONS(137),
    [anon_sym_29] = ACTIONS(137),
    [anon_sym_30] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_31] = ACTIONS(137),
    [anon_sym_32] = ACTIONS(137),
    [anon_sym_33] = ACTIONS(137),
    [anon_sym_34] = ACTIONS(137),
    [anon_sym_35] = ACTIONS(137),
    [anon_sym_36] = ACTIONS(137),
    [anon_sym_37] = ACTIONS(137),
    [anon_sym_38] = ACTIONS(137),
    [anon_sym_39] = ACTIONS(137),
    [anon_sym_40] = ACTIONS(137),
    [anon_sym_41] = ACTIONS(137),
    [anon_sym_42] = ACTIONS(139),
    [anon_sym_43] = ACTIONS(139),
    [anon_sym_return] = ACTIONS(139),
    [anon_sym_44] = ACTIONS(137),
    [anon_sym_async] = ACTIONS(139),
    [anon_sym_await] = ACTIONS(139),
    [anon_sym_by] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_else] = ACTIONS(139),
    [anon_sym_foreach] = ACTIONS(139),
    [anon_sym_in] = ACTIONS(139),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_do] = ACTIONS(139),
    [anon_sym_while] = ACTIONS(139),
    [anon_sym_switch] = ACTIONS(139),
    [anon_sym_case] = ACTIONS(139),
    [anon_sym_break] = ACTIONS(139),
    [anon_sym_yield] = ACTIONS(139),
    [anon_sym_try] = ACTIONS(139),
    [anon_sym_catch] = ACTIONS(139),
    [anon_sym_finally] = ACTIONS(139),
    [anon_sym_continue] = ACTIONS(139),
    [anon_sym_from] = ACTIONS(139),
    [anon_sym_where] = ACTIONS(139),
    [anon_sym_select] = ACTIONS(139),
    [anon_sym_throw] = ACTIONS(139),
    [anon_sym_join] = ACTIONS(139),
    [anon_sym_goto] = ACTIONS(139),
    [anon_sym_lock] = ACTIONS(139),
    [anon_sym_orderby] = ACTIONS(139),
    [anon_sym_45] = ACTIONS(137),
    [anon_sym_46] = ACTIONS(137),
    [anon_sym_47] = ACTIONS(137),
    [anon_sym_48] = ACTIONS(137),
    [anon_sym_49] = ACTIONS(137),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(137),
    [anon_sym_50] = ACTIONS(137),
    [anon_sym_51] = ACTIONS(137),
    [anon_sym_52] = ACTIONS(137),
    [anon_sym_53] = ACTIONS(137),
    [anon_sym_54] = ACTIONS(137),
    [anon_sym_55] = ACTIONS(137),
    [anon_sym_56] = ACTIONS(137),
    [anon_sym_57] = ACTIONS(137),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(137),
    [anon_sym_58] = ACTIONS(137),
    [anon_sym_59] = ACTIONS(137),
    [anon_sym_60] = ACTIONS(139),
    [anon_sym_add] = ACTIONS(139),
    [anon_sym_checked] = ACTIONS(139),
    [anon_sym_into] = ACTIONS(139),
    [anon_sym_nameof] = ACTIONS(139),
    [anon_sym_new] = ACTIONS(139),
    [anon_sym_using] = ACTIONS(139),
    [anon_sym_value] = ACTIONS(139),
    [anon_sym_global] = ACTIONS(139),
    [anon_sym_let] = ACTIONS(139),
    [anon_sym_operator] = ACTIONS(139),
    [anon_sym_params] = ACTIONS(139),
    [anon_sym_this] = ACTIONS(139),
    [anon_sym_typeof] = ACTIONS(139),
    [anon_sym_default] = ACTIONS(139),
    [anon_sym_equals] = ACTIONS(139),
    [anon_sym_long] = ACTIONS(139),
    [anon_sym_out] = ACTIONS(139),
    [anon_sym_ref] = ACTIONS(139),
    [anon_sym_sizeof] = ACTIONS(139),
    [anon_sym_descending] = ACTIONS(139),
    [anon_sym_ascending] = ACTIONS(139),
    [anon_sym_dynamic] = ACTIONS(139),
    [anon_sym_fixed] = ACTIONS(139),
    [anon_sym_group] = ACTIONS(139),
    [anon_sym_is] = ACTIONS(139),
    [anon_sym_get] = ACTIONS(139),
    [anon_sym_set] = ACTIONS(139),
    [anon_sym_on] = ACTIONS(139),
    [anon_sym_remove] = ACTIONS(139),
    [anon_sym_stackalloc] = ACTIONS(139),
    [anon_sym_unchecked] = ACTIONS(139),
    [anon_sym_as] = ACTIONS(139),
    [anon_sym_base] = ACTIONS(139),
    [anon_sym_61] = ACTIONS(137),
    [anon_sym_62] = ACTIONS(139),
    [anon_sym_63] = ACTIONS(137),
    [anon_sym_64] = ACTIONS(137),
    [anon_sym_65] = ACTIONS(137),
    [anon_sym_66] = ACTIONS(137),
    [anon_sym_67] = ACTIONS(137),
    [anon_sym_68] = ACTIONS(137),
    [anon_sym_69] = ACTIONS(137),
    [anon_sym_int] = ACTIONS(139),
    [anon_sym_bool] = ACTIONS(139),
    [anon_sym_string] = ACTIONS(139),
    [anon_sym_float] = ACTIONS(139),
    [anon_sym_char] = ACTIONS(139),
    [anon_sym_double] = ACTIONS(139),
    [anon_sym_byte] = ACTIONS(139),
    [anon_sym_decimal] = ACTIONS(139),
    [anon_sym_sbyte] = ACTIONS(139),
    [anon_sym_short] = ACTIONS(139),
    [anon_sym_uint] = ACTIONS(139),
    [anon_sym_ushort] = ACTIONS(139),
    [anon_sym_object] = ACTIONS(139),
    [anon_sym_ulong] = ACTIONS(139),
    [anon_sym_70] = ACTIONS(137),
    [anon_sym_71] = ACTIONS(137),
    [anon_sym_72] = ACTIONS(139),
    [anon_sym_73] = ACTIONS(139),
    [anon_sym_74] = ACTIONS(139),
    [anon_sym_75] = ACTIONS(139),
    [anon_sym_76] = ACTIONS(139),
    [anon_sym_77] = ACTIONS(139),
    [anon_sym_78] = ACTIONS(139),
    [anon_sym_79] = ACTIONS(139),
    [anon_sym_80] = ACTIONS(139),
    [anon_sym_81] = ACTIONS(139),
    [anon_sym_82] = ACTIONS(139),
    [anon_sym_83] = ACTIONS(137),
    [anon_sym_84] = ACTIONS(137),
    [anon_sym_85] = ACTIONS(137),
    [anon_sym_86] = ACTIONS(137),
    [anon_sym_87] = ACTIONS(137),
    [anon_sym_88] = ACTIONS(137),
    [anon_sym_89] = ACTIONS(137),
    [anon_sym_90] = ACTIONS(137),
    [anon_sym_91] = ACTIONS(137),
    [anon_sym_92] = ACTIONS(137),
    [anon_sym_93] = ACTIONS(137),
    [anon_sym_94] = ACTIONS(139),
    [anon_sym_95] = ACTIONS(137),
    [anon_sym_96] = ACTIONS(139),
    [anon_sym_97] = ACTIONS(139),
    [anon_sym_98] = ACTIONS(139),
    [anon_sym_99] = ACTIONS(139),
    [anon_sym_100] = ACTIONS(139),
    [anon_sym_101] = ACTIONS(139),
    [anon_sym_102] = ACTIONS(139),
    [anon_sym_103] = ACTIONS(137),
    [sym_type] = ACTIONS(137),
    [sym_comment] = ACTIONS(137),
    [aux_sym_z_token1] = ACTIONS(139),
    [aux_sym_z_token2] = ACTIONS(139),
    [aux_sym_z_token3] = ACTIONS(137),
    [sym_str] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_104] = ACTIONS(137),
    [anon_sym_105] = ACTIONS(137),
    [anon_sym_106] = ACTIONS(137),
    [anon_sym_107] = ACTIONS(137),
    [anon_sym_108] = ACTIONS(137),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [sym_int] = ACTIONS(139),
    [anon_sym_null] = ACTIONS(139),
    [anon_sym_109] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_id] = ACTIONS(143),
    [anon_sym_public] = ACTIONS(143),
    [anon_sym_internal] = ACTIONS(143),
    [anon_sym_protected] = ACTIONS(143),
    [anon_sym_private] = ACTIONS(143),
    [anon_sym_static] = ACTIONS(143),
    [anon_sym_abstract] = ACTIONS(143),
    [anon_sym_const] = ACTIONS(143),
    [anon_sym_extern] = ACTIONS(143),
    [anon_sym_override] = ACTIONS(143),
    [anon_sym_partial] = ACTIONS(143),
    [anon_sym_readonly] = ACTIONS(143),
    [anon_sym_sealed] = ACTIONS(143),
    [anon_sym_unsafe] = ACTIONS(143),
    [anon_sym_virtual] = ACTIONS(143),
    [anon_sym_volatile] = ACTIONS(143),
    [anon_sym_explicit] = ACTIONS(143),
    [anon_sym_implicit] = ACTIONS(143),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym_4] = ACTIONS(143),
    [anon_sym_5] = ACTIONS(141),
    [anon_sym_6] = ACTIONS(141),
    [anon_sym_7] = ACTIONS(141),
    [anon_sym_8] = ACTIONS(143),
    [anon_sym_9] = ACTIONS(141),
    [anon_sym_10] = ACTIONS(143),
    [anon_sym_11] = ACTIONS(141),
    [anon_sym_12] = ACTIONS(143),
    [anon_sym_13] = ACTIONS(141),
    [anon_sym_14] = ACTIONS(143),
    [anon_sym_15] = ACTIONS(141),
    [anon_sym_16] = ACTIONS(143),
    [anon_sym_17] = ACTIONS(141),
    [anon_sym_18] = ACTIONS(143),
    [anon_sym_19] = ACTIONS(141),
    [anon_sym_20] = ACTIONS(143),
    [anon_sym_21] = ACTIONS(141),
    [anon_sym_22] = ACTIONS(141),
    [anon_sym_23] = ACTIONS(143),
    [anon_sym_24] = ACTIONS(141),
    [anon_sym_class] = ACTIONS(143),
    [anon_sym_interface] = ACTIONS(143),
    [anon_sym_struct] = ACTIONS(143),
    [anon_sym_enum] = ACTIONS(143),
    [anon_sym_var] = ACTIONS(143),
    [anon_sym_delegate] = ACTIONS(143),
    [anon_sym_25] = ACTIONS(141),
    [anon_sym_26] = ACTIONS(141),
    [anon_sym_27] = ACTIONS(141),
    [anon_sym_28] = ACTIONS(141),
    [anon_sym_29] = ACTIONS(141),
    [anon_sym_30] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_31] = ACTIONS(141),
    [anon_sym_32] = ACTIONS(141),
    [anon_sym_33] = ACTIONS(141),
    [anon_sym_34] = ACTIONS(141),
    [anon_sym_35] = ACTIONS(141),
    [anon_sym_36] = ACTIONS(141),
    [anon_sym_37] = ACTIONS(141),
    [anon_sym_38] = ACTIONS(141),
    [anon_sym_39] = ACTIONS(141),
    [anon_sym_40] = ACTIONS(141),
    [anon_sym_41] = ACTIONS(141),
    [anon_sym_42] = ACTIONS(143),
    [anon_sym_43] = ACTIONS(143),
    [anon_sym_return] = ACTIONS(143),
    [anon_sym_44] = ACTIONS(141),
    [anon_sym_async] = ACTIONS(143),
    [anon_sym_await] = ACTIONS(143),
    [anon_sym_by] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(143),
    [anon_sym_else] = ACTIONS(143),
    [anon_sym_foreach] = ACTIONS(143),
    [anon_sym_in] = ACTIONS(143),
    [anon_sym_for] = ACTIONS(143),
    [anon_sym_do] = ACTIONS(143),
    [anon_sym_while] = ACTIONS(143),
    [anon_sym_switch] = ACTIONS(143),
    [anon_sym_case] = ACTIONS(143),
    [anon_sym_break] = ACTIONS(143),
    [anon_sym_yield] = ACTIONS(143),
    [anon_sym_try] = ACTIONS(143),
    [anon_sym_catch] = ACTIONS(143),
    [anon_sym_finally] = ACTIONS(143),
    [anon_sym_continue] = ACTIONS(143),
    [anon_sym_from] = ACTIONS(143),
    [anon_sym_where] = ACTIONS(143),
    [anon_sym_select] = ACTIONS(143),
    [anon_sym_throw] = ACTIONS(143),
    [anon_sym_join] = ACTIONS(143),
    [anon_sym_goto] = ACTIONS(143),
    [anon_sym_lock] = ACTIONS(143),
    [anon_sym_orderby] = ACTIONS(143),
    [anon_sym_45] = ACTIONS(141),
    [anon_sym_46] = ACTIONS(141),
    [anon_sym_47] = ACTIONS(141),
    [anon_sym_48] = ACTIONS(141),
    [anon_sym_49] = ACTIONS(141),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(141),
    [anon_sym_50] = ACTIONS(141),
    [anon_sym_51] = ACTIONS(141),
    [anon_sym_52] = ACTIONS(141),
    [anon_sym_53] = ACTIONS(141),
    [anon_sym_54] = ACTIONS(141),
    [anon_sym_55] = ACTIONS(141),
    [anon_sym_56] = ACTIONS(141),
    [anon_sym_57] = ACTIONS(141),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(141),
    [anon_sym_58] = ACTIONS(141),
    [anon_sym_59] = ACTIONS(141),
    [anon_sym_60] = ACTIONS(143),
    [anon_sym_add] = ACTIONS(143),
    [anon_sym_checked] = ACTIONS(143),
    [anon_sym_into] = ACTIONS(143),
    [anon_sym_nameof] = ACTIONS(143),
    [anon_sym_new] = ACTIONS(143),
    [anon_sym_using] = ACTIONS(143),
    [anon_sym_value] = ACTIONS(143),
    [anon_sym_global] = ACTIONS(143),
    [anon_sym_let] = ACTIONS(143),
    [anon_sym_operator] = ACTIONS(143),
    [anon_sym_params] = ACTIONS(143),
    [anon_sym_this] = ACTIONS(143),
    [anon_sym_typeof] = ACTIONS(143),
    [anon_sym_default] = ACTIONS(143),
    [anon_sym_equals] = ACTIONS(143),
    [anon_sym_long] = ACTIONS(143),
    [anon_sym_out] = ACTIONS(143),
    [anon_sym_ref] = ACTIONS(143),
    [anon_sym_sizeof] = ACTIONS(143),
    [anon_sym_descending] = ACTIONS(143),
    [anon_sym_ascending] = ACTIONS(143),
    [anon_sym_dynamic] = ACTIONS(143),
    [anon_sym_fixed] = ACTIONS(143),
    [anon_sym_group] = ACTIONS(143),
    [anon_sym_is] = ACTIONS(143),
    [anon_sym_get] = ACTIONS(143),
    [anon_sym_set] = ACTIONS(143),
    [anon_sym_on] = ACTIONS(143),
    [anon_sym_remove] = ACTIONS(143),
    [anon_sym_stackalloc] = ACTIONS(143),
    [anon_sym_unchecked] = ACTIONS(143),
    [anon_sym_as] = ACTIONS(143),
    [anon_sym_base] = ACTIONS(143),
    [anon_sym_61] = ACTIONS(141),
    [anon_sym_62] = ACTIONS(143),
    [anon_sym_63] = ACTIONS(141),
    [anon_sym_64] = ACTIONS(141),
    [anon_sym_65] = ACTIONS(141),
    [anon_sym_66] = ACTIONS(141),
    [anon_sym_67] = ACTIONS(141),
    [anon_sym_68] = ACTIONS(141),
    [anon_sym_69] = ACTIONS(141),
    [anon_sym_int] = ACTIONS(143),
    [anon_sym_bool] = ACTIONS(143),
    [anon_sym_string] = ACTIONS(143),
    [anon_sym_float] = ACTIONS(143),
    [anon_sym_char] = ACTIONS(143),
    [anon_sym_double] = ACTIONS(143),
    [anon_sym_byte] = ACTIONS(143),
    [anon_sym_decimal] = ACTIONS(143),
    [anon_sym_sbyte] = ACTIONS(143),
    [anon_sym_short] = ACTIONS(143),
    [anon_sym_uint] = ACTIONS(143),
    [anon_sym_ushort] = ACTIONS(143),
    [anon_sym_object] = ACTIONS(143),
    [anon_sym_ulong] = ACTIONS(143),
    [anon_sym_70] = ACTIONS(141),
    [anon_sym_71] = ACTIONS(141),
    [anon_sym_72] = ACTIONS(143),
    [anon_sym_73] = ACTIONS(143),
    [anon_sym_74] = ACTIONS(143),
    [anon_sym_75] = ACTIONS(143),
    [anon_sym_76] = ACTIONS(143),
    [anon_sym_77] = ACTIONS(143),
    [anon_sym_78] = ACTIONS(143),
    [anon_sym_79] = ACTIONS(143),
    [anon_sym_80] = ACTIONS(143),
    [anon_sym_81] = ACTIONS(143),
    [anon_sym_82] = ACTIONS(143),
    [anon_sym_83] = ACTIONS(141),
    [anon_sym_84] = ACTIONS(141),
    [anon_sym_85] = ACTIONS(141),
    [anon_sym_86] = ACTIONS(141),
    [anon_sym_87] = ACTIONS(141),
    [anon_sym_88] = ACTIONS(141),
    [anon_sym_89] = ACTIONS(141),
    [anon_sym_90] = ACTIONS(141),
    [anon_sym_91] = ACTIONS(141),
    [anon_sym_92] = ACTIONS(141),
    [anon_sym_93] = ACTIONS(141),
    [anon_sym_94] = ACTIONS(143),
    [anon_sym_95] = ACTIONS(141),
    [anon_sym_96] = ACTIONS(143),
    [anon_sym_97] = ACTIONS(143),
    [anon_sym_98] = ACTIONS(143),
    [anon_sym_99] = ACTIONS(143),
    [anon_sym_100] = ACTIONS(143),
    [anon_sym_101] = ACTIONS(143),
    [anon_sym_102] = ACTIONS(143),
    [anon_sym_103] = ACTIONS(141),
    [sym_type] = ACTIONS(141),
    [sym_comment] = ACTIONS(141),
    [aux_sym_z_token1] = ACTIONS(143),
    [aux_sym_z_token2] = ACTIONS(143),
    [aux_sym_z_token3] = ACTIONS(141),
    [sym_str] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(143),
    [anon_sym_false] = ACTIONS(143),
    [anon_sym_104] = ACTIONS(141),
    [anon_sym_105] = ACTIONS(141),
    [anon_sym_106] = ACTIONS(141),
    [anon_sym_107] = ACTIONS(141),
    [anon_sym_108] = ACTIONS(141),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [sym_int] = ACTIONS(143),
    [anon_sym_null] = ACTIONS(143),
    [anon_sym_109] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_id] = ACTIONS(147),
    [anon_sym_public] = ACTIONS(147),
    [anon_sym_internal] = ACTIONS(147),
    [anon_sym_protected] = ACTIONS(147),
    [anon_sym_private] = ACTIONS(147),
    [anon_sym_static] = ACTIONS(147),
    [anon_sym_abstract] = ACTIONS(147),
    [anon_sym_const] = ACTIONS(147),
    [anon_sym_extern] = ACTIONS(147),
    [anon_sym_override] = ACTIONS(147),
    [anon_sym_partial] = ACTIONS(147),
    [anon_sym_readonly] = ACTIONS(147),
    [anon_sym_sealed] = ACTIONS(147),
    [anon_sym_unsafe] = ACTIONS(147),
    [anon_sym_virtual] = ACTIONS(147),
    [anon_sym_volatile] = ACTIONS(147),
    [anon_sym_explicit] = ACTIONS(147),
    [anon_sym_implicit] = ACTIONS(147),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [anon_sym_4] = ACTIONS(147),
    [anon_sym_5] = ACTIONS(145),
    [anon_sym_6] = ACTIONS(145),
    [anon_sym_7] = ACTIONS(145),
    [anon_sym_8] = ACTIONS(147),
    [anon_sym_9] = ACTIONS(145),
    [anon_sym_10] = ACTIONS(147),
    [anon_sym_11] = ACTIONS(145),
    [anon_sym_12] = ACTIONS(147),
    [anon_sym_13] = ACTIONS(145),
    [anon_sym_14] = ACTIONS(147),
    [anon_sym_15] = ACTIONS(145),
    [anon_sym_16] = ACTIONS(147),
    [anon_sym_17] = ACTIONS(145),
    [anon_sym_18] = ACTIONS(147),
    [anon_sym_19] = ACTIONS(145),
    [anon_sym_20] = ACTIONS(147),
    [anon_sym_21] = ACTIONS(145),
    [anon_sym_22] = ACTIONS(145),
    [anon_sym_23] = ACTIONS(147),
    [anon_sym_24] = ACTIONS(145),
    [anon_sym_class] = ACTIONS(147),
    [anon_sym_interface] = ACTIONS(147),
    [anon_sym_struct] = ACTIONS(147),
    [anon_sym_enum] = ACTIONS(147),
    [anon_sym_var] = ACTIONS(147),
    [anon_sym_delegate] = ACTIONS(147),
    [anon_sym_25] = ACTIONS(145),
    [anon_sym_26] = ACTIONS(145),
    [anon_sym_27] = ACTIONS(145),
    [anon_sym_28] = ACTIONS(145),
    [anon_sym_29] = ACTIONS(145),
    [anon_sym_30] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_31] = ACTIONS(145),
    [anon_sym_32] = ACTIONS(145),
    [anon_sym_33] = ACTIONS(145),
    [anon_sym_34] = ACTIONS(145),
    [anon_sym_35] = ACTIONS(145),
    [anon_sym_36] = ACTIONS(145),
    [anon_sym_37] = ACTIONS(145),
    [anon_sym_38] = ACTIONS(145),
    [anon_sym_39] = ACTIONS(145),
    [anon_sym_40] = ACTIONS(145),
    [anon_sym_41] = ACTIONS(145),
    [anon_sym_42] = ACTIONS(147),
    [anon_sym_43] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_44] = ACTIONS(145),
    [anon_sym_async] = ACTIONS(147),
    [anon_sym_await] = ACTIONS(147),
    [anon_sym_by] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_foreach] = ACTIONS(147),
    [anon_sym_in] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(147),
    [anon_sym_do] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_switch] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_break] = ACTIONS(147),
    [anon_sym_yield] = ACTIONS(147),
    [anon_sym_try] = ACTIONS(147),
    [anon_sym_catch] = ACTIONS(147),
    [anon_sym_finally] = ACTIONS(147),
    [anon_sym_continue] = ACTIONS(147),
    [anon_sym_from] = ACTIONS(147),
    [anon_sym_where] = ACTIONS(147),
    [anon_sym_select] = ACTIONS(147),
    [anon_sym_throw] = ACTIONS(147),
    [anon_sym_join] = ACTIONS(147),
    [anon_sym_goto] = ACTIONS(147),
    [anon_sym_lock] = ACTIONS(147),
    [anon_sym_orderby] = ACTIONS(147),
    [anon_sym_45] = ACTIONS(145),
    [anon_sym_46] = ACTIONS(145),
    [anon_sym_47] = ACTIONS(145),
    [anon_sym_48] = ACTIONS(145),
    [anon_sym_49] = ACTIONS(145),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(145),
    [anon_sym_50] = ACTIONS(145),
    [anon_sym_51] = ACTIONS(145),
    [anon_sym_52] = ACTIONS(145),
    [anon_sym_53] = ACTIONS(145),
    [anon_sym_54] = ACTIONS(145),
    [anon_sym_55] = ACTIONS(145),
    [anon_sym_56] = ACTIONS(145),
    [anon_sym_57] = ACTIONS(145),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(145),
    [anon_sym_58] = ACTIONS(145),
    [anon_sym_59] = ACTIONS(145),
    [anon_sym_60] = ACTIONS(147),
    [anon_sym_add] = ACTIONS(147),
    [anon_sym_checked] = ACTIONS(147),
    [anon_sym_into] = ACTIONS(147),
    [anon_sym_nameof] = ACTIONS(147),
    [anon_sym_new] = ACTIONS(147),
    [anon_sym_using] = ACTIONS(147),
    [anon_sym_value] = ACTIONS(147),
    [anon_sym_global] = ACTIONS(147),
    [anon_sym_let] = ACTIONS(147),
    [anon_sym_operator] = ACTIONS(147),
    [anon_sym_params] = ACTIONS(147),
    [anon_sym_this] = ACTIONS(147),
    [anon_sym_typeof] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_equals] = ACTIONS(147),
    [anon_sym_long] = ACTIONS(147),
    [anon_sym_out] = ACTIONS(147),
    [anon_sym_ref] = ACTIONS(147),
    [anon_sym_sizeof] = ACTIONS(147),
    [anon_sym_descending] = ACTIONS(147),
    [anon_sym_ascending] = ACTIONS(147),
    [anon_sym_dynamic] = ACTIONS(147),
    [anon_sym_fixed] = ACTIONS(147),
    [anon_sym_group] = ACTIONS(147),
    [anon_sym_is] = ACTIONS(147),
    [anon_sym_get] = ACTIONS(147),
    [anon_sym_set] = ACTIONS(147),
    [anon_sym_on] = ACTIONS(147),
    [anon_sym_remove] = ACTIONS(147),
    [anon_sym_stackalloc] = ACTIONS(147),
    [anon_sym_unchecked] = ACTIONS(147),
    [anon_sym_as] = ACTIONS(147),
    [anon_sym_base] = ACTIONS(147),
    [anon_sym_61] = ACTIONS(145),
    [anon_sym_62] = ACTIONS(147),
    [anon_sym_63] = ACTIONS(145),
    [anon_sym_64] = ACTIONS(145),
    [anon_sym_65] = ACTIONS(145),
    [anon_sym_66] = ACTIONS(145),
    [anon_sym_67] = ACTIONS(145),
    [anon_sym_68] = ACTIONS(145),
    [anon_sym_69] = ACTIONS(145),
    [anon_sym_int] = ACTIONS(147),
    [anon_sym_bool] = ACTIONS(147),
    [anon_sym_string] = ACTIONS(147),
    [anon_sym_float] = ACTIONS(147),
    [anon_sym_char] = ACTIONS(147),
    [anon_sym_double] = ACTIONS(147),
    [anon_sym_byte] = ACTIONS(147),
    [anon_sym_decimal] = ACTIONS(147),
    [anon_sym_sbyte] = ACTIONS(147),
    [anon_sym_short] = ACTIONS(147),
    [anon_sym_uint] = ACTIONS(147),
    [anon_sym_ushort] = ACTIONS(147),
    [anon_sym_object] = ACTIONS(147),
    [anon_sym_ulong] = ACTIONS(147),
    [anon_sym_70] = ACTIONS(145),
    [anon_sym_71] = ACTIONS(145),
    [anon_sym_72] = ACTIONS(147),
    [anon_sym_73] = ACTIONS(147),
    [anon_sym_74] = ACTIONS(147),
    [anon_sym_75] = ACTIONS(147),
    [anon_sym_76] = ACTIONS(147),
    [anon_sym_77] = ACTIONS(147),
    [anon_sym_78] = ACTIONS(147),
    [anon_sym_79] = ACTIONS(147),
    [anon_sym_80] = ACTIONS(147),
    [anon_sym_81] = ACTIONS(147),
    [anon_sym_82] = ACTIONS(147),
    [anon_sym_83] = ACTIONS(145),
    [anon_sym_84] = ACTIONS(145),
    [anon_sym_85] = ACTIONS(145),
    [anon_sym_86] = ACTIONS(145),
    [anon_sym_87] = ACTIONS(145),
    [anon_sym_88] = ACTIONS(145),
    [anon_sym_89] = ACTIONS(145),
    [anon_sym_90] = ACTIONS(145),
    [anon_sym_91] = ACTIONS(145),
    [anon_sym_92] = ACTIONS(145),
    [anon_sym_93] = ACTIONS(145),
    [anon_sym_94] = ACTIONS(147),
    [anon_sym_95] = ACTIONS(145),
    [anon_sym_96] = ACTIONS(147),
    [anon_sym_97] = ACTIONS(147),
    [anon_sym_98] = ACTIONS(147),
    [anon_sym_99] = ACTIONS(147),
    [anon_sym_100] = ACTIONS(147),
    [anon_sym_101] = ACTIONS(147),
    [anon_sym_102] = ACTIONS(147),
    [anon_sym_103] = ACTIONS(145),
    [sym_type] = ACTIONS(145),
    [sym_comment] = ACTIONS(145),
    [aux_sym_z_token1] = ACTIONS(147),
    [aux_sym_z_token2] = ACTIONS(147),
    [aux_sym_z_token3] = ACTIONS(145),
    [sym_str] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_104] = ACTIONS(145),
    [anon_sym_105] = ACTIONS(145),
    [anon_sym_106] = ACTIONS(145),
    [anon_sym_107] = ACTIONS(145),
    [anon_sym_108] = ACTIONS(145),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_int] = ACTIONS(147),
    [anon_sym_null] = ACTIONS(147),
    [anon_sym_109] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_id] = ACTIONS(151),
    [anon_sym_public] = ACTIONS(151),
    [anon_sym_internal] = ACTIONS(151),
    [anon_sym_protected] = ACTIONS(151),
    [anon_sym_private] = ACTIONS(151),
    [anon_sym_static] = ACTIONS(151),
    [anon_sym_abstract] = ACTIONS(151),
    [anon_sym_const] = ACTIONS(151),
    [anon_sym_extern] = ACTIONS(151),
    [anon_sym_override] = ACTIONS(151),
    [anon_sym_partial] = ACTIONS(151),
    [anon_sym_readonly] = ACTIONS(151),
    [anon_sym_sealed] = ACTIONS(151),
    [anon_sym_unsafe] = ACTIONS(151),
    [anon_sym_virtual] = ACTIONS(151),
    [anon_sym_volatile] = ACTIONS(151),
    [anon_sym_explicit] = ACTIONS(151),
    [anon_sym_implicit] = ACTIONS(151),
    [anon_sym_] = ACTIONS(149),
    [anon_sym_2] = ACTIONS(149),
    [anon_sym_3] = ACTIONS(149),
    [anon_sym_4] = ACTIONS(151),
    [anon_sym_5] = ACTIONS(149),
    [anon_sym_6] = ACTIONS(149),
    [anon_sym_7] = ACTIONS(149),
    [anon_sym_8] = ACTIONS(151),
    [anon_sym_9] = ACTIONS(149),
    [anon_sym_10] = ACTIONS(151),
    [anon_sym_11] = ACTIONS(149),
    [anon_sym_12] = ACTIONS(151),
    [anon_sym_13] = ACTIONS(149),
    [anon_sym_14] = ACTIONS(151),
    [anon_sym_15] = ACTIONS(149),
    [anon_sym_16] = ACTIONS(151),
    [anon_sym_17] = ACTIONS(149),
    [anon_sym_18] = ACTIONS(151),
    [anon_sym_19] = ACTIONS(149),
    [anon_sym_20] = ACTIONS(151),
    [anon_sym_21] = ACTIONS(149),
    [anon_sym_22] = ACTIONS(149),
    [anon_sym_23] = ACTIONS(151),
    [anon_sym_24] = ACTIONS(149),
    [anon_sym_class] = ACTIONS(151),
    [anon_sym_interface] = ACTIONS(151),
    [anon_sym_struct] = ACTIONS(151),
    [anon_sym_enum] = ACTIONS(151),
    [anon_sym_var] = ACTIONS(151),
    [anon_sym_delegate] = ACTIONS(151),
    [anon_sym_25] = ACTIONS(149),
    [anon_sym_26] = ACTIONS(149),
    [anon_sym_27] = ACTIONS(149),
    [anon_sym_28] = ACTIONS(149),
    [anon_sym_29] = ACTIONS(149),
    [anon_sym_30] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_31] = ACTIONS(149),
    [anon_sym_32] = ACTIONS(149),
    [anon_sym_33] = ACTIONS(149),
    [anon_sym_34] = ACTIONS(149),
    [anon_sym_35] = ACTIONS(149),
    [anon_sym_36] = ACTIONS(149),
    [anon_sym_37] = ACTIONS(149),
    [anon_sym_38] = ACTIONS(149),
    [anon_sym_39] = ACTIONS(149),
    [anon_sym_40] = ACTIONS(149),
    [anon_sym_41] = ACTIONS(149),
    [anon_sym_42] = ACTIONS(151),
    [anon_sym_43] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(151),
    [anon_sym_44] = ACTIONS(149),
    [anon_sym_async] = ACTIONS(151),
    [anon_sym_await] = ACTIONS(151),
    [anon_sym_by] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_foreach] = ACTIONS(151),
    [anon_sym_in] = ACTIONS(151),
    [anon_sym_for] = ACTIONS(151),
    [anon_sym_do] = ACTIONS(151),
    [anon_sym_while] = ACTIONS(151),
    [anon_sym_switch] = ACTIONS(151),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_break] = ACTIONS(151),
    [anon_sym_yield] = ACTIONS(151),
    [anon_sym_try] = ACTIONS(151),
    [anon_sym_catch] = ACTIONS(151),
    [anon_sym_finally] = ACTIONS(151),
    [anon_sym_continue] = ACTIONS(151),
    [anon_sym_from] = ACTIONS(151),
    [anon_sym_where] = ACTIONS(151),
    [anon_sym_select] = ACTIONS(151),
    [anon_sym_throw] = ACTIONS(151),
    [anon_sym_join] = ACTIONS(151),
    [anon_sym_goto] = ACTIONS(151),
    [anon_sym_lock] = ACTIONS(151),
    [anon_sym_orderby] = ACTIONS(151),
    [anon_sym_45] = ACTIONS(149),
    [anon_sym_46] = ACTIONS(149),
    [anon_sym_47] = ACTIONS(149),
    [anon_sym_48] = ACTIONS(149),
    [anon_sym_49] = ACTIONS(149),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(149),
    [anon_sym_50] = ACTIONS(149),
    [anon_sym_51] = ACTIONS(149),
    [anon_sym_52] = ACTIONS(149),
    [anon_sym_53] = ACTIONS(149),
    [anon_sym_54] = ACTIONS(149),
    [anon_sym_55] = ACTIONS(149),
    [anon_sym_56] = ACTIONS(149),
    [anon_sym_57] = ACTIONS(149),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(149),
    [anon_sym_58] = ACTIONS(149),
    [anon_sym_59] = ACTIONS(149),
    [anon_sym_60] = ACTIONS(151),
    [anon_sym_add] = ACTIONS(151),
    [anon_sym_checked] = ACTIONS(151),
    [anon_sym_into] = ACTIONS(151),
    [anon_sym_nameof] = ACTIONS(151),
    [anon_sym_new] = ACTIONS(151),
    [anon_sym_using] = ACTIONS(151),
    [anon_sym_value] = ACTIONS(151),
    [anon_sym_global] = ACTIONS(151),
    [anon_sym_let] = ACTIONS(151),
    [anon_sym_operator] = ACTIONS(151),
    [anon_sym_params] = ACTIONS(151),
    [anon_sym_this] = ACTIONS(151),
    [anon_sym_typeof] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_equals] = ACTIONS(151),
    [anon_sym_long] = ACTIONS(151),
    [anon_sym_out] = ACTIONS(151),
    [anon_sym_ref] = ACTIONS(151),
    [anon_sym_sizeof] = ACTIONS(151),
    [anon_sym_descending] = ACTIONS(151),
    [anon_sym_ascending] = ACTIONS(151),
    [anon_sym_dynamic] = ACTIONS(151),
    [anon_sym_fixed] = ACTIONS(151),
    [anon_sym_group] = ACTIONS(151),
    [anon_sym_is] = ACTIONS(151),
    [anon_sym_get] = ACTIONS(151),
    [anon_sym_set] = ACTIONS(151),
    [anon_sym_on] = ACTIONS(151),
    [anon_sym_remove] = ACTIONS(151),
    [anon_sym_stackalloc] = ACTIONS(151),
    [anon_sym_unchecked] = ACTIONS(151),
    [anon_sym_as] = ACTIONS(151),
    [anon_sym_base] = ACTIONS(151),
    [anon_sym_61] = ACTIONS(149),
    [anon_sym_62] = ACTIONS(151),
    [anon_sym_63] = ACTIONS(149),
    [anon_sym_64] = ACTIONS(149),
    [anon_sym_65] = ACTIONS(149),
    [anon_sym_66] = ACTIONS(149),
    [anon_sym_67] = ACTIONS(149),
    [anon_sym_68] = ACTIONS(149),
    [anon_sym_69] = ACTIONS(149),
    [anon_sym_int] = ACTIONS(151),
    [anon_sym_bool] = ACTIONS(151),
    [anon_sym_string] = ACTIONS(151),
    [anon_sym_float] = ACTIONS(151),
    [anon_sym_char] = ACTIONS(151),
    [anon_sym_double] = ACTIONS(151),
    [anon_sym_byte] = ACTIONS(151),
    [anon_sym_decimal] = ACTIONS(151),
    [anon_sym_sbyte] = ACTIONS(151),
    [anon_sym_short] = ACTIONS(151),
    [anon_sym_uint] = ACTIONS(151),
    [anon_sym_ushort] = ACTIONS(151),
    [anon_sym_object] = ACTIONS(151),
    [anon_sym_ulong] = ACTIONS(151),
    [anon_sym_70] = ACTIONS(149),
    [anon_sym_71] = ACTIONS(149),
    [anon_sym_72] = ACTIONS(151),
    [anon_sym_73] = ACTIONS(151),
    [anon_sym_74] = ACTIONS(151),
    [anon_sym_75] = ACTIONS(151),
    [anon_sym_76] = ACTIONS(151),
    [anon_sym_77] = ACTIONS(151),
    [anon_sym_78] = ACTIONS(151),
    [anon_sym_79] = ACTIONS(151),
    [anon_sym_80] = ACTIONS(151),
    [anon_sym_81] = ACTIONS(151),
    [anon_sym_82] = ACTIONS(151),
    [anon_sym_83] = ACTIONS(149),
    [anon_sym_84] = ACTIONS(149),
    [anon_sym_85] = ACTIONS(149),
    [anon_sym_86] = ACTIONS(149),
    [anon_sym_87] = ACTIONS(149),
    [anon_sym_88] = ACTIONS(149),
    [anon_sym_89] = ACTIONS(149),
    [anon_sym_90] = ACTIONS(149),
    [anon_sym_91] = ACTIONS(149),
    [anon_sym_92] = ACTIONS(149),
    [anon_sym_93] = ACTIONS(149),
    [anon_sym_94] = ACTIONS(151),
    [anon_sym_95] = ACTIONS(149),
    [anon_sym_96] = ACTIONS(151),
    [anon_sym_97] = ACTIONS(151),
    [anon_sym_98] = ACTIONS(151),
    [anon_sym_99] = ACTIONS(151),
    [anon_sym_100] = ACTIONS(151),
    [anon_sym_101] = ACTIONS(151),
    [anon_sym_102] = ACTIONS(151),
    [anon_sym_103] = ACTIONS(149),
    [sym_type] = ACTIONS(149),
    [sym_comment] = ACTIONS(149),
    [aux_sym_z_token1] = ACTIONS(151),
    [aux_sym_z_token2] = ACTIONS(151),
    [aux_sym_z_token3] = ACTIONS(149),
    [sym_str] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_104] = ACTIONS(149),
    [anon_sym_105] = ACTIONS(149),
    [anon_sym_106] = ACTIONS(149),
    [anon_sym_107] = ACTIONS(149),
    [anon_sym_108] = ACTIONS(149),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_int] = ACTIONS(151),
    [anon_sym_null] = ACTIONS(151),
    [anon_sym_109] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_id] = ACTIONS(155),
    [anon_sym_public] = ACTIONS(155),
    [anon_sym_internal] = ACTIONS(155),
    [anon_sym_protected] = ACTIONS(155),
    [anon_sym_private] = ACTIONS(155),
    [anon_sym_static] = ACTIONS(155),
    [anon_sym_abstract] = ACTIONS(155),
    [anon_sym_const] = ACTIONS(155),
    [anon_sym_extern] = ACTIONS(155),
    [anon_sym_override] = ACTIONS(155),
    [anon_sym_partial] = ACTIONS(155),
    [anon_sym_readonly] = ACTIONS(155),
    [anon_sym_sealed] = ACTIONS(155),
    [anon_sym_unsafe] = ACTIONS(155),
    [anon_sym_virtual] = ACTIONS(155),
    [anon_sym_volatile] = ACTIONS(155),
    [anon_sym_explicit] = ACTIONS(155),
    [anon_sym_implicit] = ACTIONS(155),
    [anon_sym_] = ACTIONS(153),
    [anon_sym_2] = ACTIONS(153),
    [anon_sym_3] = ACTIONS(153),
    [anon_sym_4] = ACTIONS(155),
    [anon_sym_5] = ACTIONS(153),
    [anon_sym_6] = ACTIONS(153),
    [anon_sym_7] = ACTIONS(153),
    [anon_sym_8] = ACTIONS(155),
    [anon_sym_9] = ACTIONS(153),
    [anon_sym_10] = ACTIONS(155),
    [anon_sym_11] = ACTIONS(153),
    [anon_sym_12] = ACTIONS(155),
    [anon_sym_13] = ACTIONS(153),
    [anon_sym_14] = ACTIONS(155),
    [anon_sym_15] = ACTIONS(153),
    [anon_sym_16] = ACTIONS(155),
    [anon_sym_17] = ACTIONS(153),
    [anon_sym_18] = ACTIONS(155),
    [anon_sym_19] = ACTIONS(153),
    [anon_sym_20] = ACTIONS(155),
    [anon_sym_21] = ACTIONS(153),
    [anon_sym_22] = ACTIONS(153),
    [anon_sym_23] = ACTIONS(155),
    [anon_sym_24] = ACTIONS(153),
    [anon_sym_class] = ACTIONS(155),
    [anon_sym_interface] = ACTIONS(155),
    [anon_sym_struct] = ACTIONS(155),
    [anon_sym_enum] = ACTIONS(155),
    [anon_sym_var] = ACTIONS(155),
    [anon_sym_delegate] = ACTIONS(155),
    [anon_sym_25] = ACTIONS(153),
    [anon_sym_26] = ACTIONS(153),
    [anon_sym_27] = ACTIONS(153),
    [anon_sym_28] = ACTIONS(153),
    [anon_sym_29] = ACTIONS(153),
    [anon_sym_30] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_31] = ACTIONS(153),
    [anon_sym_32] = ACTIONS(153),
    [anon_sym_33] = ACTIONS(153),
    [anon_sym_34] = ACTIONS(153),
    [anon_sym_35] = ACTIONS(153),
    [anon_sym_36] = ACTIONS(153),
    [anon_sym_37] = ACTIONS(153),
    [anon_sym_38] = ACTIONS(153),
    [anon_sym_39] = ACTIONS(153),
    [anon_sym_40] = ACTIONS(153),
    [anon_sym_41] = ACTIONS(153),
    [anon_sym_42] = ACTIONS(155),
    [anon_sym_43] = ACTIONS(155),
    [anon_sym_return] = ACTIONS(155),
    [anon_sym_44] = ACTIONS(153),
    [anon_sym_async] = ACTIONS(155),
    [anon_sym_await] = ACTIONS(155),
    [anon_sym_by] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(155),
    [anon_sym_else] = ACTIONS(155),
    [anon_sym_foreach] = ACTIONS(155),
    [anon_sym_in] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(155),
    [anon_sym_do] = ACTIONS(155),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_switch] = ACTIONS(155),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_break] = ACTIONS(155),
    [anon_sym_yield] = ACTIONS(155),
    [anon_sym_try] = ACTIONS(155),
    [anon_sym_catch] = ACTIONS(155),
    [anon_sym_finally] = ACTIONS(155),
    [anon_sym_continue] = ACTIONS(155),
    [anon_sym_from] = ACTIONS(155),
    [anon_sym_where] = ACTIONS(155),
    [anon_sym_select] = ACTIONS(155),
    [anon_sym_throw] = ACTIONS(155),
    [anon_sym_join] = ACTIONS(155),
    [anon_sym_goto] = ACTIONS(155),
    [anon_sym_lock] = ACTIONS(155),
    [anon_sym_orderby] = ACTIONS(155),
    [anon_sym_45] = ACTIONS(153),
    [anon_sym_46] = ACTIONS(153),
    [anon_sym_47] = ACTIONS(153),
    [anon_sym_48] = ACTIONS(153),
    [anon_sym_49] = ACTIONS(153),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(153),
    [anon_sym_50] = ACTIONS(153),
    [anon_sym_51] = ACTIONS(153),
    [anon_sym_52] = ACTIONS(153),
    [anon_sym_53] = ACTIONS(153),
    [anon_sym_54] = ACTIONS(153),
    [anon_sym_55] = ACTIONS(153),
    [anon_sym_56] = ACTIONS(153),
    [anon_sym_57] = ACTIONS(153),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(153),
    [anon_sym_58] = ACTIONS(153),
    [anon_sym_59] = ACTIONS(153),
    [anon_sym_60] = ACTIONS(155),
    [anon_sym_add] = ACTIONS(155),
    [anon_sym_checked] = ACTIONS(155),
    [anon_sym_into] = ACTIONS(155),
    [anon_sym_nameof] = ACTIONS(155),
    [anon_sym_new] = ACTIONS(155),
    [anon_sym_using] = ACTIONS(155),
    [anon_sym_value] = ACTIONS(155),
    [anon_sym_global] = ACTIONS(155),
    [anon_sym_let] = ACTIONS(155),
    [anon_sym_operator] = ACTIONS(155),
    [anon_sym_params] = ACTIONS(155),
    [anon_sym_this] = ACTIONS(155),
    [anon_sym_typeof] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_equals] = ACTIONS(155),
    [anon_sym_long] = ACTIONS(155),
    [anon_sym_out] = ACTIONS(155),
    [anon_sym_ref] = ACTIONS(155),
    [anon_sym_sizeof] = ACTIONS(155),
    [anon_sym_descending] = ACTIONS(155),
    [anon_sym_ascending] = ACTIONS(155),
    [anon_sym_dynamic] = ACTIONS(155),
    [anon_sym_fixed] = ACTIONS(155),
    [anon_sym_group] = ACTIONS(155),
    [anon_sym_is] = ACTIONS(155),
    [anon_sym_get] = ACTIONS(155),
    [anon_sym_set] = ACTIONS(155),
    [anon_sym_on] = ACTIONS(155),
    [anon_sym_remove] = ACTIONS(155),
    [anon_sym_stackalloc] = ACTIONS(155),
    [anon_sym_unchecked] = ACTIONS(155),
    [anon_sym_as] = ACTIONS(155),
    [anon_sym_base] = ACTIONS(155),
    [anon_sym_61] = ACTIONS(153),
    [anon_sym_62] = ACTIONS(155),
    [anon_sym_63] = ACTIONS(153),
    [anon_sym_64] = ACTIONS(153),
    [anon_sym_65] = ACTIONS(153),
    [anon_sym_66] = ACTIONS(153),
    [anon_sym_67] = ACTIONS(153),
    [anon_sym_68] = ACTIONS(153),
    [anon_sym_69] = ACTIONS(153),
    [anon_sym_int] = ACTIONS(155),
    [anon_sym_bool] = ACTIONS(155),
    [anon_sym_string] = ACTIONS(155),
    [anon_sym_float] = ACTIONS(155),
    [anon_sym_char] = ACTIONS(155),
    [anon_sym_double] = ACTIONS(155),
    [anon_sym_byte] = ACTIONS(155),
    [anon_sym_decimal] = ACTIONS(155),
    [anon_sym_sbyte] = ACTIONS(155),
    [anon_sym_short] = ACTIONS(155),
    [anon_sym_uint] = ACTIONS(155),
    [anon_sym_ushort] = ACTIONS(155),
    [anon_sym_object] = ACTIONS(155),
    [anon_sym_ulong] = ACTIONS(155),
    [anon_sym_70] = ACTIONS(153),
    [anon_sym_71] = ACTIONS(153),
    [anon_sym_72] = ACTIONS(155),
    [anon_sym_73] = ACTIONS(155),
    [anon_sym_74] = ACTIONS(155),
    [anon_sym_75] = ACTIONS(155),
    [anon_sym_76] = ACTIONS(155),
    [anon_sym_77] = ACTIONS(155),
    [anon_sym_78] = ACTIONS(155),
    [anon_sym_79] = ACTIONS(155),
    [anon_sym_80] = ACTIONS(155),
    [anon_sym_81] = ACTIONS(155),
    [anon_sym_82] = ACTIONS(155),
    [anon_sym_83] = ACTIONS(153),
    [anon_sym_84] = ACTIONS(153),
    [anon_sym_85] = ACTIONS(153),
    [anon_sym_86] = ACTIONS(153),
    [anon_sym_87] = ACTIONS(153),
    [anon_sym_88] = ACTIONS(153),
    [anon_sym_89] = ACTIONS(153),
    [anon_sym_90] = ACTIONS(153),
    [anon_sym_91] = ACTIONS(153),
    [anon_sym_92] = ACTIONS(153),
    [anon_sym_93] = ACTIONS(153),
    [anon_sym_94] = ACTIONS(155),
    [anon_sym_95] = ACTIONS(153),
    [anon_sym_96] = ACTIONS(155),
    [anon_sym_97] = ACTIONS(155),
    [anon_sym_98] = ACTIONS(155),
    [anon_sym_99] = ACTIONS(155),
    [anon_sym_100] = ACTIONS(155),
    [anon_sym_101] = ACTIONS(155),
    [anon_sym_102] = ACTIONS(155),
    [anon_sym_103] = ACTIONS(153),
    [sym_type] = ACTIONS(153),
    [sym_comment] = ACTIONS(153),
    [aux_sym_z_token1] = ACTIONS(155),
    [aux_sym_z_token2] = ACTIONS(155),
    [aux_sym_z_token3] = ACTIONS(153),
    [sym_str] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(155),
    [anon_sym_false] = ACTIONS(155),
    [anon_sym_104] = ACTIONS(153),
    [anon_sym_105] = ACTIONS(153),
    [anon_sym_106] = ACTIONS(153),
    [anon_sym_107] = ACTIONS(153),
    [anon_sym_108] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(153),
    [sym_int] = ACTIONS(155),
    [anon_sym_null] = ACTIONS(155),
    [anon_sym_109] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [sym_id] = ACTIONS(159),
    [anon_sym_public] = ACTIONS(159),
    [anon_sym_internal] = ACTIONS(159),
    [anon_sym_protected] = ACTIONS(159),
    [anon_sym_private] = ACTIONS(159),
    [anon_sym_static] = ACTIONS(159),
    [anon_sym_abstract] = ACTIONS(159),
    [anon_sym_const] = ACTIONS(159),
    [anon_sym_extern] = ACTIONS(159),
    [anon_sym_override] = ACTIONS(159),
    [anon_sym_partial] = ACTIONS(159),
    [anon_sym_readonly] = ACTIONS(159),
    [anon_sym_sealed] = ACTIONS(159),
    [anon_sym_unsafe] = ACTIONS(159),
    [anon_sym_virtual] = ACTIONS(159),
    [anon_sym_volatile] = ACTIONS(159),
    [anon_sym_explicit] = ACTIONS(159),
    [anon_sym_implicit] = ACTIONS(159),
    [anon_sym_] = ACTIONS(157),
    [anon_sym_2] = ACTIONS(157),
    [anon_sym_3] = ACTIONS(157),
    [anon_sym_4] = ACTIONS(159),
    [anon_sym_5] = ACTIONS(157),
    [anon_sym_6] = ACTIONS(157),
    [anon_sym_7] = ACTIONS(157),
    [anon_sym_8] = ACTIONS(159),
    [anon_sym_9] = ACTIONS(157),
    [anon_sym_10] = ACTIONS(159),
    [anon_sym_11] = ACTIONS(157),
    [anon_sym_12] = ACTIONS(159),
    [anon_sym_13] = ACTIONS(157),
    [anon_sym_14] = ACTIONS(159),
    [anon_sym_15] = ACTIONS(157),
    [anon_sym_16] = ACTIONS(159),
    [anon_sym_17] = ACTIONS(157),
    [anon_sym_18] = ACTIONS(159),
    [anon_sym_19] = ACTIONS(157),
    [anon_sym_20] = ACTIONS(159),
    [anon_sym_21] = ACTIONS(157),
    [anon_sym_22] = ACTIONS(157),
    [anon_sym_23] = ACTIONS(159),
    [anon_sym_24] = ACTIONS(157),
    [anon_sym_class] = ACTIONS(159),
    [anon_sym_interface] = ACTIONS(159),
    [anon_sym_struct] = ACTIONS(159),
    [anon_sym_enum] = ACTIONS(159),
    [anon_sym_var] = ACTIONS(159),
    [anon_sym_delegate] = ACTIONS(159),
    [anon_sym_25] = ACTIONS(157),
    [anon_sym_26] = ACTIONS(157),
    [anon_sym_27] = ACTIONS(157),
    [anon_sym_28] = ACTIONS(157),
    [anon_sym_29] = ACTIONS(157),
    [anon_sym_30] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_31] = ACTIONS(157),
    [anon_sym_32] = ACTIONS(157),
    [anon_sym_33] = ACTIONS(157),
    [anon_sym_34] = ACTIONS(157),
    [anon_sym_35] = ACTIONS(157),
    [anon_sym_36] = ACTIONS(157),
    [anon_sym_37] = ACTIONS(157),
    [anon_sym_38] = ACTIONS(157),
    [anon_sym_39] = ACTIONS(157),
    [anon_sym_40] = ACTIONS(157),
    [anon_sym_41] = ACTIONS(157),
    [anon_sym_42] = ACTIONS(159),
    [anon_sym_43] = ACTIONS(159),
    [anon_sym_return] = ACTIONS(159),
    [anon_sym_44] = ACTIONS(157),
    [anon_sym_async] = ACTIONS(159),
    [anon_sym_await] = ACTIONS(159),
    [anon_sym_by] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(159),
    [anon_sym_else] = ACTIONS(159),
    [anon_sym_foreach] = ACTIONS(159),
    [anon_sym_in] = ACTIONS(159),
    [anon_sym_for] = ACTIONS(159),
    [anon_sym_do] = ACTIONS(159),
    [anon_sym_while] = ACTIONS(159),
    [anon_sym_switch] = ACTIONS(159),
    [anon_sym_case] = ACTIONS(159),
    [anon_sym_break] = ACTIONS(159),
    [anon_sym_yield] = ACTIONS(159),
    [anon_sym_try] = ACTIONS(159),
    [anon_sym_catch] = ACTIONS(159),
    [anon_sym_finally] = ACTIONS(159),
    [anon_sym_continue] = ACTIONS(159),
    [anon_sym_from] = ACTIONS(159),
    [anon_sym_where] = ACTIONS(159),
    [anon_sym_select] = ACTIONS(159),
    [anon_sym_throw] = ACTIONS(159),
    [anon_sym_join] = ACTIONS(159),
    [anon_sym_goto] = ACTIONS(159),
    [anon_sym_lock] = ACTIONS(159),
    [anon_sym_orderby] = ACTIONS(159),
    [anon_sym_45] = ACTIONS(157),
    [anon_sym_46] = ACTIONS(157),
    [anon_sym_47] = ACTIONS(157),
    [anon_sym_48] = ACTIONS(157),
    [anon_sym_49] = ACTIONS(157),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(157),
    [anon_sym_50] = ACTIONS(157),
    [anon_sym_51] = ACTIONS(157),
    [anon_sym_52] = ACTIONS(157),
    [anon_sym_53] = ACTIONS(157),
    [anon_sym_54] = ACTIONS(157),
    [anon_sym_55] = ACTIONS(157),
    [anon_sym_56] = ACTIONS(157),
    [anon_sym_57] = ACTIONS(157),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(157),
    [anon_sym_58] = ACTIONS(157),
    [anon_sym_59] = ACTIONS(157),
    [anon_sym_60] = ACTIONS(159),
    [anon_sym_add] = ACTIONS(159),
    [anon_sym_checked] = ACTIONS(159),
    [anon_sym_into] = ACTIONS(159),
    [anon_sym_nameof] = ACTIONS(159),
    [anon_sym_new] = ACTIONS(159),
    [anon_sym_using] = ACTIONS(159),
    [anon_sym_value] = ACTIONS(159),
    [anon_sym_global] = ACTIONS(159),
    [anon_sym_let] = ACTIONS(159),
    [anon_sym_operator] = ACTIONS(159),
    [anon_sym_params] = ACTIONS(159),
    [anon_sym_this] = ACTIONS(159),
    [anon_sym_typeof] = ACTIONS(159),
    [anon_sym_default] = ACTIONS(159),
    [anon_sym_equals] = ACTIONS(159),
    [anon_sym_long] = ACTIONS(159),
    [anon_sym_out] = ACTIONS(159),
    [anon_sym_ref] = ACTIONS(159),
    [anon_sym_sizeof] = ACTIONS(159),
    [anon_sym_descending] = ACTIONS(159),
    [anon_sym_ascending] = ACTIONS(159),
    [anon_sym_dynamic] = ACTIONS(159),
    [anon_sym_fixed] = ACTIONS(159),
    [anon_sym_group] = ACTIONS(159),
    [anon_sym_is] = ACTIONS(159),
    [anon_sym_get] = ACTIONS(159),
    [anon_sym_set] = ACTIONS(159),
    [anon_sym_on] = ACTIONS(159),
    [anon_sym_remove] = ACTIONS(159),
    [anon_sym_stackalloc] = ACTIONS(159),
    [anon_sym_unchecked] = ACTIONS(159),
    [anon_sym_as] = ACTIONS(159),
    [anon_sym_base] = ACTIONS(159),
    [anon_sym_61] = ACTIONS(157),
    [anon_sym_62] = ACTIONS(159),
    [anon_sym_63] = ACTIONS(157),
    [anon_sym_64] = ACTIONS(157),
    [anon_sym_65] = ACTIONS(157),
    [anon_sym_66] = ACTIONS(157),
    [anon_sym_67] = ACTIONS(157),
    [anon_sym_68] = ACTIONS(157),
    [anon_sym_69] = ACTIONS(157),
    [anon_sym_int] = ACTIONS(159),
    [anon_sym_bool] = ACTIONS(159),
    [anon_sym_string] = ACTIONS(159),
    [anon_sym_float] = ACTIONS(159),
    [anon_sym_char] = ACTIONS(159),
    [anon_sym_double] = ACTIONS(159),
    [anon_sym_byte] = ACTIONS(159),
    [anon_sym_decimal] = ACTIONS(159),
    [anon_sym_sbyte] = ACTIONS(159),
    [anon_sym_short] = ACTIONS(159),
    [anon_sym_uint] = ACTIONS(159),
    [anon_sym_ushort] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_ulong] = ACTIONS(159),
    [anon_sym_70] = ACTIONS(157),
    [anon_sym_71] = ACTIONS(157),
    [anon_sym_72] = ACTIONS(159),
    [anon_sym_73] = ACTIONS(159),
    [anon_sym_74] = ACTIONS(159),
    [anon_sym_75] = ACTIONS(159),
    [anon_sym_76] = ACTIONS(159),
    [anon_sym_77] = ACTIONS(159),
    [anon_sym_78] = ACTIONS(159),
    [anon_sym_79] = ACTIONS(159),
    [anon_sym_80] = ACTIONS(159),
    [anon_sym_81] = ACTIONS(159),
    [anon_sym_82] = ACTIONS(159),
    [anon_sym_83] = ACTIONS(157),
    [anon_sym_84] = ACTIONS(157),
    [anon_sym_85] = ACTIONS(157),
    [anon_sym_86] = ACTIONS(157),
    [anon_sym_87] = ACTIONS(157),
    [anon_sym_88] = ACTIONS(157),
    [anon_sym_89] = ACTIONS(157),
    [anon_sym_90] = ACTIONS(157),
    [anon_sym_91] = ACTIONS(157),
    [anon_sym_92] = ACTIONS(157),
    [anon_sym_93] = ACTIONS(157),
    [anon_sym_94] = ACTIONS(159),
    [anon_sym_95] = ACTIONS(157),
    [anon_sym_96] = ACTIONS(159),
    [anon_sym_97] = ACTIONS(159),
    [anon_sym_98] = ACTIONS(159),
    [anon_sym_99] = ACTIONS(159),
    [anon_sym_100] = ACTIONS(159),
    [anon_sym_101] = ACTIONS(159),
    [anon_sym_102] = ACTIONS(159),
    [anon_sym_103] = ACTIONS(157),
    [sym_type] = ACTIONS(157),
    [sym_comment] = ACTIONS(157),
    [aux_sym_z_token1] = ACTIONS(159),
    [aux_sym_z_token2] = ACTIONS(159),
    [aux_sym_z_token3] = ACTIONS(157),
    [sym_str] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_104] = ACTIONS(157),
    [anon_sym_105] = ACTIONS(157),
    [anon_sym_106] = ACTIONS(157),
    [anon_sym_107] = ACTIONS(157),
    [anon_sym_108] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [sym_int] = ACTIONS(159),
    [anon_sym_null] = ACTIONS(159),
    [anon_sym_109] = ACTIONS(157),
    [sym_real] = ACTIONS(159),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_id] = ACTIONS(163),
    [anon_sym_public] = ACTIONS(163),
    [anon_sym_internal] = ACTIONS(163),
    [anon_sym_protected] = ACTIONS(163),
    [anon_sym_private] = ACTIONS(163),
    [anon_sym_static] = ACTIONS(163),
    [anon_sym_abstract] = ACTIONS(163),
    [anon_sym_const] = ACTIONS(163),
    [anon_sym_extern] = ACTIONS(163),
    [anon_sym_override] = ACTIONS(163),
    [anon_sym_partial] = ACTIONS(163),
    [anon_sym_readonly] = ACTIONS(163),
    [anon_sym_sealed] = ACTIONS(163),
    [anon_sym_unsafe] = ACTIONS(163),
    [anon_sym_virtual] = ACTIONS(163),
    [anon_sym_volatile] = ACTIONS(163),
    [anon_sym_explicit] = ACTIONS(163),
    [anon_sym_implicit] = ACTIONS(163),
    [anon_sym_] = ACTIONS(161),
    [anon_sym_2] = ACTIONS(161),
    [anon_sym_3] = ACTIONS(161),
    [anon_sym_4] = ACTIONS(163),
    [anon_sym_5] = ACTIONS(161),
    [anon_sym_6] = ACTIONS(161),
    [anon_sym_7] = ACTIONS(161),
    [anon_sym_8] = ACTIONS(163),
    [anon_sym_9] = ACTIONS(161),
    [anon_sym_10] = ACTIONS(163),
    [anon_sym_11] = ACTIONS(161),
    [anon_sym_12] = ACTIONS(163),
    [anon_sym_13] = ACTIONS(161),
    [anon_sym_14] = ACTIONS(163),
    [anon_sym_15] = ACTIONS(161),
    [anon_sym_16] = ACTIONS(163),
    [anon_sym_17] = ACTIONS(161),
    [anon_sym_18] = ACTIONS(163),
    [anon_sym_19] = ACTIONS(161),
    [anon_sym_20] = ACTIONS(163),
    [anon_sym_21] = ACTIONS(161),
    [anon_sym_22] = ACTIONS(161),
    [anon_sym_23] = ACTIONS(163),
    [anon_sym_24] = ACTIONS(161),
    [anon_sym_class] = ACTIONS(163),
    [anon_sym_interface] = ACTIONS(163),
    [anon_sym_struct] = ACTIONS(163),
    [anon_sym_enum] = ACTIONS(163),
    [anon_sym_var] = ACTIONS(163),
    [anon_sym_delegate] = ACTIONS(163),
    [anon_sym_25] = ACTIONS(161),
    [anon_sym_26] = ACTIONS(161),
    [anon_sym_27] = ACTIONS(161),
    [anon_sym_28] = ACTIONS(161),
    [anon_sym_29] = ACTIONS(161),
    [anon_sym_30] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_31] = ACTIONS(161),
    [anon_sym_32] = ACTIONS(161),
    [anon_sym_33] = ACTIONS(161),
    [anon_sym_34] = ACTIONS(161),
    [anon_sym_35] = ACTIONS(161),
    [anon_sym_36] = ACTIONS(161),
    [anon_sym_37] = ACTIONS(161),
    [anon_sym_38] = ACTIONS(161),
    [anon_sym_39] = ACTIONS(161),
    [anon_sym_40] = ACTIONS(161),
    [anon_sym_41] = ACTIONS(161),
    [anon_sym_42] = ACTIONS(163),
    [anon_sym_43] = ACTIONS(163),
    [anon_sym_return] = ACTIONS(163),
    [anon_sym_44] = ACTIONS(161),
    [anon_sym_async] = ACTIONS(163),
    [anon_sym_await] = ACTIONS(163),
    [anon_sym_by] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(163),
    [anon_sym_else] = ACTIONS(163),
    [anon_sym_foreach] = ACTIONS(163),
    [anon_sym_in] = ACTIONS(163),
    [anon_sym_for] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(163),
    [anon_sym_while] = ACTIONS(163),
    [anon_sym_switch] = ACTIONS(163),
    [anon_sym_case] = ACTIONS(163),
    [anon_sym_break] = ACTIONS(163),
    [anon_sym_yield] = ACTIONS(163),
    [anon_sym_try] = ACTIONS(163),
    [anon_sym_catch] = ACTIONS(163),
    [anon_sym_finally] = ACTIONS(163),
    [anon_sym_continue] = ACTIONS(163),
    [anon_sym_from] = ACTIONS(163),
    [anon_sym_where] = ACTIONS(163),
    [anon_sym_select] = ACTIONS(163),
    [anon_sym_throw] = ACTIONS(163),
    [anon_sym_join] = ACTIONS(163),
    [anon_sym_goto] = ACTIONS(163),
    [anon_sym_lock] = ACTIONS(163),
    [anon_sym_orderby] = ACTIONS(163),
    [anon_sym_45] = ACTIONS(161),
    [anon_sym_46] = ACTIONS(161),
    [anon_sym_47] = ACTIONS(161),
    [anon_sym_48] = ACTIONS(161),
    [anon_sym_49] = ACTIONS(161),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(161),
    [anon_sym_50] = ACTIONS(161),
    [anon_sym_51] = ACTIONS(161),
    [anon_sym_52] = ACTIONS(161),
    [anon_sym_53] = ACTIONS(161),
    [anon_sym_54] = ACTIONS(161),
    [anon_sym_55] = ACTIONS(161),
    [anon_sym_56] = ACTIONS(161),
    [anon_sym_57] = ACTIONS(161),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(161),
    [anon_sym_58] = ACTIONS(161),
    [anon_sym_59] = ACTIONS(161),
    [anon_sym_60] = ACTIONS(163),
    [anon_sym_add] = ACTIONS(163),
    [anon_sym_checked] = ACTIONS(163),
    [anon_sym_into] = ACTIONS(163),
    [anon_sym_nameof] = ACTIONS(163),
    [anon_sym_new] = ACTIONS(163),
    [anon_sym_using] = ACTIONS(163),
    [anon_sym_value] = ACTIONS(163),
    [anon_sym_global] = ACTIONS(163),
    [anon_sym_let] = ACTIONS(163),
    [anon_sym_operator] = ACTIONS(163),
    [anon_sym_params] = ACTIONS(163),
    [anon_sym_this] = ACTIONS(163),
    [anon_sym_typeof] = ACTIONS(163),
    [anon_sym_default] = ACTIONS(163),
    [anon_sym_equals] = ACTIONS(163),
    [anon_sym_long] = ACTIONS(163),
    [anon_sym_out] = ACTIONS(163),
    [anon_sym_ref] = ACTIONS(163),
    [anon_sym_sizeof] = ACTIONS(163),
    [anon_sym_descending] = ACTIONS(163),
    [anon_sym_ascending] = ACTIONS(163),
    [anon_sym_dynamic] = ACTIONS(163),
    [anon_sym_fixed] = ACTIONS(163),
    [anon_sym_group] = ACTIONS(163),
    [anon_sym_is] = ACTIONS(163),
    [anon_sym_get] = ACTIONS(163),
    [anon_sym_set] = ACTIONS(163),
    [anon_sym_on] = ACTIONS(163),
    [anon_sym_remove] = ACTIONS(163),
    [anon_sym_stackalloc] = ACTIONS(163),
    [anon_sym_unchecked] = ACTIONS(163),
    [anon_sym_as] = ACTIONS(163),
    [anon_sym_base] = ACTIONS(163),
    [anon_sym_61] = ACTIONS(161),
    [anon_sym_62] = ACTIONS(163),
    [anon_sym_63] = ACTIONS(161),
    [anon_sym_64] = ACTIONS(161),
    [anon_sym_65] = ACTIONS(161),
    [anon_sym_66] = ACTIONS(161),
    [anon_sym_67] = ACTIONS(161),
    [anon_sym_68] = ACTIONS(161),
    [anon_sym_69] = ACTIONS(161),
    [anon_sym_int] = ACTIONS(163),
    [anon_sym_bool] = ACTIONS(163),
    [anon_sym_string] = ACTIONS(163),
    [anon_sym_float] = ACTIONS(163),
    [anon_sym_char] = ACTIONS(163),
    [anon_sym_double] = ACTIONS(163),
    [anon_sym_byte] = ACTIONS(163),
    [anon_sym_decimal] = ACTIONS(163),
    [anon_sym_sbyte] = ACTIONS(163),
    [anon_sym_short] = ACTIONS(163),
    [anon_sym_uint] = ACTIONS(163),
    [anon_sym_ushort] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(163),
    [anon_sym_ulong] = ACTIONS(163),
    [anon_sym_70] = ACTIONS(161),
    [anon_sym_71] = ACTIONS(161),
    [anon_sym_72] = ACTIONS(163),
    [anon_sym_73] = ACTIONS(163),
    [anon_sym_74] = ACTIONS(163),
    [anon_sym_75] = ACTIONS(163),
    [anon_sym_76] = ACTIONS(163),
    [anon_sym_77] = ACTIONS(163),
    [anon_sym_78] = ACTIONS(163),
    [anon_sym_79] = ACTIONS(163),
    [anon_sym_80] = ACTIONS(163),
    [anon_sym_81] = ACTIONS(163),
    [anon_sym_82] = ACTIONS(163),
    [anon_sym_83] = ACTIONS(161),
    [anon_sym_84] = ACTIONS(161),
    [anon_sym_85] = ACTIONS(161),
    [anon_sym_86] = ACTIONS(161),
    [anon_sym_87] = ACTIONS(161),
    [anon_sym_88] = ACTIONS(161),
    [anon_sym_89] = ACTIONS(161),
    [anon_sym_90] = ACTIONS(161),
    [anon_sym_91] = ACTIONS(161),
    [anon_sym_92] = ACTIONS(161),
    [anon_sym_93] = ACTIONS(161),
    [anon_sym_94] = ACTIONS(163),
    [anon_sym_95] = ACTIONS(161),
    [anon_sym_96] = ACTIONS(163),
    [anon_sym_97] = ACTIONS(163),
    [anon_sym_98] = ACTIONS(163),
    [anon_sym_99] = ACTIONS(163),
    [anon_sym_100] = ACTIONS(163),
    [anon_sym_101] = ACTIONS(163),
    [anon_sym_102] = ACTIONS(163),
    [anon_sym_103] = ACTIONS(161),
    [sym_type] = ACTIONS(161),
    [sym_comment] = ACTIONS(161),
    [aux_sym_z_token1] = ACTIONS(163),
    [aux_sym_z_token2] = ACTIONS(163),
    [aux_sym_z_token3] = ACTIONS(161),
    [sym_str] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(163),
    [anon_sym_false] = ACTIONS(163),
    [anon_sym_104] = ACTIONS(161),
    [anon_sym_105] = ACTIONS(161),
    [anon_sym_106] = ACTIONS(161),
    [anon_sym_107] = ACTIONS(161),
    [anon_sym_108] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [sym_int] = ACTIONS(163),
    [anon_sym_null] = ACTIONS(163),
    [anon_sym_109] = ACTIONS(161),
    [sym_real] = ACTIONS(163),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_id] = ACTIONS(167),
    [anon_sym_public] = ACTIONS(167),
    [anon_sym_internal] = ACTIONS(167),
    [anon_sym_protected] = ACTIONS(167),
    [anon_sym_private] = ACTIONS(167),
    [anon_sym_static] = ACTIONS(167),
    [anon_sym_abstract] = ACTIONS(167),
    [anon_sym_const] = ACTIONS(167),
    [anon_sym_extern] = ACTIONS(167),
    [anon_sym_override] = ACTIONS(167),
    [anon_sym_partial] = ACTIONS(167),
    [anon_sym_readonly] = ACTIONS(167),
    [anon_sym_sealed] = ACTIONS(167),
    [anon_sym_unsafe] = ACTIONS(167),
    [anon_sym_virtual] = ACTIONS(167),
    [anon_sym_volatile] = ACTIONS(167),
    [anon_sym_explicit] = ACTIONS(167),
    [anon_sym_implicit] = ACTIONS(167),
    [anon_sym_] = ACTIONS(165),
    [anon_sym_2] = ACTIONS(165),
    [anon_sym_3] = ACTIONS(165),
    [anon_sym_4] = ACTIONS(167),
    [anon_sym_5] = ACTIONS(165),
    [anon_sym_6] = ACTIONS(165),
    [anon_sym_7] = ACTIONS(165),
    [anon_sym_8] = ACTIONS(167),
    [anon_sym_9] = ACTIONS(165),
    [anon_sym_10] = ACTIONS(167),
    [anon_sym_11] = ACTIONS(165),
    [anon_sym_12] = ACTIONS(167),
    [anon_sym_13] = ACTIONS(165),
    [anon_sym_14] = ACTIONS(167),
    [anon_sym_15] = ACTIONS(165),
    [anon_sym_16] = ACTIONS(167),
    [anon_sym_17] = ACTIONS(165),
    [anon_sym_18] = ACTIONS(167),
    [anon_sym_19] = ACTIONS(165),
    [anon_sym_20] = ACTIONS(167),
    [anon_sym_21] = ACTIONS(165),
    [anon_sym_22] = ACTIONS(165),
    [anon_sym_23] = ACTIONS(167),
    [anon_sym_24] = ACTIONS(165),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(167),
    [anon_sym_struct] = ACTIONS(167),
    [anon_sym_enum] = ACTIONS(167),
    [anon_sym_var] = ACTIONS(167),
    [anon_sym_delegate] = ACTIONS(167),
    [anon_sym_25] = ACTIONS(165),
    [anon_sym_26] = ACTIONS(165),
    [anon_sym_27] = ACTIONS(165),
    [anon_sym_28] = ACTIONS(165),
    [anon_sym_29] = ACTIONS(165),
    [anon_sym_30] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_31] = ACTIONS(165),
    [anon_sym_32] = ACTIONS(165),
    [anon_sym_33] = ACTIONS(165),
    [anon_sym_34] = ACTIONS(165),
    [anon_sym_35] = ACTIONS(165),
    [anon_sym_36] = ACTIONS(165),
    [anon_sym_37] = ACTIONS(165),
    [anon_sym_38] = ACTIONS(165),
    [anon_sym_39] = ACTIONS(165),
    [anon_sym_40] = ACTIONS(165),
    [anon_sym_41] = ACTIONS(165),
    [anon_sym_42] = ACTIONS(167),
    [anon_sym_43] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_44] = ACTIONS(165),
    [anon_sym_async] = ACTIONS(167),
    [anon_sym_await] = ACTIONS(167),
    [anon_sym_by] = ACTIONS(167),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(167),
    [anon_sym_foreach] = ACTIONS(167),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_for] = ACTIONS(167),
    [anon_sym_do] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(167),
    [anon_sym_switch] = ACTIONS(167),
    [anon_sym_case] = ACTIONS(167),
    [anon_sym_break] = ACTIONS(167),
    [anon_sym_yield] = ACTIONS(167),
    [anon_sym_try] = ACTIONS(167),
    [anon_sym_catch] = ACTIONS(167),
    [anon_sym_finally] = ACTIONS(167),
    [anon_sym_continue] = ACTIONS(167),
    [anon_sym_from] = ACTIONS(167),
    [anon_sym_where] = ACTIONS(167),
    [anon_sym_select] = ACTIONS(167),
    [anon_sym_throw] = ACTIONS(167),
    [anon_sym_join] = ACTIONS(167),
    [anon_sym_goto] = ACTIONS(167),
    [anon_sym_lock] = ACTIONS(167),
    [anon_sym_orderby] = ACTIONS(167),
    [anon_sym_45] = ACTIONS(165),
    [anon_sym_46] = ACTIONS(165),
    [anon_sym_47] = ACTIONS(165),
    [anon_sym_48] = ACTIONS(165),
    [anon_sym_49] = ACTIONS(165),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(165),
    [anon_sym_50] = ACTIONS(165),
    [anon_sym_51] = ACTIONS(165),
    [anon_sym_52] = ACTIONS(165),
    [anon_sym_53] = ACTIONS(165),
    [anon_sym_54] = ACTIONS(165),
    [anon_sym_55] = ACTIONS(165),
    [anon_sym_56] = ACTIONS(165),
    [anon_sym_57] = ACTIONS(165),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(165),
    [anon_sym_58] = ACTIONS(165),
    [anon_sym_59] = ACTIONS(165),
    [anon_sym_60] = ACTIONS(167),
    [anon_sym_add] = ACTIONS(167),
    [anon_sym_checked] = ACTIONS(167),
    [anon_sym_into] = ACTIONS(167),
    [anon_sym_nameof] = ACTIONS(167),
    [anon_sym_new] = ACTIONS(167),
    [anon_sym_using] = ACTIONS(167),
    [anon_sym_value] = ACTIONS(167),
    [anon_sym_global] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(167),
    [anon_sym_operator] = ACTIONS(167),
    [anon_sym_params] = ACTIONS(167),
    [anon_sym_this] = ACTIONS(167),
    [anon_sym_typeof] = ACTIONS(167),
    [anon_sym_default] = ACTIONS(167),
    [anon_sym_equals] = ACTIONS(167),
    [anon_sym_long] = ACTIONS(167),
    [anon_sym_out] = ACTIONS(167),
    [anon_sym_ref] = ACTIONS(167),
    [anon_sym_sizeof] = ACTIONS(167),
    [anon_sym_descending] = ACTIONS(167),
    [anon_sym_ascending] = ACTIONS(167),
    [anon_sym_dynamic] = ACTIONS(167),
    [anon_sym_fixed] = ACTIONS(167),
    [anon_sym_group] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_get] = ACTIONS(167),
    [anon_sym_set] = ACTIONS(167),
    [anon_sym_on] = ACTIONS(167),
    [anon_sym_remove] = ACTIONS(167),
    [anon_sym_stackalloc] = ACTIONS(167),
    [anon_sym_unchecked] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_base] = ACTIONS(167),
    [anon_sym_61] = ACTIONS(165),
    [anon_sym_62] = ACTIONS(167),
    [anon_sym_63] = ACTIONS(165),
    [anon_sym_64] = ACTIONS(165),
    [anon_sym_65] = ACTIONS(165),
    [anon_sym_66] = ACTIONS(165),
    [anon_sym_67] = ACTIONS(165),
    [anon_sym_68] = ACTIONS(165),
    [anon_sym_69] = ACTIONS(165),
    [anon_sym_int] = ACTIONS(167),
    [anon_sym_bool] = ACTIONS(167),
    [anon_sym_string] = ACTIONS(167),
    [anon_sym_float] = ACTIONS(167),
    [anon_sym_char] = ACTIONS(167),
    [anon_sym_double] = ACTIONS(167),
    [anon_sym_byte] = ACTIONS(167),
    [anon_sym_decimal] = ACTIONS(167),
    [anon_sym_sbyte] = ACTIONS(167),
    [anon_sym_short] = ACTIONS(167),
    [anon_sym_uint] = ACTIONS(167),
    [anon_sym_ushort] = ACTIONS(167),
    [anon_sym_object] = ACTIONS(167),
    [anon_sym_ulong] = ACTIONS(167),
    [anon_sym_70] = ACTIONS(165),
    [anon_sym_71] = ACTIONS(165),
    [anon_sym_72] = ACTIONS(167),
    [anon_sym_73] = ACTIONS(167),
    [anon_sym_74] = ACTIONS(167),
    [anon_sym_75] = ACTIONS(167),
    [anon_sym_76] = ACTIONS(167),
    [anon_sym_77] = ACTIONS(167),
    [anon_sym_78] = ACTIONS(167),
    [anon_sym_79] = ACTIONS(167),
    [anon_sym_80] = ACTIONS(167),
    [anon_sym_81] = ACTIONS(167),
    [anon_sym_82] = ACTIONS(167),
    [anon_sym_83] = ACTIONS(165),
    [anon_sym_84] = ACTIONS(165),
    [anon_sym_85] = ACTIONS(165),
    [anon_sym_86] = ACTIONS(165),
    [anon_sym_87] = ACTIONS(165),
    [anon_sym_88] = ACTIONS(165),
    [anon_sym_89] = ACTIONS(165),
    [anon_sym_90] = ACTIONS(165),
    [anon_sym_91] = ACTIONS(165),
    [anon_sym_92] = ACTIONS(165),
    [anon_sym_93] = ACTIONS(165),
    [anon_sym_94] = ACTIONS(167),
    [anon_sym_95] = ACTIONS(165),
    [anon_sym_96] = ACTIONS(167),
    [anon_sym_97] = ACTIONS(167),
    [anon_sym_98] = ACTIONS(167),
    [anon_sym_99] = ACTIONS(167),
    [anon_sym_100] = ACTIONS(167),
    [anon_sym_101] = ACTIONS(167),
    [anon_sym_102] = ACTIONS(167),
    [anon_sym_103] = ACTIONS(165),
    [sym_type] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
    [aux_sym_z_token1] = ACTIONS(167),
    [aux_sym_z_token2] = ACTIONS(167),
    [aux_sym_z_token3] = ACTIONS(165),
    [sym_str] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_104] = ACTIONS(165),
    [anon_sym_105] = ACTIONS(165),
    [anon_sym_106] = ACTIONS(165),
    [anon_sym_107] = ACTIONS(165),
    [anon_sym_108] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [sym_int] = ACTIONS(167),
    [anon_sym_null] = ACTIONS(167),
    [anon_sym_109] = ACTIONS(165),
    [sym_real] = ACTIONS(167),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_id] = ACTIONS(171),
    [anon_sym_public] = ACTIONS(171),
    [anon_sym_internal] = ACTIONS(171),
    [anon_sym_protected] = ACTIONS(171),
    [anon_sym_private] = ACTIONS(171),
    [anon_sym_static] = ACTIONS(171),
    [anon_sym_abstract] = ACTIONS(171),
    [anon_sym_const] = ACTIONS(171),
    [anon_sym_extern] = ACTIONS(171),
    [anon_sym_override] = ACTIONS(171),
    [anon_sym_partial] = ACTIONS(171),
    [anon_sym_readonly] = ACTIONS(171),
    [anon_sym_sealed] = ACTIONS(171),
    [anon_sym_unsafe] = ACTIONS(171),
    [anon_sym_virtual] = ACTIONS(171),
    [anon_sym_volatile] = ACTIONS(171),
    [anon_sym_explicit] = ACTIONS(171),
    [anon_sym_implicit] = ACTIONS(171),
    [anon_sym_] = ACTIONS(169),
    [anon_sym_2] = ACTIONS(169),
    [anon_sym_3] = ACTIONS(169),
    [anon_sym_4] = ACTIONS(171),
    [anon_sym_5] = ACTIONS(169),
    [anon_sym_6] = ACTIONS(169),
    [anon_sym_7] = ACTIONS(169),
    [anon_sym_8] = ACTIONS(171),
    [anon_sym_9] = ACTIONS(169),
    [anon_sym_10] = ACTIONS(171),
    [anon_sym_11] = ACTIONS(169),
    [anon_sym_12] = ACTIONS(171),
    [anon_sym_13] = ACTIONS(169),
    [anon_sym_14] = ACTIONS(171),
    [anon_sym_15] = ACTIONS(169),
    [anon_sym_16] = ACTIONS(171),
    [anon_sym_17] = ACTIONS(169),
    [anon_sym_18] = ACTIONS(171),
    [anon_sym_19] = ACTIONS(169),
    [anon_sym_20] = ACTIONS(171),
    [anon_sym_21] = ACTIONS(169),
    [anon_sym_22] = ACTIONS(169),
    [anon_sym_23] = ACTIONS(171),
    [anon_sym_24] = ACTIONS(169),
    [anon_sym_class] = ACTIONS(171),
    [anon_sym_interface] = ACTIONS(171),
    [anon_sym_struct] = ACTIONS(171),
    [anon_sym_enum] = ACTIONS(171),
    [anon_sym_var] = ACTIONS(171),
    [anon_sym_delegate] = ACTIONS(171),
    [anon_sym_25] = ACTIONS(169),
    [anon_sym_26] = ACTIONS(169),
    [anon_sym_27] = ACTIONS(169),
    [anon_sym_28] = ACTIONS(169),
    [anon_sym_29] = ACTIONS(169),
    [anon_sym_30] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_31] = ACTIONS(169),
    [anon_sym_32] = ACTIONS(169),
    [anon_sym_33] = ACTIONS(169),
    [anon_sym_34] = ACTIONS(169),
    [anon_sym_35] = ACTIONS(169),
    [anon_sym_36] = ACTIONS(169),
    [anon_sym_37] = ACTIONS(169),
    [anon_sym_38] = ACTIONS(169),
    [anon_sym_39] = ACTIONS(169),
    [anon_sym_40] = ACTIONS(169),
    [anon_sym_41] = ACTIONS(169),
    [anon_sym_42] = ACTIONS(171),
    [anon_sym_43] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_44] = ACTIONS(169),
    [anon_sym_async] = ACTIONS(171),
    [anon_sym_await] = ACTIONS(171),
    [anon_sym_by] = ACTIONS(171),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_foreach] = ACTIONS(171),
    [anon_sym_in] = ACTIONS(171),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_switch] = ACTIONS(171),
    [anon_sym_case] = ACTIONS(171),
    [anon_sym_break] = ACTIONS(171),
    [anon_sym_yield] = ACTIONS(171),
    [anon_sym_try] = ACTIONS(171),
    [anon_sym_catch] = ACTIONS(171),
    [anon_sym_finally] = ACTIONS(171),
    [anon_sym_continue] = ACTIONS(171),
    [anon_sym_from] = ACTIONS(171),
    [anon_sym_where] = ACTIONS(171),
    [anon_sym_select] = ACTIONS(171),
    [anon_sym_throw] = ACTIONS(171),
    [anon_sym_join] = ACTIONS(171),
    [anon_sym_goto] = ACTIONS(171),
    [anon_sym_lock] = ACTIONS(171),
    [anon_sym_orderby] = ACTIONS(171),
    [anon_sym_45] = ACTIONS(169),
    [anon_sym_46] = ACTIONS(169),
    [anon_sym_47] = ACTIONS(169),
    [anon_sym_48] = ACTIONS(169),
    [anon_sym_49] = ACTIONS(169),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(169),
    [anon_sym_50] = ACTIONS(169),
    [anon_sym_51] = ACTIONS(169),
    [anon_sym_52] = ACTIONS(169),
    [anon_sym_53] = ACTIONS(169),
    [anon_sym_54] = ACTIONS(169),
    [anon_sym_55] = ACTIONS(169),
    [anon_sym_56] = ACTIONS(169),
    [anon_sym_57] = ACTIONS(169),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(169),
    [anon_sym_58] = ACTIONS(169),
    [anon_sym_59] = ACTIONS(169),
    [anon_sym_60] = ACTIONS(171),
    [anon_sym_add] = ACTIONS(171),
    [anon_sym_checked] = ACTIONS(171),
    [anon_sym_into] = ACTIONS(171),
    [anon_sym_nameof] = ACTIONS(171),
    [anon_sym_new] = ACTIONS(171),
    [anon_sym_using] = ACTIONS(171),
    [anon_sym_value] = ACTIONS(171),
    [anon_sym_global] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(171),
    [anon_sym_operator] = ACTIONS(171),
    [anon_sym_params] = ACTIONS(171),
    [anon_sym_this] = ACTIONS(171),
    [anon_sym_typeof] = ACTIONS(171),
    [anon_sym_default] = ACTIONS(171),
    [anon_sym_equals] = ACTIONS(171),
    [anon_sym_long] = ACTIONS(171),
    [anon_sym_out] = ACTIONS(171),
    [anon_sym_ref] = ACTIONS(171),
    [anon_sym_sizeof] = ACTIONS(171),
    [anon_sym_descending] = ACTIONS(171),
    [anon_sym_ascending] = ACTIONS(171),
    [anon_sym_dynamic] = ACTIONS(171),
    [anon_sym_fixed] = ACTIONS(171),
    [anon_sym_group] = ACTIONS(171),
    [anon_sym_is] = ACTIONS(171),
    [anon_sym_get] = ACTIONS(171),
    [anon_sym_set] = ACTIONS(171),
    [anon_sym_on] = ACTIONS(171),
    [anon_sym_remove] = ACTIONS(171),
    [anon_sym_stackalloc] = ACTIONS(171),
    [anon_sym_unchecked] = ACTIONS(171),
    [anon_sym_as] = ACTIONS(171),
    [anon_sym_base] = ACTIONS(171),
    [anon_sym_61] = ACTIONS(169),
    [anon_sym_62] = ACTIONS(171),
    [anon_sym_63] = ACTIONS(169),
    [anon_sym_64] = ACTIONS(169),
    [anon_sym_65] = ACTIONS(169),
    [anon_sym_66] = ACTIONS(169),
    [anon_sym_67] = ACTIONS(169),
    [anon_sym_68] = ACTIONS(169),
    [anon_sym_69] = ACTIONS(169),
    [anon_sym_int] = ACTIONS(171),
    [anon_sym_bool] = ACTIONS(171),
    [anon_sym_string] = ACTIONS(171),
    [anon_sym_float] = ACTIONS(171),
    [anon_sym_char] = ACTIONS(171),
    [anon_sym_double] = ACTIONS(171),
    [anon_sym_byte] = ACTIONS(171),
    [anon_sym_decimal] = ACTIONS(171),
    [anon_sym_sbyte] = ACTIONS(171),
    [anon_sym_short] = ACTIONS(171),
    [anon_sym_uint] = ACTIONS(171),
    [anon_sym_ushort] = ACTIONS(171),
    [anon_sym_object] = ACTIONS(171),
    [anon_sym_ulong] = ACTIONS(171),
    [anon_sym_70] = ACTIONS(169),
    [anon_sym_71] = ACTIONS(169),
    [anon_sym_72] = ACTIONS(171),
    [anon_sym_73] = ACTIONS(171),
    [anon_sym_74] = ACTIONS(171),
    [anon_sym_75] = ACTIONS(171),
    [anon_sym_76] = ACTIONS(171),
    [anon_sym_77] = ACTIONS(171),
    [anon_sym_78] = ACTIONS(171),
    [anon_sym_79] = ACTIONS(171),
    [anon_sym_80] = ACTIONS(171),
    [anon_sym_81] = ACTIONS(171),
    [anon_sym_82] = ACTIONS(171),
    [anon_sym_83] = ACTIONS(169),
    [anon_sym_84] = ACTIONS(169),
    [anon_sym_85] = ACTIONS(169),
    [anon_sym_86] = ACTIONS(169),
    [anon_sym_87] = ACTIONS(169),
    [anon_sym_88] = ACTIONS(169),
    [anon_sym_89] = ACTIONS(169),
    [anon_sym_90] = ACTIONS(169),
    [anon_sym_91] = ACTIONS(169),
    [anon_sym_92] = ACTIONS(169),
    [anon_sym_93] = ACTIONS(169),
    [anon_sym_94] = ACTIONS(171),
    [anon_sym_95] = ACTIONS(169),
    [anon_sym_96] = ACTIONS(171),
    [anon_sym_97] = ACTIONS(171),
    [anon_sym_98] = ACTIONS(171),
    [anon_sym_99] = ACTIONS(171),
    [anon_sym_100] = ACTIONS(171),
    [anon_sym_101] = ACTIONS(171),
    [anon_sym_102] = ACTIONS(171),
    [anon_sym_103] = ACTIONS(169),
    [sym_type] = ACTIONS(169),
    [sym_comment] = ACTIONS(169),
    [aux_sym_z_token1] = ACTIONS(171),
    [aux_sym_z_token2] = ACTIONS(171),
    [aux_sym_z_token3] = ACTIONS(169),
    [sym_str] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_104] = ACTIONS(169),
    [anon_sym_105] = ACTIONS(169),
    [anon_sym_106] = ACTIONS(169),
    [anon_sym_107] = ACTIONS(169),
    [anon_sym_108] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [sym_int] = ACTIONS(171),
    [anon_sym_null] = ACTIONS(171),
    [anon_sym_109] = ACTIONS(169),
    [sym_real] = ACTIONS(171),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_id] = ACTIONS(175),
    [anon_sym_public] = ACTIONS(175),
    [anon_sym_internal] = ACTIONS(175),
    [anon_sym_protected] = ACTIONS(175),
    [anon_sym_private] = ACTIONS(175),
    [anon_sym_static] = ACTIONS(175),
    [anon_sym_abstract] = ACTIONS(175),
    [anon_sym_const] = ACTIONS(175),
    [anon_sym_extern] = ACTIONS(175),
    [anon_sym_override] = ACTIONS(175),
    [anon_sym_partial] = ACTIONS(175),
    [anon_sym_readonly] = ACTIONS(175),
    [anon_sym_sealed] = ACTIONS(175),
    [anon_sym_unsafe] = ACTIONS(175),
    [anon_sym_virtual] = ACTIONS(175),
    [anon_sym_volatile] = ACTIONS(175),
    [anon_sym_explicit] = ACTIONS(175),
    [anon_sym_implicit] = ACTIONS(175),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [anon_sym_4] = ACTIONS(175),
    [anon_sym_5] = ACTIONS(173),
    [anon_sym_6] = ACTIONS(173),
    [anon_sym_7] = ACTIONS(173),
    [anon_sym_8] = ACTIONS(175),
    [anon_sym_9] = ACTIONS(173),
    [anon_sym_10] = ACTIONS(175),
    [anon_sym_11] = ACTIONS(173),
    [anon_sym_12] = ACTIONS(175),
    [anon_sym_13] = ACTIONS(173),
    [anon_sym_14] = ACTIONS(175),
    [anon_sym_15] = ACTIONS(173),
    [anon_sym_16] = ACTIONS(175),
    [anon_sym_17] = ACTIONS(173),
    [anon_sym_18] = ACTIONS(175),
    [anon_sym_19] = ACTIONS(173),
    [anon_sym_20] = ACTIONS(175),
    [anon_sym_21] = ACTIONS(173),
    [anon_sym_22] = ACTIONS(173),
    [anon_sym_23] = ACTIONS(175),
    [anon_sym_24] = ACTIONS(173),
    [anon_sym_class] = ACTIONS(175),
    [anon_sym_interface] = ACTIONS(175),
    [anon_sym_struct] = ACTIONS(175),
    [anon_sym_enum] = ACTIONS(175),
    [anon_sym_var] = ACTIONS(175),
    [anon_sym_delegate] = ACTIONS(175),
    [anon_sym_25] = ACTIONS(173),
    [anon_sym_26] = ACTIONS(173),
    [anon_sym_27] = ACTIONS(173),
    [anon_sym_28] = ACTIONS(173),
    [anon_sym_29] = ACTIONS(173),
    [anon_sym_30] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_31] = ACTIONS(173),
    [anon_sym_32] = ACTIONS(173),
    [anon_sym_33] = ACTIONS(173),
    [anon_sym_34] = ACTIONS(173),
    [anon_sym_35] = ACTIONS(173),
    [anon_sym_36] = ACTIONS(173),
    [anon_sym_37] = ACTIONS(173),
    [anon_sym_38] = ACTIONS(173),
    [anon_sym_39] = ACTIONS(173),
    [anon_sym_40] = ACTIONS(173),
    [anon_sym_41] = ACTIONS(173),
    [anon_sym_42] = ACTIONS(175),
    [anon_sym_43] = ACTIONS(175),
    [anon_sym_return] = ACTIONS(175),
    [anon_sym_44] = ACTIONS(173),
    [anon_sym_async] = ACTIONS(175),
    [anon_sym_await] = ACTIONS(175),
    [anon_sym_by] = ACTIONS(175),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_else] = ACTIONS(175),
    [anon_sym_foreach] = ACTIONS(175),
    [anon_sym_in] = ACTIONS(175),
    [anon_sym_for] = ACTIONS(175),
    [anon_sym_do] = ACTIONS(175),
    [anon_sym_while] = ACTIONS(175),
    [anon_sym_switch] = ACTIONS(175),
    [anon_sym_case] = ACTIONS(175),
    [anon_sym_break] = ACTIONS(175),
    [anon_sym_yield] = ACTIONS(175),
    [anon_sym_try] = ACTIONS(175),
    [anon_sym_catch] = ACTIONS(175),
    [anon_sym_finally] = ACTIONS(175),
    [anon_sym_continue] = ACTIONS(175),
    [anon_sym_from] = ACTIONS(175),
    [anon_sym_where] = ACTIONS(175),
    [anon_sym_select] = ACTIONS(175),
    [anon_sym_throw] = ACTIONS(175),
    [anon_sym_join] = ACTIONS(175),
    [anon_sym_goto] = ACTIONS(175),
    [anon_sym_lock] = ACTIONS(175),
    [anon_sym_orderby] = ACTIONS(175),
    [anon_sym_45] = ACTIONS(173),
    [anon_sym_46] = ACTIONS(173),
    [anon_sym_47] = ACTIONS(173),
    [anon_sym_48] = ACTIONS(173),
    [anon_sym_49] = ACTIONS(173),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(173),
    [anon_sym_50] = ACTIONS(173),
    [anon_sym_51] = ACTIONS(173),
    [anon_sym_52] = ACTIONS(173),
    [anon_sym_53] = ACTIONS(173),
    [anon_sym_54] = ACTIONS(173),
    [anon_sym_55] = ACTIONS(173),
    [anon_sym_56] = ACTIONS(173),
    [anon_sym_57] = ACTIONS(173),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(173),
    [anon_sym_58] = ACTIONS(173),
    [anon_sym_59] = ACTIONS(173),
    [anon_sym_60] = ACTIONS(175),
    [anon_sym_add] = ACTIONS(175),
    [anon_sym_checked] = ACTIONS(175),
    [anon_sym_into] = ACTIONS(175),
    [anon_sym_nameof] = ACTIONS(175),
    [anon_sym_new] = ACTIONS(175),
    [anon_sym_using] = ACTIONS(175),
    [anon_sym_value] = ACTIONS(175),
    [anon_sym_global] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(175),
    [anon_sym_operator] = ACTIONS(175),
    [anon_sym_params] = ACTIONS(175),
    [anon_sym_this] = ACTIONS(175),
    [anon_sym_typeof] = ACTIONS(175),
    [anon_sym_default] = ACTIONS(175),
    [anon_sym_equals] = ACTIONS(175),
    [anon_sym_long] = ACTIONS(175),
    [anon_sym_out] = ACTIONS(175),
    [anon_sym_ref] = ACTIONS(175),
    [anon_sym_sizeof] = ACTIONS(175),
    [anon_sym_descending] = ACTIONS(175),
    [anon_sym_ascending] = ACTIONS(175),
    [anon_sym_dynamic] = ACTIONS(175),
    [anon_sym_fixed] = ACTIONS(175),
    [anon_sym_group] = ACTIONS(175),
    [anon_sym_is] = ACTIONS(175),
    [anon_sym_get] = ACTIONS(175),
    [anon_sym_set] = ACTIONS(175),
    [anon_sym_on] = ACTIONS(175),
    [anon_sym_remove] = ACTIONS(175),
    [anon_sym_stackalloc] = ACTIONS(175),
    [anon_sym_unchecked] = ACTIONS(175),
    [anon_sym_as] = ACTIONS(175),
    [anon_sym_base] = ACTIONS(175),
    [anon_sym_61] = ACTIONS(173),
    [anon_sym_62] = ACTIONS(175),
    [anon_sym_63] = ACTIONS(173),
    [anon_sym_64] = ACTIONS(173),
    [anon_sym_65] = ACTIONS(173),
    [anon_sym_66] = ACTIONS(173),
    [anon_sym_67] = ACTIONS(173),
    [anon_sym_68] = ACTIONS(173),
    [anon_sym_69] = ACTIONS(173),
    [anon_sym_int] = ACTIONS(175),
    [anon_sym_bool] = ACTIONS(175),
    [anon_sym_string] = ACTIONS(175),
    [anon_sym_float] = ACTIONS(175),
    [anon_sym_char] = ACTIONS(175),
    [anon_sym_double] = ACTIONS(175),
    [anon_sym_byte] = ACTIONS(175),
    [anon_sym_decimal] = ACTIONS(175),
    [anon_sym_sbyte] = ACTIONS(175),
    [anon_sym_short] = ACTIONS(175),
    [anon_sym_uint] = ACTIONS(175),
    [anon_sym_ushort] = ACTIONS(175),
    [anon_sym_object] = ACTIONS(175),
    [anon_sym_ulong] = ACTIONS(175),
    [anon_sym_70] = ACTIONS(173),
    [anon_sym_71] = ACTIONS(173),
    [anon_sym_72] = ACTIONS(175),
    [anon_sym_73] = ACTIONS(175),
    [anon_sym_74] = ACTIONS(175),
    [anon_sym_75] = ACTIONS(175),
    [anon_sym_76] = ACTIONS(175),
    [anon_sym_77] = ACTIONS(175),
    [anon_sym_78] = ACTIONS(175),
    [anon_sym_79] = ACTIONS(175),
    [anon_sym_80] = ACTIONS(175),
    [anon_sym_81] = ACTIONS(175),
    [anon_sym_82] = ACTIONS(175),
    [anon_sym_83] = ACTIONS(173),
    [anon_sym_84] = ACTIONS(173),
    [anon_sym_85] = ACTIONS(173),
    [anon_sym_86] = ACTIONS(173),
    [anon_sym_87] = ACTIONS(173),
    [anon_sym_88] = ACTIONS(173),
    [anon_sym_89] = ACTIONS(173),
    [anon_sym_90] = ACTIONS(173),
    [anon_sym_91] = ACTIONS(173),
    [anon_sym_92] = ACTIONS(173),
    [anon_sym_93] = ACTIONS(173),
    [anon_sym_94] = ACTIONS(175),
    [anon_sym_95] = ACTIONS(173),
    [anon_sym_96] = ACTIONS(175),
    [anon_sym_97] = ACTIONS(175),
    [anon_sym_98] = ACTIONS(175),
    [anon_sym_99] = ACTIONS(175),
    [anon_sym_100] = ACTIONS(175),
    [anon_sym_101] = ACTIONS(175),
    [anon_sym_102] = ACTIONS(175),
    [anon_sym_103] = ACTIONS(173),
    [sym_type] = ACTIONS(173),
    [sym_comment] = ACTIONS(173),
    [aux_sym_z_token1] = ACTIONS(175),
    [aux_sym_z_token2] = ACTIONS(175),
    [aux_sym_z_token3] = ACTIONS(173),
    [sym_str] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_104] = ACTIONS(173),
    [anon_sym_105] = ACTIONS(173),
    [anon_sym_106] = ACTIONS(173),
    [anon_sym_107] = ACTIONS(173),
    [anon_sym_108] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_int] = ACTIONS(175),
    [anon_sym_null] = ACTIONS(175),
    [anon_sym_109] = ACTIONS(173),
    [sym_real] = ACTIONS(175),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_id] = ACTIONS(179),
    [anon_sym_public] = ACTIONS(179),
    [anon_sym_internal] = ACTIONS(179),
    [anon_sym_protected] = ACTIONS(179),
    [anon_sym_private] = ACTIONS(179),
    [anon_sym_static] = ACTIONS(179),
    [anon_sym_abstract] = ACTIONS(179),
    [anon_sym_const] = ACTIONS(179),
    [anon_sym_extern] = ACTIONS(179),
    [anon_sym_override] = ACTIONS(179),
    [anon_sym_partial] = ACTIONS(179),
    [anon_sym_readonly] = ACTIONS(179),
    [anon_sym_sealed] = ACTIONS(179),
    [anon_sym_unsafe] = ACTIONS(179),
    [anon_sym_virtual] = ACTIONS(179),
    [anon_sym_volatile] = ACTIONS(179),
    [anon_sym_explicit] = ACTIONS(179),
    [anon_sym_implicit] = ACTIONS(179),
    [anon_sym_] = ACTIONS(177),
    [anon_sym_2] = ACTIONS(177),
    [anon_sym_3] = ACTIONS(177),
    [anon_sym_4] = ACTIONS(179),
    [anon_sym_5] = ACTIONS(177),
    [anon_sym_6] = ACTIONS(177),
    [anon_sym_7] = ACTIONS(177),
    [anon_sym_8] = ACTIONS(179),
    [anon_sym_9] = ACTIONS(177),
    [anon_sym_10] = ACTIONS(179),
    [anon_sym_11] = ACTIONS(177),
    [anon_sym_12] = ACTIONS(179),
    [anon_sym_13] = ACTIONS(177),
    [anon_sym_14] = ACTIONS(179),
    [anon_sym_15] = ACTIONS(177),
    [anon_sym_16] = ACTIONS(179),
    [anon_sym_17] = ACTIONS(177),
    [anon_sym_18] = ACTIONS(179),
    [anon_sym_19] = ACTIONS(177),
    [anon_sym_20] = ACTIONS(179),
    [anon_sym_21] = ACTIONS(177),
    [anon_sym_22] = ACTIONS(177),
    [anon_sym_23] = ACTIONS(179),
    [anon_sym_24] = ACTIONS(177),
    [anon_sym_class] = ACTIONS(179),
    [anon_sym_interface] = ACTIONS(179),
    [anon_sym_struct] = ACTIONS(179),
    [anon_sym_enum] = ACTIONS(179),
    [anon_sym_var] = ACTIONS(179),
    [anon_sym_delegate] = ACTIONS(179),
    [anon_sym_25] = ACTIONS(177),
    [anon_sym_26] = ACTIONS(177),
    [anon_sym_27] = ACTIONS(177),
    [anon_sym_28] = ACTIONS(177),
    [anon_sym_29] = ACTIONS(177),
    [anon_sym_30] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_31] = ACTIONS(177),
    [anon_sym_32] = ACTIONS(177),
    [anon_sym_33] = ACTIONS(177),
    [anon_sym_34] = ACTIONS(177),
    [anon_sym_35] = ACTIONS(177),
    [anon_sym_36] = ACTIONS(177),
    [anon_sym_37] = ACTIONS(177),
    [anon_sym_38] = ACTIONS(177),
    [anon_sym_39] = ACTIONS(177),
    [anon_sym_40] = ACTIONS(177),
    [anon_sym_41] = ACTIONS(177),
    [anon_sym_42] = ACTIONS(179),
    [anon_sym_43] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(179),
    [anon_sym_44] = ACTIONS(177),
    [anon_sym_async] = ACTIONS(179),
    [anon_sym_await] = ACTIONS(179),
    [anon_sym_by] = ACTIONS(179),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_foreach] = ACTIONS(179),
    [anon_sym_in] = ACTIONS(179),
    [anon_sym_for] = ACTIONS(179),
    [anon_sym_do] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_switch] = ACTIONS(179),
    [anon_sym_case] = ACTIONS(179),
    [anon_sym_break] = ACTIONS(179),
    [anon_sym_yield] = ACTIONS(179),
    [anon_sym_try] = ACTIONS(179),
    [anon_sym_catch] = ACTIONS(179),
    [anon_sym_finally] = ACTIONS(179),
    [anon_sym_continue] = ACTIONS(179),
    [anon_sym_from] = ACTIONS(179),
    [anon_sym_where] = ACTIONS(179),
    [anon_sym_select] = ACTIONS(179),
    [anon_sym_throw] = ACTIONS(179),
    [anon_sym_join] = ACTIONS(179),
    [anon_sym_goto] = ACTIONS(179),
    [anon_sym_lock] = ACTIONS(179),
    [anon_sym_orderby] = ACTIONS(179),
    [anon_sym_45] = ACTIONS(177),
    [anon_sym_46] = ACTIONS(177),
    [anon_sym_47] = ACTIONS(177),
    [anon_sym_48] = ACTIONS(177),
    [anon_sym_49] = ACTIONS(177),
    [anon_sym_LPAREN_RPAREN] = ACTIONS(177),
    [anon_sym_50] = ACTIONS(177),
    [anon_sym_51] = ACTIONS(177),
    [anon_sym_52] = ACTIONS(177),
    [anon_sym_53] = ACTIONS(177),
    [anon_sym_54] = ACTIONS(177),
    [anon_sym_55] = ACTIONS(177),
    [anon_sym_56] = ACTIONS(177),
    [anon_sym_57] = ACTIONS(177),
    [anon_sym_LPAREN_RPAREN2] = ACTIONS(177),
    [anon_sym_58] = ACTIONS(177),
    [anon_sym_59] = ACTIONS(177),
    [anon_sym_60] = ACTIONS(179),
    [anon_sym_add] = ACTIONS(179),
    [anon_sym_checked] = ACTIONS(179),
    [anon_sym_into] = ACTIONS(179),
    [anon_sym_nameof] = ACTIONS(179),
    [anon_sym_new] = ACTIONS(179),
    [anon_sym_using] = ACTIONS(179),
    [anon_sym_value] = ACTIONS(179),
    [anon_sym_global] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_operator] = ACTIONS(179),
    [anon_sym_params] = ACTIONS(179),
    [anon_sym_this] = ACTIONS(179),
    [anon_sym_typeof] = ACTIONS(179),
    [anon_sym_default] = ACTIONS(179),
    [anon_sym_equals] = ACTIONS(179),
    [anon_sym_long] = ACTIONS(179),
    [anon_sym_out] = ACTIONS(179),
    [anon_sym_ref] = ACTIONS(179),
    [anon_sym_sizeof] = ACTIONS(179),
    [anon_sym_descending] = ACTIONS(179),
    [anon_sym_ascending] = ACTIONS(179),
    [anon_sym_dynamic] = ACTIONS(179),
    [anon_sym_fixed] = ACTIONS(179),
    [anon_sym_group] = ACTIONS(179),
    [anon_sym_is] = ACTIONS(179),
    [anon_sym_get] = ACTIONS(179),
    [anon_sym_set] = ACTIONS(179),
    [anon_sym_on] = ACTIONS(179),
    [anon_sym_remove] = ACTIONS(179),
    [anon_sym_stackalloc] = ACTIONS(179),
    [anon_sym_unchecked] = ACTIONS(179),
    [anon_sym_as] = ACTIONS(179),
    [anon_sym_base] = ACTIONS(179),
    [anon_sym_61] = ACTIONS(177),
    [anon_sym_62] = ACTIONS(179),
    [anon_sym_63] = ACTIONS(177),
    [anon_sym_64] = ACTIONS(177),
    [anon_sym_65] = ACTIONS(177),
    [anon_sym_66] = ACTIONS(177),
    [anon_sym_67] = ACTIONS(177),
    [anon_sym_68] = ACTIONS(177),
    [anon_sym_69] = ACTIONS(177),
    [anon_sym_int] = ACTIONS(179),
    [anon_sym_bool] = ACTIONS(179),
    [anon_sym_string] = ACTIONS(179),
    [anon_sym_float] = ACTIONS(179),
    [anon_sym_char] = ACTIONS(179),
    [anon_sym_double] = ACTIONS(179),
    [anon_sym_byte] = ACTIONS(179),
    [anon_sym_decimal] = ACTIONS(179),
    [anon_sym_sbyte] = ACTIONS(179),
    [anon_sym_short] = ACTIONS(179),
    [anon_sym_uint] = ACTIONS(179),
    [anon_sym_ushort] = ACTIONS(179),
    [anon_sym_object] = ACTIONS(179),
    [anon_sym_ulong] = ACTIONS(179),
    [anon_sym_70] = ACTIONS(177),
    [anon_sym_71] = ACTIONS(177),
    [anon_sym_72] = ACTIONS(179),
    [anon_sym_73] = ACTIONS(179),
    [anon_sym_74] = ACTIONS(179),
    [anon_sym_75] = ACTIONS(179),
    [anon_sym_76] = ACTIONS(179),
    [anon_sym_77] = ACTIONS(179),
    [anon_sym_78] = ACTIONS(179),
    [anon_sym_79] = ACTIONS(179),
    [anon_sym_80] = ACTIONS(179),
    [anon_sym_81] = ACTIONS(179),
    [anon_sym_82] = ACTIONS(179),
    [anon_sym_83] = ACTIONS(177),
    [anon_sym_84] = ACTIONS(177),
    [anon_sym_85] = ACTIONS(177),
    [anon_sym_86] = ACTIONS(177),
    [anon_sym_87] = ACTIONS(177),
    [anon_sym_88] = ACTIONS(177),
    [anon_sym_89] = ACTIONS(177),
    [anon_sym_90] = ACTIONS(177),
    [anon_sym_91] = ACTIONS(177),
    [anon_sym_92] = ACTIONS(177),
    [anon_sym_93] = ACTIONS(177),
    [anon_sym_94] = ACTIONS(179),
    [anon_sym_95] = ACTIONS(177),
    [anon_sym_96] = ACTIONS(179),
    [anon_sym_97] = ACTIONS(179),
    [anon_sym_98] = ACTIONS(179),
    [anon_sym_99] = ACTIONS(179),
    [anon_sym_100] = ACTIONS(179),
    [anon_sym_101] = ACTIONS(179),
    [anon_sym_102] = ACTIONS(179),
    [anon_sym_103] = ACTIONS(177),
    [sym_type] = ACTIONS(177),
    [sym_comment] = ACTIONS(177),
    [aux_sym_z_token1] = ACTIONS(179),
    [aux_sym_z_token2] = ACTIONS(179),
    [aux_sym_z_token3] = ACTIONS(177),
    [sym_str] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_104] = ACTIONS(177),
    [anon_sym_105] = ACTIONS(177),
    [anon_sym_106] = ACTIONS(177),
    [anon_sym_107] = ACTIONS(177),
    [anon_sym_108] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [sym_int] = ACTIONS(179),
    [anon_sym_null] = ACTIONS(179),
    [anon_sym_109] = ACTIONS(177),
    [sym_real] = ACTIONS(179),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(181), 1,
      aux_sym_char_token1,
    ACTIONS(183), 1,
      sym_escape_sequence,
  [7] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [11] = 1,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 7,
  [SMALL_STATE(18)] = 11,
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
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(5),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(6),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(7),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(8),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(9),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(3),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(11),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(12),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(12),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(13),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(16),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(14),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__repeat1, 2), SHIFT_REPEAT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cat, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flow, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flow, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_z, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_z, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bt, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bt, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
