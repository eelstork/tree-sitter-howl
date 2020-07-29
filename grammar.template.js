module.exports = grammar({

  name: 'Howl',

  word: $ => $.id,

  rules: {

    Σ   : $ => repeat($._e),

    _e  : $ => choice( $.mod, $.cat, $.op, $.prim, $.bt, $.flow,
                       $.return, $.key, $.comment, $.z, $._lit, $.id, $.type ),

    _lit: $ => choice( $.null, $.bool, $.char, $.real, $.int, $.str ),

    mod : $ => choice(
      'public', 'internal', 'protected', 'private', 'static',
      'abstract', 'const', 'extern', 'override', 'partial',
      'readonly', 'sealed', 'unsafe', 'virtual', 'volatile',
      'explicit', 'implicit',
      __Mod__),

    cat : $ => choice(
      'class', 'interface', 'struct', 'enum', 'var', 'delegate',
      __Cat__),

    op : $ => choice(
      __Op__),

    return : $ => choice('return', __%return%__),

    flow: $ => choice(
      'async', 'await', 'by', 'if', 'else', 'foreach', 'in', 'for',
      'do', 'while', 'switch', 'case', 'break', 'yield',
      'try', 'catch', 'finally', 'continue', 'from', 'where',
      'select', 'throw', 'join', 'goto', 'lock', 'orderby',
      __Flow__),

    key: $ => choice(
      'add', 'using' ,
      'into', 'value', 'checked',
      'global', 'let', 'new',
      'operator', 'params', 'this', 'typeof', 'default', 'equals',
      'long', 'out', 'ref', 'sizeof', 'descending',
      'ascending', 'dynamic', 'fixed', 'group', 'is', 'get', 'set',
      'on', 'remove', 'stackalloc', 'unchecked', 'as', 'base',
      __Key__
    ),

    prim: $ => choice(
      'int', 'bool', 'string', 'float', 'char', 'double', 'byte',
      'decimal', 'sbyte', 'short', 'uint', 'ushort', 'object',
      'ulong',
      __Pr__
    ),

    // [any letter][any letter or digit],
    // similar to /[a-zA-Z_][a-zA-Z_0-9]*/ but with foreign
    // characters added.
    id  : $ => token(seq(
      optional('@'),
      /[\u00C0-\u1FFF\u2C00-\uD7FFa-z_][\u00C0-\u1FFF\u2C00-\uD7FF\w]*/,
    )),

    // Similar to id but these identifiers starting with [A-Z] are
    // assumed to represent type names
    type : $ => token(seq(
      optional('@'),
      /[A-Z][a-zA-Z_0-9]*/,
    )),

    comment: $ => token(choice(
      seq( '//', /.*/ ),
      seq( '/*', repeat(choice(/[^*]/, /\*[^/]/ )), '*/' )  )),

    // Match 'common' special characters, ie punctuation,
    // operators, brackets... in the ASCII range
    z: $ => choice(/[!-@]/, /[\x5b-\x60]/, /[\x7b-\x7d]/),

    str : $ => token(seq('"', repeat(choice( /[^"]/, '""' )), '"'  )),

    bool: $ => choice('true', 'false', __%true%__, __%false%__),

    bt: $ => choice(__%done()%__, __%cont()%__, __%fail()%__),

    char: $ => seq(
      "'", choice(token.immediate(/[^'\\]/), $.escape_sequence), "'"
    ),

    escape_sequence: $ => token(choice(
      /\\x[0-9a-fA-F][0-9a-fA-F]?[0-9a-fA-F]?[0-9a-fA-F]?/,
      /\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
      /\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
      /\\[^xuU]/,
    )),

    int: $ => token(seq(
      choice(
         (/[0-9_]+/),            // Decimal
         (/0[xX][0-9a-fA-F_]+/), // Hex
         (/0[bB][01_]+/)         // Binary
      ), optional(/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/)
    )),

    null: $ => choice('null', __%null%__),

    real: $ => {
      const suffix = /[fFdDmM]/;
      const exponent = /[eE][+-]?[0-9_]+/;
      return token(choice(
        seq( (/[0-9_]+/), '.', (/[0-9_]+/), optional(exponent),
                                            optional(suffix) ),
        seq( '.', (/[0-9_]+/), optional(exponent), optional(suffix) ),
        seq( (/[0-9_]+/), exponent, optional(suffix) ),
        seq( (/[0-9_]+/), suffix )
      ))
    },

  }  // end-rules

});
