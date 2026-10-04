# Current Main.dll linked-list control methods

The pinned installed `Main.mapped.bin` stores three tables that share a
message-dispatch body at `0x58908520`, drawing body at `0x58908340`, and callback
body at `0x58908310`. At table `0x589A29CC` they occupy slots `+0x10`, `+0x14`,
and `+0x38`; at `0x589A1430`, slots `+0x04`, `+0x08`, and `+0x2C`; at
`0x589A2B70`, slots `+0x0C`, `+0x10`, and `+0x34`. The lifecycle body at
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
checked. [`verify_current_list_control_vtable.py`](../tools/verify_current_list_control_vtable.py)
hash-pins the mapped image, checks nine table slots, the installed table value,
and both return/padding boundaries. Reproduce:

```text
python tools/verify_current_list_control_vtable.py
python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 58908050 --only 58908310 --only 58908340 --only 58908520
python tools/generate_progress.py --check
```

The table entries and instructions establish these dispatch and traversal
paths. Class names, linked-node ownership, message payload meaning, the
indirect drawing and child callbacks, and visible pixels remain unresolved.
Ghidra's local headless launch did not complete during this check, so these
behavior notes are derived from the captured mapped instructions and table
bytes, not new pseudocode. No original-client runtime comparison was made.
