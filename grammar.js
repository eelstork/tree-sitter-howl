module.exports = grammar({

  name: 'Howl',
  word: $ => $.id,

  rules: {

    Σ   : $ => repeat($._e),
    _e  : $ => choice($.str, $.id),
    id  : $ => /[^\s"]+/,
    str : $ => token(seq(
            '"', repeat(choice( /[^"]/, '""' )), '"'
          ))
    //return     : $ => 'return',

  }

});
