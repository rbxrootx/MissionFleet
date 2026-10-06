# `FUN_588DEB30`: ship-map object child and resource refresh

The candidate at [`src/client-current/Main/FUN_588deb30.cpp`](../src/client-current/Main/FUN_588deb30.cpp)
preserves 1,858 body bytes across `[0x588DEB30, 0x588DEDEE)` and
`[0x588DEDF0, 0x588DF274)`. The omitted two-byte interval is `8B FF`
(`mov edi,edi`), and the second range ends with `ret 4` at `0x588DF271`.

Ghidra records one call from the byte-matched `CShip_MapObjectScreen` update
method `FUN_588E5150` at `0x588E64AF`, plus a second from unmatched
`FUN_587CD000` at `0x587CD203`. In the matched update, state `0x60000` reaches
this function when field `+0x664C` is zero and pushes 1; otherwise the caller
decrements `+0x664C`. The call does not explicitly reload ECX immediately
before entering the function, so the receiver value and ABI remain uncertain:
Ghidra models a one-argument fastcall, while the target uses ECX as an object
base and returns with `ret 4`.

The body sets an observed state value `0x50000` at object `+0x6090`, resets
flags/counters, copies selected resource fields into child objects, and scans
32 resource/text slots using first-byte cases 5, 6, and carriage return. It
refreshes progress/status fields and, when the object equals the global
current object, enters a battle/rejoin UI path. It calls `FUN_587EC270`, then
uses the stack flag to select `FUN_588DE5C0` or drain eight child lists through
a child virtual method.

Field identities, the stack-flag contract, child/resource roles, helper
effects, and visible UI behavior remain uncertain. No runtime or emulator
test has been performed; the byte match verifies native code identity only.
