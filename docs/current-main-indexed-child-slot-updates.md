# Current Main indexed child-slot update helpers

The four helpers below form one indexed update family. Two byte-matched callers
use them in pairs: `FUN_58857020` refreshes selected-record values, while
`FUN_588E7480` refreshes values from a record in the ship-map entry loop. The
receiver class and gameplay meaning of these fields are not established, so the
names here describe only the observed machine behavior.

| Function | Bytes / instructions | Observed operation |
| --- | ---: | --- |
| `FUN_58858360` | 61 / 21 | Loads a companion pointer from `this+0xA50+4*index`, invokes `FUN_58907360` with `value XOR 0xAA`, stores the value at `this+0x898+4*index`, then calls `FUN_587A15E0` with the slot address and value. |
| `FUN_588583A0` | 36 / 8 | Stores the value at `this+0x8B8+4*index`, then tail-jumps to `FUN_587A15E0` with the slot address and value. |
| `FUN_5885EAF0` | 61 / 21 | Parallel to `FUN_58858360`, using companion-pointer slots at `this+0x70C+4*index` and value slots at `this+0x5E4+4*index`. |
| `FUN_5885EB30` | 36 / 8 | Stores the value at `this+0x604+4*index`, then tail-jumps to `FUN_587A15E0`. |

Both fresh Ghidra projects report the same contiguous extents and complete
instruction coverage. The mapped `Main.dll` decodes to those exact extents. The
edge exports contain four incoming calls from each caller and six outgoing
transfers to the already matched `FUN_58907360` and `FUN_587A15E0`.

The matched selected-record caller passes index `EDI` and words from offsets
`+0xE7C` and `+0xE7E`; its receiver subobjects are loaded from `ESI+0x9C` and
`ESI+0xA0`. The matched ship-map caller reads bytes `+0x0C` and `+0x0D` from
records rooted at `+0x118`, XORs each with `0xAA`, and passes an index derived
from the word at `EBX+0x98`. Its receiver subobjects come from the global object
at `0x58A245C4` plus `0x9C` or `0xA0`. These call paths establish how the
helpers are used, without identifying the represented gameplay fields.

The four reconstructed functions are recorded as byte-identical only after
ObjDiff comparison with the installed mapped image. The focused verifier also
checks both Ghidra exports, complete mapped instruction streams, exact caller
argument paths, and matched dependency extents.

Unresolved points: the meaning and bounds of each indexed slot, the identity of
the receiver object loaded from `0x58A245FC`, the semantics of the `0xAA`
transform, and the visible effects of `FUN_58907360` and `FUN_587A15E0`. The
image contains no established RTTI or vtable ownership for these four helpers.
No client or emulator runtime test has been performed for this subsystem.
