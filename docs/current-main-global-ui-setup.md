# Current Main global UI and resource setup

`FUN_5878af40` is a 7,492-byte setup routine in the installed mapped `Main.dll`.
Its two Ghidra ranges match the reconstructed source at 100.0% in objdiff 3.8.0,
with 396 mapped operands checked.

The adjacent `FUN_5878cc90` contains a data reference to this function at
`0x5878CCED` and passes its address to callback slot `DAT_5898C130`, along with
the receiver as context. The adjacent code stores the returned handle and
activates it through `DAT_5898C1B4`. This establishes a startup callback path;
the callback API's scheduling and lifetime contract remain unknown.

The body loads many shared SPR assets through `FUN_588f3d70` and stores their
handles in global slots, including resources named `ComponentsAircraft.spr`,
`ComponentsTuret.spr`, `ComponentsFCS.spr`, `ITPNRS2.spr`, and `ITFNBUI.spr`.
It also opens `NFLPSR.RPT` through mapped file helpers and allocates and
initializes numerous global UI objects. One call constructs
`CPanelDashboard` through the separately verified `FUN_58812170`, then more
panel constructors and shared setup routines run. The global resource-table
schema and the exact identity and runtime use of each object are not recovered.

The Ghidra ranges are `0x5878AF40..0x5878C0B5` and
`0x5878C0C0..0x5878CC8D`. The 10-byte gap between them decodes as a seven-byte
`lea esp, [esp]` and a three-byte `lea ecx, [ecx]`; the preceding unconditional
jump skips the gap, so it remains outside the corrected function extent.

The resource-loading and callback behavior are statically established from the
mapped code. No original-client startup, visual, or interaction test was
performed.

## Direct setup callees

All 28 unique indexed functions called directly by `FUN_5878af40` are now
reconstructed from their mapped instruction streams and verified at 100.0% by
objdiff 3.8.0. This layer adds 19,277 bytes and checks 834 mapped operand
targets. The original parent provides direct callsite and argument evidence;
the callees include repeated child initializers, shared resource setup, and
small vtable-backed object setup. Exact class identities and field meanings are
not inferred from these instruction matches alone.

Five Ghidra extents were extended to include complete epilogues after boundary
decoding: `FUN_58806150` (+6 bytes), `FUN_5889c8d0` (+6), `FUN_5881f3d0` (+6),
`FUN_587af6d0` (+8), and `FUN_588ebdd0` (+9). The extent edits total 35 bytes
and include the observed stack restores, exception cleanup, cookie check, and
returns. The root's depth-two callgraph still contains unmatched nested
helpers, so this does not close the full setup branch. No client was launched
for visual or runtime validation.
