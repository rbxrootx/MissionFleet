# Current Main ship-map screen constructor

The constructor at `0x588E05C0` is named `CShip_MapObjectScreen` by its vtable
reference in Ghidra. Two functions call it: `FUN_587374b0` at `0x5873754F`, and
`FUN_58789FE0` at `0x5878A046` and `0x5878A0A0`.

Ghidra's body installs that vtable, calls initialization helpers, reads values
from mapped client records, initializes a large set of receiver fields and
counters, and repeatedly calls `FUN_589031A0` while preparing associated child
objects. The decompilation does not establish the full receiver layout, helper
contracts, or the meaning of those objects and record fields, so those are left
unlabeled here.

Ghidra assigns six code ranges totaling the inventory's 13,492 bytes. Capstone
decodes the five gaps between ranges as alignment NOPs (`lea ecx,[ecx]` and
`lea esp,[esp]` forms); they are excluded from the emitted function segments.
The source is generated from the captured mapped bytes with every instruction
encoded explicitly. ObjDiff 3.8.0 reports 100% for all six compiled segments;
633 immediate and address operands were checked against the mapped image.

This establishes a byte match and static control-flow facts. The constructor was
not exercised in the original client, and the decompiler output does not
establish the original high-level source or runtime visual result.
Its call to `FUN_588D6600` now has a verified complete boundary and is described
in the [child position update notes](current-main-ship-map-child-position-update.md).
The constructor also calls `FUN_588D6EA0` at `0x588E2FA4` with the value loaded
from the constructor argument object's `+0x110` field. The matched helper's
encoded child-state setup and remaining uncertainties are documented in the
[child-state setup notes](current-main-ship-map-encoded-child-setup.md).

## State construction at `0x588D84D0`

At `0x588E0978`, this constructor calls `FUN_588d84d0` after the verified
coordinate-array helper `FUN_588d8d60`. It pushes two values loaded from its
stack frame at `+0x70` and `+0x74`. Ghidra decompiles the target as a
`__thiscall` method with those two stack arguments; their names and units are
not established.

The mapped instructions clear three 32-DWORD receiver-relative ranges beginning
at `+0x17C`, `+0x240`, and `+0x2C0`, along with an eight-DWORD range at `+0x60DC`.
The decompiled body then processes map-derived entries in bounded loops, calls
helpers `0x587B4060`, `0x587B3090`, `0x587B0830`, `0x587B0860`, `0x587B0910`,
and other `0x587B*` routines, and writes selected-entry fields at `+0x120`,
`+0xCC`, and `+0xA8`. Near the end it requests `0x74` bytes, calls
`0x587B04B0` when allocation succeeds, and stores that call's result at
`+0x23C`. This is static initialization evidence; it does not prove what the
fields represent or what becomes visible on screen.

Ghidra's indexed 2,178-byte body ends immediately after a call to
`0x5897CBDA`. The mapped instructions continue with `mov esp, ebp; pop ebp;
ret 8` at `0x588D8D52..0x588D8D57`, followed by eight `INT3` bytes. The complete
callable extent is therefore 2,184 bytes. The reconstructed source preserves
that epilogue and audits 40 mapped operands against the installed image. ObjDiff
confirms the byte match; no emulator runtime test was performed.
