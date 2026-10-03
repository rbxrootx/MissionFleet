# `CPannelSetNameOfNewShip` panel

## RTTI and construction path

The `FUN_588AC750` constructor installs vtable address `0x589A07A4`. Its
complete-object locator is `0x589A9670`, and TypeDescriptor `0x589CD474` names
`.?AVCPannelSetNameOfNewShip@@`. The verified `CMarketBoard` constructor
`FUN_58799EB0` calls it at `0x5879B32F`; after the call, it stores the returned
panel pointer at its own offset `+0x1CC`.

The 751-byte body initializes the `CMenuScreen` base through verified helper
`FUN_589031A0`, then installs the panel vtable. It builds controls at offsets
`+0x60` and `+0x6C` through verified constructors, and creates a `0xD4`-byte
child at `+0x70` with the RTTI-backed `CLoopSpriteBundleButton` constructor
`FUN_58794600`. It also initializes 32 consecutive `0x100`-byte records
beginning at `+0x80` and stores the incoming pointer at `+0x2080`. The sizes
and offsets are directly observed; the record and pointer roles remain
unknown.

The primary vtable has seven slots. All are byte-matched:

| Slot | Entry | Bytes | Observed path |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_588AC1B0` | 30 | Deleting destructor through cleanup body `FUN_588AC110`. |
| `+0x04` | `FUN_588AC1D0` | 150 | Resets observed text/control fields and dispatches child state. |
| `+0x08` | `FUN_588AC270` | 118 | Changes observed mode fields and dispatches child/manager state. |
| `+0x0C` | `FUN_588AC2F0` | 672 | Branches on state flags and text-buffer contents, updates receiver values, and routes helper calls. |
| `+0x10` | `FUN_588ACA40` | 226 | Handles observed selectors `0x100` and `0x20A` and table-dispatched input cases. |
| `+0x14` | `FUN_58902FE0` | 94 | Previously verified common method. |
| `+0x18` | `FUN_588ACB60` | 142 | Routes observed selectors 2, 3 and 4 to text or UI helpers. |

## Text and state helpers

Cleanup body `FUN_588AC110` destroys optional children at `+0x60`, `+0x6C`,
and `+0x70`, clears those pointers, then calls verified base cleanup
`FUN_58902C10`. Helper `FUN_588AC590` copies child text into one of 32 records
selected by `+0x78`, cycles that index according to `+0x7C`, checks the value
through the observed callback and `FUN_587A2D40`, then follows the mapped
success or failure path. `FUN_587A2D40` returns zero for null strings and
strings beginning with `/`; other values go to host callback `0x5898C03C`.
One successful path dispatches message `0x8001040A` through verified sender
`FUN_58970C70`; another reaches message helpers with selector `0x3E6`.

Other directly connected functions now match as well. `FUN_5875F940` clears
five receiver fields and the first word of a child buffer. `FUN_5888CC90` sets
or clears observed flags on two child pointers. `FUN_587B9870` forms the
`0x8001040A` message payload. `FUN_587626C0` measures a child region, clamps
its coordinates to dimensions at `0x58A28520`, and updates geometry through
verified helper `FUN_58903290`; `FUN_58762610` conditionally resets a field and
flag bits. The buffer-copy helper `FUN_58731CE0` is shared with another
verified constructor and copies at most 127 non-NUL bytes into the observed
buffer.

## Boundaries and validation

The original extent for deleting destructor `FUN_588AC1B0` was 27 bytes and
omitted `ret 4` at `0x588AC1CB`; the corrected extent is 30 bytes, followed by
two `int3` bytes. The `FUN_588AC1D0` extent was 143 bytes and omitted
`pop esi; ret` at `0x588AC265..0x588AC266`; its corrected extent is 150 bytes,
followed by seven `int3` bytes. Together the corrections add 10 identified
code bytes.

All 15 new functions pass ObjDiff 3.8.0 at 100%, totaling 3,147 bytes and 100
mapped operand targets. The panel and its direct helper path now have exact byte
matches; the text encoding, record schema, input/message contracts, prompt
behavior, control labels and visible action remain unresolved. No emulator
runtime or visual test was performed.
