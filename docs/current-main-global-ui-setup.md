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

## `FUN_587D26C0` startup object branch

All indexed callees from `FUN_587D26C0` through two direct-call edges now match
byte for byte. Ten new functions add 3,935 matched bytes and 82 operand targets
checked; the depth-two graph has no unmatched indexed target for this root.
The root is reached directly from `FUN_5878AF40` during startup setup.

The callsites connect grouped receiver-field initializers, embedded-object
helpers, the sprite loader, a repeated child/object initializer, and a linked
entry cleanup routine. `FUN_587D1F10`'s inventory extent was 12 bytes short: the
complete body ends at `ret` at `0x587D2621`, followed by 14 int3 padding bytes
before the next indexed function. `FUN_587CECC0` and `FUN_58789620` also needed
complete returns added, for 37 corrected inventory bytes total. The three
extents now stop before their observed int3 padding. The methods' class names,
field schemas, resource identities, ownership rules, and visual behavior remain
unresolved. Deeper and indirect paths elsewhere in startup are still open; no
original-client runtime or visual test was performed.

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

## `FUN_588011C0` object setup branch

This branch now has all indexed direct callees and their indexed direct callees
matched byte-for-byte. The final 20 functions contribute 4,976 verified bytes
and 143 checked operand targets. Together with the branch's previous verified
functions, the depth-two audit reports no unmatched indexed targets.

The evidence connects the matched bodies to the parent callsites and preserves
the observed vtable stores, allocation and cleanup paths, repeated child setup,
and shared helper calls. `FUN_588B3460` contains eight selector-like entry paths
that call the same helper and return with `ret 4`; their selector meanings remain
unknown. Two corrected boundaries were required: `FUN_5890D950` includes its
second reachable epilogue (+18 bytes), and `FUN_587CCAA0` includes its cleanup
epilogue (+3 bytes). The additional descendants include an allocation wrapper,
size-check/helper path, and small setup routines. Class identities, resource
names, argument contracts, and user-visible behavior remain uncertain. No
original-client launch or visual test was performed.

## `FUN_58854A00` startup object branch

The installed `FUN_58854A00` constructor branch now has all indexed callees
through depth two matched: 16 new functions add 5,873 byte-identical bytes and
check 145 mapped operand targets. The depth-two callgraph audit reports no
unmatched indexed target from this root.

The mapped bodies show repeated child construction, embedded objects with
observed vtable stores, groups of receiver-field initialization, a helper that
copies three 16-bit and two 32-bit arguments to fixed offsets, and a loop that
updates a field for each pointer in a receiver array. The evidence records
callers, helper targets, field offsets, constants, and exact vtable values.
Class identities, ownership, field schemas, and user-visible meaning remain
unresolved. The audit covers indexed direct calls through two edges; indirect
dispatch and deeper paths are still open, and no runtime or visual test was
performed.

## `FUN_58883F80` startup-control branch

All indexed callees from `FUN_58883F80` through depth two are now matched. Four
new functions add 1,168 byte-identical bytes and check 42 mapped operand
targets; the depth-two audit reports no unmatched indexed target under this
root.

The caller's mapped instructions install observed vtables, repeatedly construct
controls through `FUN_588C5F30` and `FUN_588C5FD0`, and initialize a larger
control through `FUN_58814A10`. The nested helper `FUN_58907F80` initializes
three fields and installs vtable `0x589A29C4`. These callsites support the
control-construction path, but class names, resource identities, field meaning,
and actual appearance are still unknown. The depth-two result does not cover
other startup branches or indirect dispatch; no runtime/visual test was run.

## `FUN_587783B0` repeated-control branch

The two shared helpers called from `FUN_587783B0` are now byte-matched along
with their three direct descendants: five functions, 2,144 bytes, and 37
checked operand targets. The depth-two audit finds no unmatched indexed target
under this root. The parent calls the first helper 14 times and the second 27
times, so these matches cover many repeated setup callsites.

The mapped bodies show allocator/registration helpers, a repeated object setup
path, and three subordinate routines that share `FUN_5875B090`. This evidence
ties the functions to the original caller and preserves their arguments and
call targets. The control type, helper semantics, resource identities, and
visual behavior remain unresolved; other global-startup branches remain open,
and no client runtime/visual test was performed.

## Shared `FUN_5889E8A0` startup-entry helper

The unmatched helper shared by `FUN_5889F960` and `FUN_5889FFE0` now matches
byte for byte, together with the adjacent initializer called by `FUN_5889FFE0`:
two functions, 443 bytes, and four operand targets. The first routine is called
27 times by `FUN_5889F960` and 31 times by `FUN_5889FFE0`; the second is called
twice. Depth-two audits for both roots now find no unmatched indexed callees.

The small routine makes two indirect calls through globals `0x5898C004` and
`0x5898C010` using observed constants including `0x80000002` and `0xF003F`.
The neighboring initializer allocates 0x7C bytes and stores a sequence of fixed
small integers in fields beginning at +0x154. These facts are recorded from
the mapped instructions; the indirect APIs, constants, and key-like values are
not assigned meanings without callsite or data evidence. No runtime/visual
test was performed, and unrelated startup branches remain open.

## `FUN_58754B80` startup object branch

This branch is matched through two direct-call edges: four functions add 701
byte-identical bytes and check 28 mapped operand targets. The depth-two audit
finds no unmatched indexed callee under `FUN_58754B80`.

The root calls `FUN_58754650` and `FUN_58754770`; each uses its paired helper
(`FUN_58753360` or `FUN_587533C0`) together with mapped allocation, cleanup,
and setup routines. Both small helpers pass a local argument block containing
`0x5898CA90` through the same helper sequence. These relationships are tied to
the mapped callsites and field accesses. Object identity, ownership, resource
meaning, and visible behavior remain unresolved; no runtime/visual test was
performed.
