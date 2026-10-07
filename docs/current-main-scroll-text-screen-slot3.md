# Main.dll `CScrollTextScreen` vtable slot +0x0C

The mapped address point at `0x589A0F5C` is preceded by Complete Object Locator
`0x589AA244`. Its RTTI names `.?AVCScrollTextScreen@@` and lists
`CStaticTextScreen`, `CTextScreen`, and `CScreen` as bases. Both fresh Ghidra
edge exports reference `FUN_588D2910` from cell `0x589A0F68`, exactly slot
`+0x0C` from that address point. No direct code caller was found.

Fresh body exports agree on one complete range `[0x588D2910, 0x588D29E8)`,
216 bytes and 77 instructions. The method first tests bit `0x04` in the word at
`this+0x24`. When set, it scans the null-terminated text at `this+0x6C`. For
nonempty text, it compares `this+0x04` against `this+0x70 - this+0x8C`. One
branch updates receiver state through byte-matched `FUN_589032E0`; another
copies text from `this+0x84` to `this+0x6C` with matched `FUN_58731CE0`, calls
the global callback at `DAT_5898C1A8`, dispatches through the object at
`this+0x50`, clears `this+0x88`, and updates state through `FUN_589032E0`.

The method then walks a linked structure rooted at `this+0x3C`, follows each
node's pointer at `+0x38`, and dispatches through slot `+0x0C`. When a link
returns to the original node, the mapped instructions restore saved registers
and tail-jump to the final callback. Ghidra could not recover the jump table at
`0x588D29E6` and renders the terminal indirect transfer as a call; the mapped
bytes show the tail jump.

The helper calls are byte-verified. The field meanings, flag meaning, global
callback signature, object role at `this+0x50`, and virtual callback contracts
remain unknown. The method has no emulator callback or runtime test. Its source
preserves the exact x86 instruction stream and is not recovered high-level C++.
