# Current Main.dll child-state clear

`FUN_5875F320` is a 23-byte routine in the hash-pinned mapped installed
client `Main.dll`. It matches its complete extent at 100% under objdiff, with
no mapped operand targets.

The function takes no explicit stack arguments. It stores zero to the byte
pointed to by receiver `+0x6C`, clears receiver `+0x78`, then clears bit `0x4`
in the 16-bit field at receiver `+0x24`. The adjacent helper
`FUN_5875F310` sets bit `0x4` in the same field.

Four verified callers use this helper: the `CMarketBoard` method
`FUN_587977B0` loops over a 40-control group; `FUN_5879B3B0` iterates 48
entries; `FUN_5879D630` calls it from a repeated child/value path; and
`FUN_5879DD90` contains repeated calls in its child path. This establishes
cleanup/reset use across child entries, but the pointed byte, `+0x78` field,
flag meaning, and user-visible effect remain unidentified.
