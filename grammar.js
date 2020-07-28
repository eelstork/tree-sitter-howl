module.exports = grammar({

  name: 'Howl',
  word: $ => $.id,

  rules: {

    Σ   : $ => repeat($._e),
    _e  : $ => choice($.z, $.sym, $.key, $.comment, $.str, $.id),
    id  : $ => /[\u00C0-\u1FFF\u2C00-\uD7FF\w]+/,
    str : $ => token(seq(
      '"', repeat(choice( /[^"]/, '""' )), '"'  )),

    comment: $ => token(choice(
      seq( '//', /.*/ ),
      seq( '/*', repeat(choice(/[^*]/, /\*[^/]/ )), '*/' )  )),

    key: $ => choice('class', 'return', 'end'),

    sym: $ => choice('⤴', '⤵'),

    // Match 'common' special characters, ie punctuation,
    // operators, brackets... in the ASCII range
    z: $ => choice(/[!-@]/, /[\x5b-\x60]/, /[\x7b-\x7d]/)

  }

});
