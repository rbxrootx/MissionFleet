# Event `0x80020A03` list update

The matched message dispatcher `FUN_587BB700` routes event `0x80020A03` to
`FUN_588421C0` at two mapped call sites, `0x587BD7FC` and `0x587BD816`. Its
Ghidra decompilation shows a zero-input branch and a populated branch that
copies each input record as `0xC3` dwords (`0x30C` bytes) before dispatching.
The event's user-visible purpose and record fields are not identified.

Fresh Ghidra output shows `FUN_588421C0` forwarding to `FUN_58841AF0` when its
first argument is nonzero. The mapped instruction at `0x588421D2` is a direct
tail `JMP`; Ghidra classifies the reference as a call terminator. The list
helper resets list state, copies each `0x30C`-byte record, decodes selected
escaped text sequences, appends list nodes, then conditionally refreshes child
values according to observed receiver fields. The node code copies the same
record extent and allocates `0x314` bytes for a node. The six-byte function
`FUN_5897D124` is a mapped indirect-jump thunk through `DAT_5898C2F0`; its
callback target and contract remain unknown.

The closure contains seven functions and 1,726 bytes in eight fresh Ghidra
ranges. Ghidra reports complete body coverage and no unresolved in-module
targets. The focused verifier checks all eight ranges, their 505 instructions,
internal transfers, direct external targets, and both matched dispatcher call
sites. All seven functions pass the pinned compiler and objdiff 3.8.0 at 100%:

```powershell
rtk python tools/verify_current_main_event_80020a03_list_update.py
```

The exact code match does not establish the packet schema, list ownership,
callback behavior, event meaning, or rendered result. This path has not been
tested in the emulator.
