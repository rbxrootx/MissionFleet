# Current Main weapon-fire event handler

`FUN_587b4b70` is a 3,400-byte `__thiscall` function taking a packed-value
pointer. Ghidra reports two body ranges:

| Range | Bytes |
| --- | ---: |
| `0x587B4B70..0x587B4DBE` | 591 |
| `0x587B4DC0..0x587B58B8` | 2,809 |

The byte at `0x587B4DBF` lies outside the Ghidra body. The source emits only the
two reported ranges. ObjDiff 3.8.0 matches all 3,400 bytes and checks 99 mapped
operand targets.

Ghidra records data references at `0x58999FB0` and `0x5899A080`. The nearby
vtable audit places these at slots `+0x3C` and `+0xC0` in tables at `0x58999F74`
and `0x58999FC0`. Their preceding Complete Object Locators identify the
TypeDescriptors `.?AVCMountedWeapon_TpLauncher@@` and
`.?AV?$LFDCList@PAVCDepthBomb_MapObjectScreen@@@@`. This ties the handler to
weapon and depth-bomb-related virtual dispatch, while leaving its exact class
ownership unresolved. No direct callsite was identified.

The body reads a packed 32-bit input value, stores it at receiver offset `+0x94`,
and loops over the count at `+0xE0`. It derives angle and velocity values,
allocates and initializes records through several distinct branches, and
contains a diagnostic format string for `Fire -> %s` with the argument `Torpe`,
alongside `VH`, `VX`, `VY`, position, `FireAngle`, and platform fields. The packed
event schema and the meanings of its flags and numeric branches are unknown.
No emulator runtime or visual test was performed.
