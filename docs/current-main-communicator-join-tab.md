# Installed-client JoinTab class

This slice covers the RTTI-identified `CPannelCommunicatorConfigJoinTab` in the
installed 2026 `Main.dll`. The complete-object locator at `0x589A840C` points
to type descriptor `0x589CC638`, whose name is
`.?AVCPannelCommunicatorConfigJoinTab@@`. Its primary vtable address point is
`0x5899E164`; the locator pointer is stored at `0x5899E160`.

The table has seven slots before the next RTTI pointer:

| Slot | Function | Observed role in Ghidra |
| --- | --- | --- |
| `+0x00` | `588318F0` | Deleting-destructor wrapper; calls derived cleanup `588316E0` |
| `+0x04` | `58831C30` | State-gated global-record and child update |
| `+0x08` | `58831910` | Resets state and four child values |
| `+0x0C` | `588336F0` | Changes state flags and dispatches to linked children |
| `+0x10` | `58832CF0` | Main event handler |
| `+0x14` | `58902FE0` | Already byte matched |
| `+0x18` | `588329D0` | Child-event handler |

The next RTTI pointer is at `0x5899E180`; it names a separate
`CPannelCommunicatorConfigLeaveTab` table. It is excluded from this slice. The
matched parent constructor `58843380` calls matched constructor `58831ED0` at
`0x588441DE`. Its Ghidra output calls the common base constructor, installs the
JoinTab vtable, and builds data-table-backed sprite and control children. The
specific resource names and visible labels remain unidentified.

The six open vtable methods and their transitive open direct callees form a
14-function closure: 21 exact Ghidra body ranges, 5,129 bytes, and 1,606
instructions. The closure methods are `588318F0`, `58831C30`, `58831910`,
`588336F0`, `58832CF0`, `588329D0`, `588316E0`, `58831E20`, `58753980`,
`58753B20`, `58754080`, `587B92E0`, `587B9300`, and `587BA960`.

`58831C30` has an unusual but verified body layout: the vtable entry at
`0x58831C30` branches at `0x58831D45` back to `0x588319A0`, so two reachable
blocks lie at lower addresses than the entry. Both fresh Ghidra exports record
all four ranges. The emitter and match verifier retain these ranges and require
the entry address to occur in the body; they do not drop the backward-reached
blocks.

The two independent exports (`58758EE0` and `587CEF70`) agree on all 21 ranges,
165 direct calls, and eight data-reference rows. Sixteen call sites target
another function in the closure; the remaining 149 target 24 functions that
were already byte matched. The verifier decodes each mapped range and compares
its direct-call targets with both exports. All six open table methods reach the
full helper closure, and no open direct callee remains outside it.

Ghidra shows `58832CF0` dispatching linked-child events and handling event
identifier `0x100` with command values `9`, `0x26`, and `0x28`, plus identifier
`0x201`. The `0x26` and `0x28` branches adjust bounded selection values and
refresh through `58831E20`. The helper wrappers pass identifiers
`0x80010F07`, `0x80010F08`, and `0x80010F0C` to matched `58970C70`. These
static calls do not establish server behavior, packet fields, or successful
network transactions. The data-list schemas, field names, visible UI, and
runtime callback contracts are also unresolved. Twenty-seven indirect call
sites remain dynamic: 15 in derived cleanup, five each in the two event
handlers, and one each in `588336F0` and `587BA960`.

Every selected function now passes ObjDiff at 100.0% against its exact mapped
body, using the repository's pinned `clang-cl` source path. The emitted `.cpp`
files preserve instruction bytes; this establishes machine-code equivalence,
not recovered original high-level C++ or successful emulator behavior. No live
client or emulator test was performed.

Reproduce the manifest, class-structure, and byte-match checks with:

```powershell
rtk python tools/export_current_main_communicator_join_tab_manifests.py --check
rtk python tools/verify_current_main_communicator_join_tab.py
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 588318F0 --only 58831C30 --only 58831910 --only 588336F0 --only 58832CF0 --only 588329D0 --only 58753980 --only 58753B20 --only 58754080 --only 587B92E0 --only 587B9300 --only 587BA960 --only 588316E0 --only 58831E20
```
