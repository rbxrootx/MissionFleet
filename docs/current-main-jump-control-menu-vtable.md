# Current Main `CPannelJump_ControlMenuScreen` vtable

Ghidra identifies `FUN_58889640` as the constructor that installs
`CPannelJump_ControlMenuScreen::vftable`. The mapped image independently
contains the decorated RTTI name `.?AVCPannelJump_ControlMenuScreen@@` at
`0x589CD05C`. Its type descriptor at `0x589CD054` is referenced by the
complete-object locator at `0x589A9088`; the vtable header at `0x5899FB08`
points to that locator, so the method table begins at `0x5899FB0C`.

| Slot | Target | Bytes | Observed operation |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_588889D0` | 30 | Calls `FUN_58888480`, conditionally calls cleanup helper `0x5897CC42`, returns the receiver with `ret 4`. |
| `+0x04` | `FUN_58889200` | 194 | Updates state and child fields, branches on globals `0x58A24580` and `0x58A24598`, and dispatches child methods. |
| `+0x08` | `FUN_58888E30` | 156 | Sets the observed `0x400` state mode and dispatches through child methods at offsets `+0xDC` through `+0xF0`. |
| `+0x0C` | `FUN_588892D0` | 804 | Builds a 0x40-byte buffer, branches on state fields `+0xD0` and `+0xD2`, and traverses the child list through virtual slot `+0x0C`. |
| `+0x10` | `FUN_5873B360` | 69 | Searches the child chain when state bit 1 is set, calls each child through virtual slot `+0x10`, and returns a selected pointer or the list boundary. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously byte-matched helper; see the existing current-Main verification record. |
| `+0x18` | `FUN_588889F0` | 904 | Dispatches selector values `2`, `3`, `4`, and `0xEF10` against child pointers and invokes the corresponding helpers or callbacks. |

The next dword after slot `+0x18` is the ASCII data `MESS`, confirming the end
of this seven-entry table in the mapped image. For slot `+0x00`, disassembly
shows `ret 4` at `0x588889EB`; the three-byte return was missing from the old
27-byte inventory extent. Two `int3` bytes follow before the next indexed
function at `0x588889F0`, so the corrected extent is 30 bytes.

All seven entries now have recorded ObjDiff 3.8.0 matches, totaling 2,251
bytes. The six newly reconstructed bodies add 2,157 bytes; the pinned
`clang-cl` 19.1.4 verifier checked all six at 100% and audited 98 operand
targets. The preexisting `+0x14` method was verified in an earlier batch.
These sources preserve the captured x86 instruction streams; they do not
establish the complete high-level C++ implementation. The meanings of the
state bits, child fields, globals, and callback contracts remain unresolved.
No emulator or visual test was performed.
