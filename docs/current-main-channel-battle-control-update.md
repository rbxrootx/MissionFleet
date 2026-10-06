# `CPageChannelBattle_ControlMenuScreen` vtable

The RTTI-backed vtable address point at `0x5899B494` has seven function slots.
Its preceding word points to the Complete Object Locator at `0x589A7AD8`,
whose TypeDescriptor at `0x589CBFB8` names
`.?AVCPageChannelBattle_ControlMenuScreen@@`. The constructor
`FUN_587D26C0` installs this table, and `FUN_5878AF40` is the observed caller.
Ghidra reports no direct code callers for the virtual methods.

| Slot | Target | Exact matched bytes | Evidence |
| --- | --- | ---: | --- |
| `+0x00` | `FUN_587D3840` | 27 | Deleting-wrapper-shaped method; cleanup call and flag-controlled thunk call |
| `+0x04` | `FUN_587D3860` | 6,493 | Child/control update, timing, callback dispatch, and sprite-backed child rebuild |
| `+0x08` | `FUN_587D0940` | 348 | State and child-record initialization |
| `+0x0C` | `FUN_587D5B20` | 2,296 | Periodic transition update, child processing, and virtual dispatch |
| `+0x10` | `FUN_587D51D0` | 2,244 | Child event forwarding and message groups `0x100`, `0x200`, and `0x201` |
| `+0x14` | `FUN_5880AF30` | 91 | Existing exact match; target is also present in another menu vtable |
| `+0x18` | `FUN_587D1460` | 588 | Selector dispatch, linked-record traversal, registry access, and global dispatch |

The five newly matched bodies total 5,503 bytes. Ghidra reports these owned
ranges:

- `FUN_587D3840`: `0x587D3840..0x587D3855` (21 bytes) and
  `0x587D3858..0x587D385E` (6 bytes)
- `FUN_587D0940`: `0x587D0940..0x587D0A9C` (348 bytes)
- `FUN_587D5B20`: `0x587D5B20..0x587D5CD8` (440),
  `0x587D5CE0..0x587D5F53` (627), `0x587D5F60..0x587D5FB8` (88),
  `0x587D5FC0..0x587D6278` (696), `0x587D6280..0x587D6319` (153), and
  `0x587D6320..0x587D6444` (292 bytes)
- `FUN_587D51D0`: `0x587D51D0..0x587D571D` (1,357 bytes) and
  `0x587D5720..0x587D5A97` (887 bytes)
- `FUN_587D1460`: `0x587D1460..0x587D16AC` (588 bytes)

`FUN_587D3860` separately matches 6,493 bytes in three Ghidra ranges:
`0x587D3860..0x587D3DFC` (1,437), `0x587D3E00..0x587D4788` (2,441), and
`0x587D4790..0x587D51C6` (2,615). Together with the already matched
`FUN_5880AF30`, all seven vtable targets now have ObjDiff byte-identical
records. The five new records passed 367 mapped-operand checks.

## Limits and unresolved behavior

The wrapper at `FUN_587D3840` calls cleanup body `FUN_587D03D0`. Ghidra marks
thunk `FUN_5897CC42` as non-returning, but the mapped bytes at `0x587D3855`
contain an `add esp,4` continuation leading to a shared `ret 4`. Those three
continuation bytes are outside the Ghidra-owned match, and the thunk target is
outside this image; the delete-path control flow remains uncertain.

Ghidra did not recover the indirect jump table at `0x587D6442` in
`FUN_587D5B20` and represented the final transfer as a call. Event IDs,
selectors, field roles, and indirect helper contracts in the other methods
remain only partially understood. This work proves exact compiled bytes for
the selected function ranges against the captured installed `Main.dll`; it
does not establish runtime behavior. No emulator runtime test was performed.
