# Current Main startup range-update helper

This pass reconstructs `FUN_587AEDB0`, a 143-byte helper called by
`FUN_587AB390` at `0x587AB3DA` during global setup. ObjDiff 3.8.0 confirms a
100% object-code match against the installed `Main.dll`, including all four
operand relocations.

The captured instructions initialize a two-word output pair, compare two
supplied values with the receiver's fields at `+0x0C` and `+0x10`, and
conditionally call `0x5897CC72`. When the second output value differs from the
supplied value, the helper derives a count in four-byte units from the saved
end and supplied pointer, calls `0x5897CC54`, and stores a new end at `+0x10`.
The caller's depth-two direct-call audit now reports every inventory-backed
edge as verified, including both helpers called by this function.

The data structure and element schema are not identified. The contracts and
ownership effects of `0x5897CC72` and `0x5897CC54` remain unknown, so the
range/vector interpretation is tentative. This establishes byte identity and
closes this call-graph branch; no client runtime or visual test was performed.
