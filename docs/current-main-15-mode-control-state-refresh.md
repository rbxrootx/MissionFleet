# Current Main 15-mode child-control state refresh

Ghidra identifies `FUN_58850a70` by address; the receiver's class and method
name are not recovered. Its 40 discontiguous body ranges total 5,933 bytes.
The source matches all 40 ranges against the captured mapped `Main.dll` image
under ObjDiff 3.8.0, with 125 operands checked.

Its only direct caller is `FUN_58852d60` at `0x58852FF1`. That wrapper
calculates a mode from current object/data and global UI conditions, calls
`FUN_588504c0` when the selected mode changes, and then invokes this routine
with the resolved value. Ghidra shows 15 switch cases, values 0 through 14.
The branches toggle visibility flag bits on groups of child controls and call
shared coordinate/drawing helpers. This establishes a mode-driven display
update; it does not establish the purpose or label of each mode.

The Ghidra body has 39 intervening gaps totaling 202 bytes. An automated
listing audit found no instruction or reference into any gap; the next range
in each case has incoming jump references. Those bytes are excluded and left
unclassified rather than assumed to be alignment or padding.

The receiver type, mode meanings, child-control identities, data schema, and
rendered results remain unresolved. No runtime or emulator test was performed.
