# Current Main FormTab vtable closure

This slice closes the six open primary-vtable slots of the RTTI-identified
`CPannelCommunicatorConfigFormTab` in the installed Main.dll capture. It adds
14 ObjDiff byte matches totaling 5,667 bytes. This is a static code match;
the tab has not been exercised in the emulator.

## Image and function evidence

The word at 0x5899DED4 points to complete-object locator 0x589A8310.
Its type descriptor at 0x589CC5A4 names
`.?AVCPannelCommunicatorConfigFormTab@@`. The primary vtable address point
is 0x5899DED8:

| Slot | Function | Status |
| --- | --- | --- |
| +0x00 | FUN_58829690 | Matched here |
| +0x04 | FUN_588296B0 | Matched here |
| +0x08 | FUN_58829B40 | Matched here |
| +0x0C | FUN_5882A1C0 | Matched here |
| +0x10 | FUN_58829BE0 | Matched here |
| +0x14 | FUN_58902FE0 | Previously matched |
| +0x18 | FUN_5882B340 | Matched here |

The previously matched constructor FUN_5882A730 writes this vtable address
at 0x5882A79D. The matched parent FUN_58843380 calls the constructor at
0x5884425C and stores the child at parent offset +0x15C. The two prior
Ghidra export snapshots agree on all selected [body ranges](../config/NF2_2026/current-main-form-tab-body-exports.tsv)
and [call/data edges](../config/NF2_2026/current-main-form-tab-call-edges.tsv).
New read-only targeted captures in `CurrentFleetMain` and the separate
`CurrentFleetMain` probe project produced identical pseudocode for the
14 functions. Their exact range dumps also report complete instruction
coverage. The verifier independently decodes the mapped image and checks
each listed range and direct transfer against both export snapshots.

The six open roots reach 14 functions in 16 exact body ranges: 5,667 bytes
and 1,695 instructions. There are 203 direct transfers: 12 internal and
191 to 22 previously matched functions. Of the three edges Ghidra labels
`CALL_TERMINATOR`, 0x58829635 and 0x588296A0 encode direct calls; 0x5882B2E8
encodes a tail jump to matched FUN_5882A420. Six data references target vtable
entries. The verifier also counts 45 indirect call sites without resolving
their runtime targets.

## Operations visible in the original code

FUN_58829690 calls cleanup FUN_58829460, then conditionally calls the
deallocator on the deleting flag's low bit. The cleanup body reinstalls the
FormTab vtable and destroys non-null child pointers. FUN_58829B40 changes
the receiver's masked state from 0x0100 or 0x0200 to 0x0400 and invokes an
indirect slot +0x18 twice. FUN_588296B0, FUN_5882A1C0, and FUN_58829BE0
branch on receiver state or event fields and operate on child controls.

The event routine FUN_5882B340 handles event value 2 for pointers stored at
receiver offsets +0x8C/+0xAC through FUN_5882B040, and +0x90/+0xB0 through
an indirect slot +0x18. FUN_5882B040 checks observed input lengths and calls
helpers with literal values including 500 and 0x1F5. FUN_587B9380 constructs
and sends a buffer using identifier 0x80010F11, then frees that buffer.
The pair wrappers FUN_58753EA0, FUN_58753EC0, and FUN_587540A0 lead to
the observed pair lookup helpers. These descriptions follow the targeted
Ghidra pseudocode and mapped x86; they do not assign UI labels or protocol
semantics.

The incoming call to FUN_58753CC0 at 0x58754D74 is in matched
FUN_58754D60. Another incoming call at 0x58754EB1 is in unmatched
FUN_58754E80. That unmatched caller does not leave the selected outgoing
closure, but its full behavior remains open.

## Validation and limits

ObjDiff 3.8.0 reports 14/14 functions and 5,667/5,667 bytes identical to
the pinned Main.dll image. The focused verifier checks the RTTI and vtable,
constructor path, both export snapshots, complete mapped x86 decoding,
direct and data edges, boundary match status, source hashes, and compiler
provenance. Runtime control identities, resource text, meanings of encoded
state and protocol values, 45 indirect targets, and server effects remain
unresolved. No emulator runtime or visual test was performed.
