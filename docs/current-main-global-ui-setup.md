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

## Resource-backed initializer branch

`FUN_588FB9B0` directly calls the eight functions matched in this update:
`FUN_588FEC60`, `FUN_588FFE10`, `FUN_588F7B70`, `FUN_588FEF50`,
`FUN_588F6110`, `FUN_588F6130`, `FUN_588FE520`, and `FUN_588FEAB0`. Five
additional callees below those routines complete the next indexed layer:
`FUN_588FD970`, `FUN_588F84E0`, `FUN_588FB570`, `FUN_588FA1C0`, and
`FUN_588FAC00`. Together the branch adds 13 functions and 4,883 byte-matched
bytes; objdiff checked 160 mapped operand targets.

The recovered instructions show repeated child setup, bounded 0x80-byte data
copies, vtable installation, and a 100-record zeroing loop with 0x18-byte
stride. The callgraph audit finds no unmatched inventory-backed target through
depth two from `FUN_588FB9B0`. Deeper indirect behavior, resource identities,
class names, and record meanings remain unresolved. No original client was run.

## Global-object initialization tree

The mapped setup function `FUN_587DBA00` directly calls the ten newly matched
initializers and field helpers recorded for this batch. Their deeper paths add
nine more functions, including the repeated child branch under `FUN_58872030`
and interface-backed field setup called by `FUN_5890A3F0`. Across both levels,
19 functions add 12,084 byte-matched bytes and 411 mapped operand targets are
checked.

The depth-two callgraph audit finds no unmatched indexed callee in this tree.
That result covers indexed direct calls two edges from the root; it does not
resolve all deeper indirect dispatches or all global setup branches. The
observed vtable addresses, child constructors, repeated field writes, and
callsites are preserved in the per-function evidence. Class names, data
schemas, and user-visible meanings remain unknown, and the client was not run.

## `FUN_5880DD80` resource and child tree

The next verified initializer branch, `FUN_5880DD80`, now has its unmatched
indexed callees reconstructed through two call levels. Nine functions add
6,798 byte-matched bytes and check 236 mapped operand targets; two shared
helpers in the graph were already verified. The depth-two callgraph audit now
reports no unmatched indexed targets in this branch.

The mapped bodies establish repeated child construction, vtable writes,
resource-helper calls, a cleanup traversal over 0x80 pointer slots, and a
0x20-entry child loop. The data structures, class identities, resource names,
and visual effect remain unresolved. No client was run for runtime validation.
