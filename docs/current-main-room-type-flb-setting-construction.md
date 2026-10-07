# Main.dll FLB room-settings construction

Byte-matched `FUN_588C9280` is identified from the installed vtable as the
`CRoomSettingManager` constructor. It checks resource `0x7C` through
`FUN_5897CC4E`; on success it calls `FUN_588CD740` at `0x588CAC41` and stores
the returned pointer at receiver `+0x1A4`. The focused verifier checks this
resource gate, call, and result store against the captured instructions.

Fresh Ghidra output identifies `FUN_588CD740` as a `CRoomTypeFLB` constructor.
It initializes a `CRoomTypeObject` base, reads indexed room-resource entries,
creates two `CSpriteDataScreen` children through `FUN_5875DDA0`, and constructs
a `CPannelNormalRoomSetting` child through `FUN_58897930`. The constructor then
calls `FUN_58897850` while placing indexed child controls. That helper applies
the supplied coordinate offsets to eight child slots through
`FUN_58903290`. Ghidra also records a second, still-open call to
`FUN_58897930` from `FUN_588CF880` at `0x588CF908`.

The closed direct-call subsystem contains three functions / 2,603 bytes across
three exact Ghidra body ranges. The emitted instruction streams match the
installed mapped `Main.dll` at 100.0%; ObjDiff checked 82 mapped operand
relocations. All 40 direct transfers leaving the closure land in byte-matched
functions, and the verifier confirms the full decoded ranges and internal call
graph.

| Function | Bytes | Exact body range |
| --- | ---: | --- |
| `588CD740` | 861 | `[588CD740, 588CDA9D)` |
| `58897850` | 214 | `[58897850, 58897926)` |
| `58897930` | 1,528 | `[58897930, 58897F28)` |

The emitted source preserves the original instruction streams directly; the
Ghidra pseudocode supplies the behavior interpretation and caller grounding.
The room-resource schema and labels, child ownership, individual control
purposes, and actual rendered appearance remain unresolved. No original-client
visual or emulator runtime test has been performed.
