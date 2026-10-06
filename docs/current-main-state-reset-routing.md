# Current Main state reset and mode routing

`FUN_588DA9E0` is a 54-byte helper called by two byte-matched client handlers.
`FUN_587FAEC0` calls it at `0x587FB056` with `ECX=ESI` on the path where the
observed `CL` value is `0x40`. `FUN_587FD890` calls it at `0x587FE06E` with
`ECX` loaded from `[0x58A247F8] + 4`. Its Ghidra output places that call on the
path where `(param_1[+0x24] & 0x1F00) == 0x200`, `param_1[+0x218E0]` is nonzero,
and `FUN_588D66E0()` returns nonzero. The call instructions and register setup
are preserved in the verified sources
[`FUN_587faec0.cpp`](../src/client-current/Main/FUN_587faec0.cpp) and
[`FUN_587fd890.cpp`](../src/client-current/Main/FUN_587fd890.cpp). The latter
caller path is also visible in `var/current-main-next/587fd890-ghidra.c`.

The helper clears bit 0 in the receiver's word at `+0x24` and writes zero to
its DWORD at `+0x6088`. It then loads the pointer at `0x58A2459C` and checks
the DWORD at that object's `+0x218E0`. The helper call keeps that global pointer
in `ECX` and passes the original receiver and mode on the stack: `(receiver, 5)`
for nonzero and `(receiver, 1)` for zero. Both paths return immediately after
the call. The complete instruction stream
contains one mapped global-pointer operand and two mapped relative-call
operands.

The receiver field meanings, global state meaning, reason these conditions
select modes 1 and 5, and their downstream visible effect remain unresolved.
`FUN_587E8750`'s observed contract is documented separately. The global pointer is
dereferenced without a local null check. The behavior above is tied to the
mapped instructions and verified caller paths; no emulator runtime test was
performed. ObjDiff 3.8.0 is used to compare the rebuilt body with the
installed client.
