# Current Main `CWarehouseItem` deleting wrapper

`FUN_588F7D40` is the only incoming data reference Ghidra records at slot
`+0x00` of the RTTI-backed `CWarehouseItem` vtable at `0x589A20D4`. It calls the
class destructor body `FUN_588F7C00` at `0x588F7D43`. Its instructions preserve
`this`, test bit 0 of the stack flag, conditionally pass `this` to the callback
thunk `FUN_5897CC42`, then return `this` with `ret 4`.

Ghidra assigns 27 bytes in two ranges, `[0x588F7D40, 0x588F7D55)` and
`[0x588F7D58, 0x588F7D5E)`. This skips the reachable `add esp, 4` at
`0x588F7D55..0x588F7D58` between the callback call and the return path. The
mapped stream is contiguous for 30 bytes, including that cleanup and `ret 4`
at `0x588F7D5B`; `INT3` padding begins at `0x588F7D5E`. The match covers this
complete physical stream. The callback is a six-byte indirect jump through
import slot `0x5898C1F8`; its deallocation semantics and runtime return behavior
have not been confirmed.

The deleting-wrapper classification follows its vtable position, destructor
call, bit-0 flag test, conditional callback, and `ret 4` cleanup. Ghidra marks
the callback thunk non-returning, so the mapped cleanup path's runtime behavior
has not been exercised in the emulator.
