# Current Main.dll null-safe pointer getter

`FUN_58759eb0` has 20 observed direct call sites: six in `0x58840890`, two in
`0x588450B0`, and twelve in `0x58890110`. Callers place the receiver in `ECX`.
The `0x588450B0` path tests the returned value for null, while `0x58840890`
chains repeated calls with different receiver fields.

The complete 17-byte function reads a pointer from receiver offset `+0x84`. If
that pointer is null, it returns null. Otherwise, it returns the DWORD at
offset `+0x04` of the pointed-to object. It has no stack arguments and returns
with plain `ret`; the byte verifier confirms all 17 bytes with zero relocations.

The receiver and nested object types, meanings of offsets `+0x84` and `+0x04`,
and higher-level purpose remain unknown. Caller use as a pointer does not
identify its domain role. No runtime behavior test was performed.
