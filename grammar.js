module.exports = grammar({

  name: 'Howl',
  word: $ => $.id,

  //extras: $ => [
  //    $.comment,
  //    /[\s\u00A0\uFEFF\u3000]+/,
  //],

  rules: {

    Σ   : $ => repeat($._e),
    _e  : $ => choice($.sym, $.key, $.comment, $.z, $._lit, $.id),

    // Here this is [any letter][any letter or digit],
    // similar to /[a-zA-Z_][a-zA-Z_0-9]*/ but with foreign
    // characters added.
    id  : $ => token(seq(
      optional('@'),
      /[\u00C0-\u1FFF\u2C00-\uD7FFa-zA-Z][\u00C0-\u1FFF\u2C00-\uD7FF\w]*/,
    )),

    comment: $ => token(choice(
      seq( '//', /.*/ ),
      seq( '/*', repeat(choice(/[^*]/, /\*[^/]/ )), '*/' )  )),

    key: $ => choice('class', 'return', 'end'),

    sym: $ => choice('⤴', '⤵'),

    // Match 'common' special characters, ie punctuation,
    // operators, brackets... in the ASCII range
    z: $ => choice(/[!-@]/, /[\x5b-\x60]/, /[\x7b-\x7d]/),

    // LITERALS

    _lit: $ => choice(
      $.null, $.bool, $.char, $.real, $.int, $.str
    ),

   str : $ => token(seq(
     '"', repeat(choice( /[^"]/, '""' )), '"'  )),

   bool: $ => choice('true', 'false'),

   char: $ => seq(
     "'",
     choice(token.immediate(/[^'\\]/), $.escape_sequence),
     "'"
   ),

   escape_sequence: $ => token(choice(
     /\\x[0-9a-fA-F][0-9a-fA-F]?[0-9a-fA-F]?[0-9a-fA-F]?/,
     /\\u[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
     /\\U[0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F][0-9a-fA-F]/,
     /\\[^xuU]/,
   )),

   int: $ => token(seq(
     choice(
       (/[0-9_]+/), // Decimal
       (/0[xX][0-9a-fA-F_]+/), // Hex
       (/0[bB][01_]+/) // Binary
     ),
     optional(/u|U|l|L|ul|UL|uL|Ul|lu|LU|Lu|lU/)
   )),

   null: $ => 'null',

   real: $ => {
     const suffix = /[fFdDmM]/;
     const exponent = /[eE][+-]?[0-9_]+/;
     return token(choice(
       seq(
         (/[0-9_]+/),
         '.',
         (/[0-9_]+/),
         optional(exponent),
         optional(suffix)
       ),
       seq(
         '.',
         (/[0-9_]+/),
         optional(exponent),
         optional(suffix)
       ),
       seq(
         (/[0-9_]+/),
         exponent,
         optional(suffix)
       ),
       seq(
         (/[0-9_]+/),
         suffix
       )
     ))
   },

  }

});
