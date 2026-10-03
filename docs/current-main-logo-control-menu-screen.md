# Current Main logo control-menu screen method

Ghidra's RTTI metadata identifies the virtual-method group around
`FUN_5878e2d0` with `CLogoControlMenuScreen`; adjacent complete-object locators
also identify an `IMsgListenAble` subobject. The method has two body ranges,
`5878E2D0..5878F2FC` and `5878F300..5878F91D`, totaling 5,707 bytes. ObjDiff
3.8.0 verifies both emitted ranges against the captured mapped client image at
100%, with 62 relocation operands checked.

On the observed initialization path, the method stores the object pointer in
`DAT_58A24580`, initializes fields at offsets `+0x28`, `+0x58`, and `+0x24C`,
then fills 0x100-byte slots beginning at `+0x252`. This sequence references
region-specific `kupaisky.com` host literals and invokes global callback or
configuration accessors while populating the slots. The exact relationship
between each literal, slot, and accessor remains unresolved. The host strings
are evidence from the binary and were not contacted. The later body contains
additional state and UI work that has not yet been mapped to named fields or
visible behavior.

The three-byte span `5878F2FD..5878F2FF` contains no instructions and is
excluded between the two Ghidra ranges. Virtual-dispatch call sites, exact
member names, region-slot meanings, runtime effects, and appearance remain
uncertain. No emulator runtime test was performed.
