# Current Main communication battle-record route

`FUN_588399A0` is a 471-byte handler in the installed 2026 `Main.dll` capture.
The mapped function ends with `ret 4` at `0x58839B74`; nine `INT3` bytes follow
before the next indexed function at `0x58839B80`. Objdiff 3.8.0 verifies the
complete body and 23 operand targets.

## Caller evidence

Verified handlers `FUN_587BB700` and `FUN_588C1650` reach this path from
message case `0x80020F06`. The call occurs when the selected child has mode
bits 1 or 2 and its state byte at `+0x2E5` is neither 2 nor 3. The caller
passes null when packet field `+0x10` is zero; otherwise it passes the incoming
record pointer.

## Observed behavior

The function acts only when receiver byte `+0x2E5` is 1. With a null record,
it dispatches `FUN_5876BAF0` using selector `0x24C` and zero values, calls
`FUN_58764D30`, then calls a virtual method on the shared receiver.

With a record, byte `+0x2E4` determines which of two receiver-referenced
objects has its observed state bits set or cleared. Record strings at `+0x0C`
and `+0x2D` are passed through `FUN_58731CE0` into receiver buffers `+0xC4`
and `+0xC8`. The function formats resource key `STRING_COMM_BATTLE_RECORD`
using record words `+0x46`, `+0x48`, and `+0x4A`, then writes the result to
receiver buffer `+0xCC`.

If global `0x58A0B4A0` is nonzero, the function sets receiver byte `+0x2E5` to
3 and calls `FUN_587B9290` with that global and zero. Otherwise it sets the
byte to 0, selects values through the object at receiver `+0x90`, updates
receiver fields `+0xBC` and `+0xC0` through `FUN_587316C0` and state helpers,
stores record dword `+0x50` at receiver `+0x30C`, and passes it to
`FUN_58907360`.

## Uncertainties

The record schema, identities of the referenced objects, meanings of the
state bits and global value, the null-record dispatch contract, and the exact
screen effect remain unknown. The resource key establishes a communication
battle-record context but not the protocol's full meaning. No emulator test
was performed.
