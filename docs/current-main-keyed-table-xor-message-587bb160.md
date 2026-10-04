# Current Main.dll keyed-table message helper

`FUN_587BB160` accepts a selector and value and uses its receiver's `+0x40`
table descriptor and `+0x58` field. Selectors 0 through 3 are replaced with
fixed DWORD constants; values outside that range pass through. The helper
computes `((receiver[+0x58] * 13) % descriptor[+4])`, reads three DWORDs from
the table at that index, and XORs them with values observed in the caller
stack and shared state at `0x58A2459C + 0x10490`. It submits the resulting
values through `0x58970C70` as message `0x80013112`, followed by arguments 4
and 0.

Verified callers provide two distinct contexts: `FUN_587ECAB0` passes
selector 0 and a packed pair, while `FUN_588DF450` passes selector 3 during
an object-update/transition path. This establishes where the helper is used,
but not the table schema, selector meanings, XOR inputs' semantic roles, or
the server-side interpretation of message `0x80013112`.

The complete 178-byte function matches mapped `Main.dll` under objdiff 3.8.0;
both mapped operand targets were checked. No runtime client, server, or
emulator packet test was performed.
