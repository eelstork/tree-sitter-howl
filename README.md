# Howl protogrammar

This is a work in progress for a simple Howl grammar.
This public package is primarily consumed via [language-howl](https://github.com/eelstork/language-howl)

# Dev notes

This grammar is templated for symbol injection. The injection utility partakes the `Active/Howl` repository (scheduled for later publication).

Pending a qualified test suite, run tests before publishing:

```
tree-sitter generate
tree-sitter parse ex.howl
tree-sitter parse braces.howl
# (check no errors..)
# (commit and up....)
npm version 0.2.x
npm publish
```

After publishing update `tree-sitter-howl` version in [language-howl](https://github.com/eelstork/language-howl) and republish the language-howl package.
