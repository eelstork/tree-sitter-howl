module.exports = grammar({

        name: 'Howl', word: $ => $.identifier, rules: {

            source_file: $ => repeat($._definition),
            _definition: $ => choice($.return, $.identifier),
            return     : $ => 'return',
            identifier : $ => /[a-z]+/,

        }
});
