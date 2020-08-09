# Howl protogrammar

This is a work in progress for a simple Howl grammar.
This public package is primarly for consuming in Atom.

# Dev notes

This grammar is templated for symbol injection. The injection utility partakes the `Active/Howl` repository (scheduled for later publication).

Pending a qualified test suite, run tests before publishing:

```
tree-sitter generate
tree-sitter parse ex.howl
tree-sitter parse braces.howl
# (check no errors..)
# (commit and up....)
npm publish
```
