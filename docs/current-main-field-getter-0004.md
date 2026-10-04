# Current Main.dll field getter at `+0x04`

`FUN_587453a0` is a four-byte, no-argument getter called by
`0x5896CF50`, `0x5896E150`, and `0x5896F3E0`. Each caller tests at least one
returned value for null before continuing.

The mapped instructions load the DWORD at receiver offset `+0x04` and return it
unchanged. The complete extent matches with zero relocations. The receiver and
field types and the value's domain meaning remain unknown; null checks alone
do not prove that the field is a pointer. No runtime behavior test was
performed.
