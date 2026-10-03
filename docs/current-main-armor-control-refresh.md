# Current Main `CPannelArmorControl` display refresh

`FUN_58815e10` is a single contiguous Ghidra body at `0x58815E10..0x58816DA3`
(3,988 bytes). The generated source follows that extent in the captured mapped
Main image. ObjDiff 3.8.0 confirms a byte-identical match and checks 56 mapped
operand targets.

The vtable address point at `0x5899D7AC` has a Complete Object Locator pointer
at `0x5899D7A8`; the locator at `0x589A7F24` references TypeDescriptor
`.?AVCPannelArmorControl@@`. Vtable methods `FUN_588172d0` (slot `+0x10`) and
`FUN_58816ee0` (slot `+0x18`) both call this routine. Ghidra records ten direct
calls total: four from `FUN_58816ee0`, one from `FUN_588172d0`, one from
`FUN_58816db0`, and four from `FUN_588193b0`.

The routine updates child-control state and display calls using a pointer at
receiver offset `+0x198`. It reads four data slots at offsets `+0xCD0`, `+0xCD4`,
`+0xCD8`, and `+0xCDC` on that referenced object, along with values at `+0x88`
through `+0x8E`. It passes derived values to `FUN_58907360` and writes text via
`FUN_58731ce0`. These are direct dataflow observations; the semantic names of
the fields and helper contracts are unresolved. No emulator runtime or visual
test was performed.
