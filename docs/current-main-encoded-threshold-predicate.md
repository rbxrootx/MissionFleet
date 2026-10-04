# Current Main.dll encoded-field predicate

`FUN_588DD2A0` is a 108-byte Boolean helper in the hash-pinned mapped
installed-client `Main.dll`. It is directly called by verified functions
`0x58856560`, `0x588E5150`, and `0x588E4260`; `0x58856560` contains repeated
callsites. Its full extent matches at 100% under objdiff, with all three mapped
operand targets checked.

The routine reads the low five bits of the word at the object rooted at
receiver `+0x100C`. It continues only for values 6 or 7 when receiver field
`+0x340` is zero. It decodes `+0xD98` by XOR with `0xAAAAAAAA`, converts that
signed integer to floating point, adds the float constant at `0x5898D788` on
the negative path, multiplies by the double at `0x589A1090`, and converts the
result to an integer through `0x5897CCA0`. It decodes `+0x398` with the same
XOR mask and returns 1 exactly when that decoded value is less than the
converted result; otherwise it returns 0. Callers test the result against 1.

The meanings of type values 6 and 7, fields `+0x340`, `+0xD98`, and `+0x398`,
the scale, and the surrounding gameplay condition remain unknown. This note
records the observed predicate without assigning it an inferred gameplay
name.
