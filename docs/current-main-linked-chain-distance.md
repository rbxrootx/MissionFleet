# Current Main linked-chain distance helper

`FUN_589081C0` is a 32-byte helper directly called by eight verified current
Main.dll functions: `FUN_58797960`, `FUN_5879B3B0`, `FUN_5879D3F0`,
`FUN_5879D480`, `FUN_5879DD90`, `FUN_58840890`, `FUN_588450B0`, and
`FUN_588B96B0`. Each caller is evidence that this helper is shared; the specific
role of the helper in each caller remains under investigation.

The captured instructions read a start pointer from receiver offset `+0x78`
and a boundary pointer from `+0x84`. Starting at the first pointer, the helper
follows each node's link at offset `+0x14`, incrementing a counter for every
link. It returns the count when the boundary pointer is reached, and `-1` if
the start or an intermediate link is null. No assumptions about the receiver's
class or the meaning of the returned count are needed to match the observed
behavior.

The reconstruction at `src/client-current/Main/FUN_589081c0.cpp` emits the full
32-byte instruction stream. `tools/verify_client_matches.py` compiled it with
the pinned clang-cl path and objdiff 3.8.0 confirmed 32/32 bytes with no
relocations. The regular legacy MSVC 6 compiler cannot launch in this Windows
environment (WinError 623), so the builder records this literal instruction
stream with the project's pinned clang-cl verification path.
