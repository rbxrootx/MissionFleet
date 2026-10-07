# Current Main battle record scan helper

`FUN_587592c0` is a 3,019-byte routine in the installed, mapped `Main.dll`.
Ghidra reports one body range, `0x587592C0..0x58759E8A`. ObjDiff 3.8.0
verified the full range byte-for-byte and checked 41 mapped operand records.
Ghidra has not recovered a descriptive function or class name.

## Evidence from the original

Ghidra records two direct calls from `FUN_587bb700`, at `0x587BFFA6` and
`0x587C0116`. Both occur in branches for event `0x80021101`. One branch
constructs a helper object from a record indexed using `param_3[0x11]`, calls
this routine, then forwards the call value to `FUN_587b9c10`; the other forwards
it to `FUN_587b9c50`. This establishes the message-handler context but not the
event's gameplay contract.

The body reads a nested pointer at receiver offset `+8` and selects paths from
the low five bits of a word at nested offset `+4`. Its repeated scans cover
records in the region `+0xB40..+0xBC4`, test encoded record kinds `5` and `6`,
combine bit masks with receiver fields, and inspect status bytes decoded with
XOR `0xAA`. Some paths walk adjacent records in `0x60`-byte steps; others call
`FUN_58758360` or `FUN_587590a0` and compare resulting values. The offsets,
conditions, and helper calls are directly visible in Ghidra.

The `FUN_587590a0` branch is now covered by a separate exact-match closure of
three functions totaling 1,680 bytes. Its paired outputs are compared and
aggregated by this scanner. The sibling `FUN_58758360` calculation path is
still outside that closure; see the
[event 0x80021101 helper notes](current-main-80021101-record-metric-helpers.md).

## Uncertainty

The record schema, metric units, intended battle meaning, and precise output
contract remain unresolved. Ghidra gives the callee a `void` signature, while
the two callers store its call result in a pointer-typed temporary before
passing it onward; that ABI/signature discrepancy needs further analysis. No
emulator runtime test was performed.
