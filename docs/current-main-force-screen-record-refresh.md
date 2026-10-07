# Current Main 0x80020D0D record-driven screen refresh

Byte-matched message dispatcher `FUN_587BB700` calls `FUN_588B4980` at
`0x587BDF0A` in its `0x80020D0D` branch. Ghidra shows the branch passing the
record pointer and payload-size value. The receiver and message route are
therefore tied to the installed client's dispatcher, while the payload format
and screen effect remain only partly understood.

## Behavior visible in the mapped code

The refresh first calls each existing entry's first virtual method with delete
flag `1`, clears the two observed pointer-array entries, releases the arrays
through `FUN_5897CC42`, and resets their counts. If the supplied payload size
exceeds six bytes, it reads two 16-bit counts. The first count describes
repeated records beginning at payload offset `+6`; each record is `0x180` bytes.
For every entry, the code allocates `0x27C` bytes and calls verified
`FUN_5877CC30`. That constructor installs the RTTI-supported `CForce` vtable
and copies record words into the object, as documented in the
[`CForce` constructor notes](current-main-force-constructor.md).

The second count describes records after the first collection. For each one,
the refresh calls verified `FUN_588E9F60` with pointers at the record start and
`+0xB8`; the next record begins after `0xB8 + ((header_word >> 1) & 0x1F) *
0x18` bytes. After construction, the routine walks two existing screen object
collections through verified indexed helpers. It then passes the first new
collection through `FUN_588F44D0` and the second through `FUN_588F3F20`.

`FUN_588F3F20` appends an item to a doubly linked collection: the receiver's
head, tail, and count are at `+4`, `+8`, and `+0xC`, and each item uses links at
`+0xCE0` and `+0xCE4`. `FUN_588F44D0` calls verified `FUN_5877B130` twice with
the supplied item and returns it. The refresh finishes by writing `0x000B` to
receiver `+0xCE`, writing `1` to `+0x1CC`, and invoking virtual slot `+0x08`.

Fresh Ghidra assigns the root 997 bytes in six complete ranges and the two
helpers 70 and 33 bytes. ObjDiff verifies the complete 1,100-byte closure at
100.0%, including all 38 mapped operand records in the root and the two calls
inside `FUN_588F44D0`. The
[focused verifier](../tools/verify_current_main_force_screen_record_refresh.py)
checks all eight ranges, 335 decoded instructions, the 25 direct calls, the
matched dispatcher callsite, and verified status for every direct target. The
instruction-stream sources are
[`FUN_588b4980.cpp`](../src/client-current/Main/FUN_588b4980.cpp),
[`FUN_588f3f20.cpp`](../src/client-current/Main/FUN_588f3f20.cpp), and
[`FUN_588f44d0.cpp`](../src/client-current/Main/FUN_588f44d0.cpp); exact ranges
are recorded in
[`current-main-force-screen-record-refresh-body-ranges.tsv`](../config/NF2_2026/current-main-force-screen-record-refresh-body-ranges.tsv).

The two counts' domain meaning, both record schemas, ownership and purpose of
the first collection, contracts of the indirect callbacks and allocation
helpers, and the visible screen result remain unresolved. The matched message
branch proves the local client route, not compatibility with a live server.
This is static byte-match evidence; no client or emulator runtime test was
performed.
