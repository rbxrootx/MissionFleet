# Current Main.dll `CMovingSpriteDataScreen` class

## RTTI and construction evidence

The vtable address point is `0x5899A0CC`. Its Complete Object Locator is at
`0x589A6C0C`; the type descriptor at `0x589BA7DC` names the class
`.?AVCMovingSpriteDataScreen@@`. The verified
`CPannelJump_ControlMenuScreen` constructor `FUN_58889640` calls
`FUN_587B69E0` at `0x58889967`.

The 112-byte constructor calls helper `0x58731C60`, stores the supplied values
in receiver fields including `+4`, `+8`, `+0x50`, `+0x68`, and `+0x6C`, then
installs the RTTI-backed vtable. It also writes the observed initial constants
to `+0x54` (`0x40000000`), `+0x58` (`10`), `+0x5C` (`0x384`), and `+0x64` (`2`),
and clears fields at `+0x60` and `+0x70`.

## Destructor and vtable

| Slot | Function | Bytes | Captured behavior |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_587B67C0` | 36 | Reinstalls the class vtable, calls cleanup helper `0x589038B0`, invokes host thunk `0x5897CC42` when bit 0 of the stack deletion flag is set, then returns the receiver with `ret 4`. |
| `+0x04` | `FUN_58731770` | 30 | Previously byte-verified shared state method. |
| `+0x08` | `FUN_588A9ED0` | 39 | Previously byte-verified shared state method. |
| `+0x0C` | `FUN_587B67F0` | 484 | With receiver flag bit 2 set, examines mode bits in `+0x24`, compares `+4`/`+8` with cached fields `+0x68`/`+0x6C`, changes state fields on observed branches, calls helper `0x58902E10` on one path, and dispatches child slot `+0x0C` over the circular list at `+0x3C`. |
| `+0x10` | `FUN_5873B360` | 69 | Previously byte-verified shared method. |
| `+0x14` | `FUN_58903980` | 186 | Previously byte-verified shared method. |

Objdiff 3.8.0 verifies the three newly matched functions: **632 bytes and 12
mapped operands**. Together with the four previously verified shared slots,
all six identified vtable entries match. The scalar-deleting destructor's
extent was corrected from 33 to 36 bytes to include `ret 4`; the following
`int3` bytes are padding and excluded.

## Limits

The class identity, vtable ownership, and parent call site are confirmed by the
captured image and RTTI. Constructor parameter meanings, state-field meanings,
mode labels, the helper contract, and the custom method's user-visible effect
remain unresolved. Exact function-byte matching does not establish those
semantics; no emulator runtime or visual test was performed.
