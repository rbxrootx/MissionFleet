# Current Main control-menu constructor

`FUN_5888e5e0` constructs a `CMenuScreen`-derived object whose Ghidra vtable
store is named `CPannelMainControl_MenuScreen`. The direct caller
`FUN_5878ad50` allocates `0x650` bytes, constructs it with arguments
`(0, 0, 600, 0, 0, 0x40)`, stores the returned pointer in
`DAT_58A245C0`, and then initializes child flags and calls
`FUN_5888d110(&DAT_58A0B450)`.

The constructor records its position arguments in inherited fields and builds
a large collection of child controls. The Ghidra body shows calls to
`FUN_58731c60`, `FUN_58793ff0`, and `FUN_5875dda0`, along with other shared
control helpers. These children are initialized from count-checked shared
resource tables, and their coordinates are derived from the constructor's
position arguments. Some child fields are toggled based on
`DAT_58A0B4A0` and `DAT_58A0B4A4`; the meanings of those globals, child labels,
and menu actions are not recovered.

Ghidra identifies one contiguous body range, `5888E5E0..5888FFA3`, totaling
6,596 bytes. ObjDiff reports an exact match for all bytes and checks 196 mapped
operands.

This verifies compiled bytes against the captured installed `Main.dll`. It
does not validate the control labels or appearance in the emulator.

The constructor's next direct-call frontier now also matches. Ten directly
selected or recursively reached helpers add 5,059 bytes and 168 audited operand
targets:

| Address | Bytes | Evidence from the constructor path |
| --- | ---: | --- |
| `0x58793E00` | 16 | Called six times after storing child pointers. |
| `0x5888CBC0` | 130 | Called after clearing receiver fields at `+0x5F4..+0x5FC`. |
| `0x58895120` | 711 | Direct helper on a later child-construction path. |
| `0x588D29F0` | 187 | Called three times by repeated child setup. |
| `0x5878A280` | 67 | Called from the indexed-child path. |
| `0x5890BD30` | 87 | Directly called during child initialization. |
| `0x588A4860` | 2,053 | Direct helper in the later child setup path. |
| `0x5888D660` | 836 | Called after storing receiver fields at `+0x648` and `+0x64C`. |
| `0x5883E3F0` | 949 | Called by `0x588A4860`. |
| `0x588D2820` | 23 | Called by `0x5888D660`. |

ObjDiff verifies each helper at 100%. The constructor call-graph audit through
depth six has no unmatched callees. The helper field meanings and resulting
menu appearance are still unknown, and no emulator render was tested.
