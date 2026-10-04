# Current Main bounded record insertion helper

`FUN_5877ABA0` is a 151-byte helper directly called by six verified functions:
`FUN_5873FE80`, `FUN_587EFD60`, `FUN_58853C20`, `FUN_58856560`,
`FUN_588E4260`, and `FUN_588E5150`. The callers load the receiver and pass a
string-like pointer together with two integer arguments. Some call paths first
pass fixed addresses through a callback at `0x5898C030`; the callback's identity
and the strings' displayed meanings are not established.

The captured instructions read a collection pointer from receiver offset
`+0x264` and return when its count at `+0x08` is at least `0x7F`. Otherwise,
they allocate a `0x88`-byte record. Three indirect callbacks at `0x5898C1A8`,
`0x5898C194`, and `0x5898C198` measure/copy the first argument into the
record's first `0x80` bytes, including a bounded path when its length is at
least `0x80`. The helper writes the other arguments at record offsets `+0x80`
and `+0x84`.

It then advances the collection index at `+0x0C`, wrapping at the bound stored
at `+0x04`. When the resulting index differs from the value at `+0x10`, it
writes the record pointer into the array at `+0x14` and increments the count.
When those indices match, the write and count increment are skipped. This is
consistent with a bounded or ring-style collection, but its exact policy and
the meaning of the indices are unresolved. The receiver class, two argument
roles, ownership of the allocated record on the skipped-write path, and
callback identities remain unknown.

The reconstruction at `src/client-current/Main/FUN_5877aba0.cpp` reproduces
the full indexed extent. `tools/verify_client_matches.py` reports 151/151 bytes
identical under objdiff 3.8.0, with five relocations checked. The legacy MSVC
6 compiler cannot launch in this Windows environment (WinError 623), so this
literal instruction stream uses the project's pinned clang-cl verification
path. No original-client runtime test was performed.
