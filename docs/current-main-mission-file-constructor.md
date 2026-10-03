# Current Main `CMissionFile` construction routine

Ghidra's RTTI resolves the vtable installed at entry `0x587AD4B0` to
`CMissionFile`. The function body is six discontiguous ranges totaling 6,185
bytes. The emitted source preserves those ranges from the captured mapped
`Main.dll` image, and ObjDiff 3.8.0 verifies all 6,185 bytes exactly with 159
mapped operands checked.

Ghidra records three direct callers: `FUN_587af6d0` at `0x587AF7A5`,
`FUN_587af8f0` at `0x587AF95B`, and `FUN_587af9a0` at `0x587AF9F8`. Their
decompiled call sites pass mode arguments `-1`, `1,000,000`, and `1,000,001`.
These call-site values distinguish paths, but their intended names and contract
are not recovered.

The target's `1,000,000` branch initializes fields on the mission-file object,
creates records containing the visible string `Garrison`, and calls helpers to
initialize mission state. Other branches copy incoming record data, allocate
and link nested structures and variable-sized arrays, then call finalization
helpers. This is the observable behavior in Ghidra's pseudocode; it does not
establish the meaning of most fields or prove that the incoming data is a disk
file format.

The six body ranges are `587AD4B0..587ADBCC`, `587ADBD0..587ADD08`,
`587ADD10..587ADEE3`, `587ADF4C..587AE159`, `587AE160..587AE758`, and
`587AE760..587AED57`. Their five intervening gaps total 127 bytes. Ghidra's
body omits each gap, so the generated source excludes them. The large gap from
`587ADEE4` through `587ADF4B` remains specifically unclassified; no bytes from
it were attributed to this method.

The input structure schema, mode meanings, mission-field semantics, ownership
and cleanup rules, and runtime effects remain uncertain. This verifies a
byte-for-byte reconstruction against the locally captured mapped client image;
it does not demonstrate a successful emulator run or mission load.
