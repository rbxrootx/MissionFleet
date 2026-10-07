# Battle-room page constructors

This subsystem covers the shared `CBattleRoomOnPage` constructor, its 17 mode-specific derived constructors, and the five open helpers directly called by the shared constructor. It is a byte-matching reconstruction of the installed 2026 `Main.dll`; it does not claim to recover the original C++ source or complete game behavior.

## Evidence from the installed client

Ghidra's decompilation of `FUN_5874BCF0` installs `CBattleRoomOnPage::vftable`, initializes receiver fields, creates and stores child widgets including a `CChatroomTitleBox`, and calls the nested `FUN_58878230` helper. The base body has two Ghidra ranges, `[0x5874BCF0,0x5874C28C]` and `[0x5874C290,0x5874C6BB]`, with complete instruction coverage across 2,505 bytes. The gap between ranges is excluded from the function body.

The 17 incoming constructors each directly call the base body and then install a named derived vtable. The four longer constructors also make additional helper calls after the base call. The remaining 13 share a 57-byte constructor form. The names below are the vtable labels recovered from the mapped image; they are not inferred gameplay definitions.

| Constructor | Vtable written | Bytes | Base call site |
|---|---|---:|---:|
| `5874C6C0` | `CBattleRoomOnPage_AlliedvsAxis` | 57 | `5874C6E8` |
| `5874C8B0` | `CBattleRoomOnPage_Battle` | 57 | `5874C8D8` |
| `5874CA60` | `CBattleRoomOnPage_Betting` | 235 | `5874CAAD` |
| `5874CE40` | `CBattleRoomOnPage_Blitz` | 57 | `5874CE68` |
| `5874D380` | `CBattleRoomOnPage_Convoy` | 57 | `5874D3A8` |
| `5874D560` | `CBattleRoomOnPage_DKT` | 57 | `5874D588` |
| `5874D720` | `CBattleRoomOnPage_DKT2` | 57 | `5874D748` |
| `5874D8B0` | `CBattleRoomOnPage_Dummy` | 57 | `5874D8D8` |
| `5874DC80` | `CBattleRoomOnPage_FLB` | 269 | `5874DCD0` |
| `5874DD90` | `CBattleRoomOnPage_HCB` | 57 | `5874DDB8` |
| `5874DE10` | `CBattleRoomOnPage_Mission` | 57 | `5874DE38` |
| `5874E0A0` | `CBattleRoomOnPage_NightCombat` | 57 | `5874E0C8` |
| `5874E520` | `CBattleRoomOnPage_Occupation` | 208 | `5874E56F` |
| `5874EB40` | `CBattleRoomOnPage_SelectMode` | 248 | `5874EB90` |
| `5874EC40` | `CBattleRoomOnPage_Skirmish` | 57 | `5874EC68` |
| `5874EE50` | `CBattleRoomOnPage_Trade` | 57 | `5874EE78` |
| `5874EFE0` | `CBattleRoomOnPage_WAW` | 57 | `5874F008` |

The open helper closure is:

| Function | Bytes | Evidence from its Ghidra body | Base call site |
|---|---:|---|---:|
| `58750FC0` | 335 | Installs `CChatroomTitleBox::vftable`, calls the shared control initializer, and creates/stores child controls. | `5874C586` |
| `58750390` | 17 | Stores two arguments at receiver offsets `+0x50` and `+0x54`. | `5874C5D7` |
| `58878230` | 1,252 | Installs `CPannelInfoBattleRoom::vftable`, creates/stores child controls including three resource-selected children and a seven-entry repeated group, and updates child state. | `5874C62F` |
| `587B6010` | 10 | Stores its argument at receiver offset `+0x50`. | `5874C67E` |
| `587B5FD0` | 50 | Stores arguments at `+0x68` and `+0x60`, then conditionally derives values for `+0x64` and `+0x58`. | `5874C68D` |

The other direct callees from these bodies are 14 functions already marked byte-identical in the current verification catalog: `58731C60`, `58733280`, `58734A30`, `5875F420`, `587B62B0`, `58902CE0`, `58902D20`, `58902EE0`, `58902F50`, `589031A0`, `58907100`, `58907360`, `5897CC48`, and `5897CC4E`. The verifier checks every direct call/jump in the selected bodies against the indexed function inventory and rejects any open external target.

## Byte-match result

All 23 selected functions, totaling 5,870 bytes, compile byte-for-byte against the installed mapped `Main.dll` with ObjDiff 3.8.0. The shared constructor's two body ranges are emitted separately. All 22 intra-subsystem direct `CALL` edges listed above were checked against their machine-code targets; the verifier also decoded 174 direct transfers across the 23 bodies and found no open indexed callees.

The repository progress counters consequently move from 7,715 to 7,738 matched functions and from 2,448,569 to 2,454,439 matched bytes out of 10,470,295. For the current `Main.dll` component, the change is 1,582 to 1,605 functions and 1,475,151 to 1,481,021 bytes.

## Uncertainty and runtime validation

The field offsets and resource/global references are instruction-level facts; their C++ member types and semantic names are still unknown. The mode names come from Ghidra's vtable labels, while exact mode behavior, UI text, asset appearance, and indirect virtual-call destinations remain unresolved. No emulator boot or screenshot comparison has been performed for this page family. The cluster is therefore validated for exact code matching and direct-call closure, not for runtime visual equivalence.

Run `python tools/verify_current_main_battle_room_page.py` to validate the saved byte-match records, exact body ranges, call sites, and direct-call closure.
