module.exports = grammar({

  name: 'Howl',
  word: $ => $.id,

  rules: {

    Σ   : $ => repeat($._e),
    _e  : $ => choice($.key, $.comment, $.str, $.id),
    id  : $ => /[^\s"]+/,

    str : $ => token(seq(
      '"', repeat(choice( /[^"]/, '""' )), '"'  )),

    comment: $ => token(choice(
      seq( '//', /.*/ ),
      seq( '/*', repeat(choice(/[^*]/, /\*[^/]/ )), '*/' )  )),

    key: $ => choice('class', 'return')

  }

});
