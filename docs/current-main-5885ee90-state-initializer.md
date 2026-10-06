# Current Main.dll receiver-state initializer

`FUN_5885EE90` is a 1,277-byte ECX-receiver function in the installed Main.dll
capture. Ghidra assigns two body ranges: `[0x5885EE90,0x5885F198)` and
`[0x5885F1A0,0x5885F395)`. The eight intervening bytes are alignment NOPs and
are excluded from the reconstructed function.

Ghidra's reference list and an independent disassembly of the inventory agree
on exactly two incoming transfers, both from byte-matched callers. At
`0x58853863`, `FUN_588536C0` tail-jumps here after loading ECX from `[ESI+0xA0]`.
At `0x588572DF`, `FUN_58857020` makes a direct call after the same ECX load.
Neither path passes stack arguments.

The Ghidra decompilation shows extensive initialization of receiver fields and
child-related arrays. It calls `FUN_587A15E0` for five entries beginning at
`+0x120`, writes a repeated constant into eight words beginning at `+0x184`,
clears `0x424` bytes at `+0x1AC`, calls `FUN_58907360(0)` five times, and resets
flags and fields on several child pointers. It then reads shared-object state
and scans records in the table rooted at `0x58A247F8`, stepping by `0x20` from
offset `0xA0` to below `0x400`. The scan compares type/category bytes and
encoded values using constants that include `0x5898CB10` and `0x5899EB20`; it
stores selected values at receiver offsets `+0xB4`, `+0xB8`, `+0xBC`, and
`+0xC4`, then updates child fields. Ghidra renders the final `FUN_58793E00`
transfer as call-and-return; mapped bytes show a tail jump at `0x5885F390`.

The source preserves both mapped ranges independently, and objdiff verifies
byte identity for all 1,277 bytes. The receiver, child and table types, field
meanings, encoded-value format, selection policy, constants, and helper
contracts remain unresolved. Ghidra also warns that block `0x5885F26F` is
unreachable. No emulator runtime test has been performed.
