# Current Main ship-map conditional forwarder

Verified `CShip_MapObjectScreen` update `FUN_588E5150` calls `FUN_5875CD10` at
`0x588E6047`, after checking `[0x58A2459C]+0x105F0 == 6` and loading ECX from
`[this+0x21F08]`. Verified update `FUN_587FD890` calls it at `0x587FEC68`,
after checking its own `+0x105F0` word for 6 and loading ECX from
`[this+0x21F08]`. The ship-map call appears in
[`FUN_588e5150.cpp`](../src/client-current/Main/FUN_588e5150.cpp); the other
update path is in
[`FUN_587fd890.cpp`](../src/client-current/Main/FUN_587fd890.cpp).

With that object in ECX, the helper loads the dword at `[0x58A247F8]+4`. If it
matches either receiver dword at `+0x50` or `+0x54`, the helper loads ECX from
`0x58A24588` and tail-jumps to `FUN_587BA550`. If neither comparison matches,
it returns. The `+0x50/+0x54` values, global pointer meanings, and stage gate
remain unidentified. The tail target is a verified fixed-message sender thunk;
its evidence is in [the stage-six sender notes](current-main-stage-six-signal-sender.md).

The indexed body is 30 bytes, ending with `ret` at `0x5875CD2D`; the next
indexed function starts at `0x5875CD30`; two `INT3` padding bytes occupy
`0x5875CD2E..0x5875CD2F` outside the body. ObjDiff 3.8.0 verifies all 30 bytes
and three mapped operand targets at 100.0%. No runtime client or emulator test
was performed. The emitted instruction stream is in
[`FUN_5875cd10.cpp`](../src/client-current/Main/FUN_5875cd10.cpp).
