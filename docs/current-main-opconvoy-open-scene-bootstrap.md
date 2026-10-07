# Current Main.dll OpConvoy open-scene bootstrap

This slice starts at a verified event path. Byte-matched `FUN_587BB700`
dispatches event `0x80000500` to `FUN_587E8A40` at `0x587BC7CB`; the route is
described in [the event-queue notes](current-main-event-queue.md). The matched
`FUN_587E8A40` compares its state word at `+0x105A2` with 7, loads the object
at `+0x21F04`, and calls `FUN_587CCEC0` at `0x587E8ADB` only on the state-7
branch. The focused verifier checks the mapped instructions for both calls and
the complete state gate.

Ghidra shows `FUN_587CCEC0` setting receiver `+0x18` to 2, lazily allocating a
`0x24`-byte child at `+0x28`, and calling `FUN_587CE2F0` to initialize it. That
helper installs the Ghidra-labeled `COpConvoy_OpenSceneManager` vtable and
initializes its observed fields. The root then calls matched helper
`FUN_587CE310(2)` and `FUN_587CE3D0` with the position fields at `+0x1C` and
`+0x20`; afterward it clears two observed global flag bits, calls matched
`FUN_587CCAA0` four times, and accumulates two categories from the global object
list into receiver fields `+0xA4` and `+0xA8`.

`FUN_587CE3D0` stores its input coordinates and writes screen-origin values
`x - 0x200` and `y - 0x180` to global fields `+0x1052C` and `+0x10530`. It
requests three `0x2C0`-byte objects and initializes them through the labeled
`COpConvoy_DA_Cargo` and `COpConvoy_DA_Fighter` constructors. Their supplied
positions are `(x, y + 0x1EA)`, `(x - 100, y + 600)`, and
`(x + 100, y + 0x244)`; each constructor receives the constant `10000`. The
constructor chain reaches `FUN_587CB6B0`, which initializes a
`COpConvoy_DummyAircraft` record, stores input coordinates in direct and
3000-scaled fields, and creates a Ghidra-labeled `CSpriteBundleScreen` child.

After constructing the three objects, the scene initializer calls
`FUN_58902F50` for each and writes 15 indexed coordinate/value entries through
`FUN_587CB340`. That helper writes fields at `+0x218` and `+0x21C`, stores the
third value in a 16-byte-strided indexed area, and sets the entry's enabled
field at `+0x224`. The index, coordinates, constants, and call order are
preserved from the mapped instructions; their visual and timing meanings are
not established.

The direct-call closure added here contains eight functions and 3,239 bytes in
nine exact Ghidra body ranges. Every selected function is reachable from
`FUN_587CCEC0`; all 37 transfers leaving the closure target byte-verified
functions, with no unresolved target or instruction-coverage gap.

| Function | Bytes | In-slice direct callees |
| --- | ---: | --- |
| `587CA820` | 438 | `587CB6B0` |
| `587CAD90` | 13 | — |
| `587CAF30` | 672 | `587CB6B0` |
| `587CB340` | 59 | — |
| `587CB6B0` | 768 | — |
| `587CCEC0` | 296 | `587CE2F0`, `587CE3D0` |
| `587CE2F0` | 30 | — |
| `587CE3D0` | 963 | `587CA820`, `587CAF30`, `587CAD90`, `587CB340` |

The exact ranges are in
`config/NF2_2026/main-opconvoy-open-scene-bootstrap-body-ranges.tsv`. ObjDiff
3.8.0 verifies all eight emitted instruction streams at 100%. The focused
verifier checks the state-7 call path, all 24 in-closure callsites, complete
instruction coverage, direct-call closure, and all 37 verified boundary
transfers.

This is a byte-exact emitted instruction slice, not recovered readable source.
Resource-table meanings, object and record schemas, coordinate units, timing
semantics, actual rendered appearance, and server-authoritative event effects
remain unresolved. No emulator runtime or visual test was run.
