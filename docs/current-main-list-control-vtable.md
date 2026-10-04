# Current Main.dll linked-list control methods

The pinned installed `Main.mapped.bin` stores three RTTI-backed vtables:
`CListTextScreen` at `0x589A29CC`, `CListTextAutoLineScreen` at `0x589A1424`,
and `CRollListTextScreen` at `0x589A2B6C`. They share a message-dispatch body
at `0x58908520`, drawing body at `0x58908340`, and callback body at
`0x58908310`, occupying slots `+0x10`, `+0x14`, and `+0x38` in each table.
The lifecycle body at
`0x58908050` installs `0x589A29CC` into its receiver. The adjacent
[selection-successor method](current-main-list-successor-58908680.md) advances
the same receiver's `+0x84` linked node and may shift the first visible node
at `+0x80`.

The original inventory stopped the lifecycle body after 112 bytes, in the
middle of `mov ecx, [esp+0x14]`. The mapped instructions continue through the
`ret` at `0x589080D0`, making its complete body 129 bytes. The drawing body's
454-byte entry stopped after the first byte of a conditional jump. Its `ret
0x0C` at `0x5890850E` makes the complete body 465 bytes. Both returns are
followed by 15 `CC` padding bytes before the next function. The public and
local inventories now use these complete extents.

Four [instruction sources](../src/client-current/Main/) reproduce the captured
x86 bytes under objdiff 3.8.0:

| Entry | Bytes | Observed behavior |
| --- | ---: | --- |
| `0x58908050` | 129 | Installs table `0x589A29CC`, traverses receiver `+0x78` by node `+0x14`, calls `FUN_5897CC42` with each node's `+4` field, invokes its first virtual slot, then calls `FUN_58903450`. |
| `0x58908310` | 41 | When receiver `+0x30` exists and its flag bit 5 is set, invokes that object's virtual slot `+0x18`; returns receiver `+0x34`. |
| `0x58908340` | 465 | When receiver flag bit 0 is set, traverses children at `+0x4C`, clips a rectangle to the supplied bounds, draws nodes from receiver `+0x80` through a callback on `+0x50`, distinguishes selected node `+0x84`, and invokes a child virtual slot. |
| `0x58908520` | 209 | When receiver flag bit 1 is set, routes message IDs `0x100`, `0x102`, `0x201`, `0x202`, `0x204`, and `0x205` through six receiver virtual slots; other messages return receiver `+0x34`. |

The four bodies total 844 byte-identical bytes, with 13 mapped operand targets
checked. Five further methods complete the 16-slot table at `0x589A29CC`:

| Entry | Bytes | Slot(s) | Observed behavior |
| --- | ---: | --- | --- |
| `0x58907F70` | 6 | `+0x18/+0x20/+0x24/+0x28/+0x2C/+0x34` | Returns receiver `+0x34` with `ret 4`. |
| `0x589082E0` | 41 | `+0x3C` | Conditionally invokes the parent object's virtual slot `+0x18` with receiver, 2, and 0. |
| `0x589088B0` | 30 | `+0x00` | Calls `FUN_58908050`, optionally calls `FUN_5897CC42` when argument bit 0 is set, then returns the receiver. |
| `0x58908AA0` | 79 | `+0x30` | Tests coordinates read through `0x58A284C8` against receiver bounds and calls `FUN_58908750` on an in-bounds point. |
| `0x58908AF0` | 93 | `+0x1C` | Routes five input codes through an original jump table to select the first/last node, move backward/forward, or call an indirect callback. |

These five bodies add 249 byte-identical bytes and six checked operand targets.
The old 27-byte inventory entry for `0x589088B0` ended just before its `ret 4`;
the complete body is 30 bytes and has two following `CC` padding bytes.
For `0x58908AF0`, the captured selector table at `0x58908B68` and pointer table
at `0x58908B50` route codes `0x0D`, `0x23`, `0x24`, `0x26`, and `0x28` to the
callback, last node (`+0x7C`), first node (`+0x78`), previous-selection
`FUN_58908600`, and next-selection `FUN_58908680` paths respectively. The
other codes in the table take the default return path.

[`verify_current_list_control_vtable.py`](../tools/verify_current_list_control_vtable.py)
hash-pins the mapped image, checks all 16 slots in the `CListTextScreen` and
[`CRollListTextScreen`](current-main-roll-list-text-screen.md) tables against
verified functions, nine slots shared among all three tables, three RTTI names,
all 28 jump-table entries, the installed table value, and four
return/padding boundaries. Reproduce:

```text
python tools/verify_current_list_control_vtable.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58908050 --only 58908310 --only 58908340 --only 58908520 --only 58907F70 --only 589082E0 --only 589088B0 --only 58908AA0 --only 58908AF0
python tools/generate_progress.py --check
```

The table entries and instructions establish these dispatch and traversal
paths. The RTTI establishes class names; linked-node ownership, input-message
origin and payload meaning, the indirect drawing and child callbacks, and
visible pixels remain unresolved.
Ghidra's local headless launch did not complete during this check, so these
behavior notes are derived from the captured mapped instructions and table
bytes, not new pseudocode. No original-client runtime comparison was made.
