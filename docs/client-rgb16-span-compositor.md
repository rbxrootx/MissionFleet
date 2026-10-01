# Main.dll span-compositor dispatch table

The mapped 2062 `Main.dll` contains 24 byte-matched span-render methods (381,241
bytes total), including
`0x1015A8A0` (37,130 bytes), `0x1014DF30` (36,606 bytes), `0x101481E0`
(15,988 bytes), and `0x10144810` (14,687 bytes). Ghidra decompiles the first
three as `__thiscall` methods with nine explicit parameters, and the last with
ten explicit parameters.
Their field accesses and clipping arithmetic are consistent with a target
surface, position, clip rectangle, color value, and effect value; those
parameter roles remain inferred because the owning class and dispatch paths are
unresolved. The methods read run-encoded sprite data. Several perform packed
16-bit blends; at least one sibling switches among byte, short, integer, and
packed-wide destination paths. Table membership is direct evidence, while the
exact pixel-format contract for every variant remains uncertain. This connects
the recovered Main.dll image to sprite-render behavior traced through `Core.dll`
and `ITNTL.dll`.

## Evidence from Main.dll

The decompiled entry checks the stream pointer at `this+0x0C`, derives the
source bounds from `this+0x04` and `this+0x08`, and intersects the requested
rectangle with those bounds. It gets the destination buffer from
`param_1+0x08` and the destination pitch from `param_1+0x0C`. When clipping
removes rows, the code walks the encoded stream to the retained row. Within a
row, nonnegative signed 16-bit values advance across transparent pixels; the
following record carries a literal-byte count at `+3`, with pixel data starting
at `+5`. A `-1` control advances to the next row and controls below `-1` end the
walk.

The body has separate paths for color/effect combinations. Its pixel arithmetic
uses three runtime masks at `DAT_101C9300`, `DAT_101C9308`, and `DAT_101C9310`,
and includes packed 16-bit vector operations. The masks are loaded from globals
rather than fixed RGB565 constants. `FUN_10102C40` copies these three 64-bit
mask fields from host table offsets `+0x4C`, `+0x54`, and `+0x5C` into their
globals; that evidence ties them to host-provided renderer configuration. The
readable client's independently traced span loader
and compositor use the same five-byte run header and row/end controls; see the
[ITNTL sprite loader evidence](itntl-sprite-loader.md) and the
[current-client sprite render path](client-render-path.md).

The mapped image contains a code-pointer-table slot at `0x10176B90` whose value
is `0x1015A8A0`; neighboring entries point to other functions in the same code
region.
Ghidra reports no direct call targets or code references to this function, so
the table's owning class and runtime dispatch path remain unresolved. The
pointer-table evidence supports a method-dispatch role, but does not identify a
specific sprite subclass or prove which live render path selects it.

## Additional renderer variants

A raw pointer scan finds nine additional compositor entries in slots
`0x10176B0C` through `0x10176B3C`. Each pointer is direct evidence of
table membership, and Ghidra shows the same source stream at `this+0x0C`, source
bounds at `this+0x04/+0x08`, destination buffer/pitch fields, clipping, and
run-record traversal. All nine compile with the recorded VC6 settings and
byte-match their mapped extents:

| Table slot | Method | Bytes | Mask accesses observed in Ghidra |
| --- | --- | ---: | --- |
| `0x10176B0C` | `0x10109CF0` | 5,043 | `DAT_101C92F0/F8`, stride |
| `0x10176B10` | `0x1010B0B0` | 4,571 | all five renderer masks |
| `0x10176B18` | `0x1010C2E0` | 12,458 | `DAT_101C92F0/F8`, stride |
| `0x10176B1C` | `0x1010F390` | 11,783 | all five renderer masks |
| `0x10176B24` | `0x101121F0` | 12,797 | `DAT_101C92F0/F8`, stride |
| `0x10176B28` | `0x101153F0` | 12,030 | all five renderer masks |
| `0x10176B30` | `0x10118360` | 6,812 | `DAT_101C92F0/F8`, `DAT_101C9300`, stride |
| `0x10176B34` | `0x10119E00` | 4,819 | `DAT_101C92F0/F8`, stride |
| `0x10176B3C` | `0x1011B150` | 16,916 | `DAT_101C92F0/F8`, `DAT_101C9300`, stride |

The mask list records global references in the decompilation; `stride` refers to
the address-scaling global at `0x101ACDB4`. The observed combinations establish
implementation variants, but not their pixel-format or effect names. Slots
`0x10176B00` and `0x10176B04` point to state-transition methods `0x10109BD0`
and `0x10109C00`. They were absent from Ghidra's function inventory, so their
bounds were established from the mapped instructions and checked by creating
bounded Ghidra functions. The first body spans 35 bytes and ends at its final
`RET`, before 13 bytes of alignment padding. The second spans 42 bytes through
its final `RET`; its five-entry switch table begins at `0x10109C2C`, outside the
function, and the intervening two-byte `MOV EDI,EDI` is excluded. Ghidra's
pseudocode shows the first transitions state `1 -> 2` and `5 -> 3`; the second
transitions `2/4 -> 1` and `3/6 -> 5`; both otherwise return the field at
`this+0x34`. Both methods byte-match. The meanings of those states and the
returned field remain unknown.

## Vtable boundaries and non-rendering slots

The span-renderer vtables form 13 consecutive three-slot groups from
`0x10176B08` through `0x10176BA0`. Each starts with a matched deleting
destructor, followed by two virtual methods. Destructor bodies restore their
group's address point, including `0x101673B0` restoring `0x10176B98` for the
last group. The 24 renderer methods occupy 24 of those method slots. The last
two slots are matched zero-returning stubs: `0x10176B9C` points to
`0x10043C50` (`xor eax,eax; ret 4`), and `0x10176BA0` points to `0x10043C70`
(`xor eax,eax; ret`). Both implementations are also shared by a second pointer
table at `0x10175960` and `0x10175948`, respectively. Their parameter contracts
and the relationship to that other table are unknown; neither stub performs
span parsing or pixel blending.

The nearby entries `0x10176B00` and `0x10176B04` point to state-transition
methods `0x10109BD0` and `0x10109C00`, but they belong to a different object:
its destructor body at `0x10109B40` restores vtable address point
`0x10176AD8`. The first method spans 35 bytes through its final `RET`, before
13 bytes of alignment padding. The second spans 42 bytes through its final
`RET`; its five-entry switch table begins at `0x10109C2C`, outside the function,
and the intervening two-byte `MOV EDI,EDI` is excluded. Ghidra pseudocode shows
the first transitions state `1 -> 2` and `5 -> 3`, and the second transitions
`2/4 -> 1` and `3/6 -> 5`; both otherwise return `this+0x34`. These functions
byte-match, but their state names and returned field remain uncertain.

Slots `0x10176BA4` and `0x10176BA8` point to `0x101673C0` (`ret 4`); slot
`0x10176BAC` points to `0x101673D0` (`mov eax,1; ret`). Both bodies are now
byte-matched. Their targets also occur at `0x10175330` and `0x101768A4`, but no
constructor or destructor stores `0x10176BA4`, `0x10176BA8`, or `0x10176BAC` as
a vptr. Their owner and relationship to the compositor family therefore remain
unresolved. A distinct object vtable begins at `0x10176BB0`, which constructor
`0x101673E0` and destructor `0x10167450` store in the object. Another object
vtable begins at `0x10176BD8`, anchored by constructor `0x10167D20`. Those
neighboring classes are outside the compositor subsystem.

## Sibling blend method

`0x1014DF30` is a separate 36,606-byte `__thiscall` method with the same
Ghidra parameter layout. Its pseudocode reads the same stream fields and host
mask globals, clips against the destination bounds, and walks transparent runs
and row controls. It branches into additional 16-bit color/effect loops. The
record field at `+3` also selects paths using bits 1 and 2; the exact meaning of
those flags is not established by the pseudocode.

The mapped function-pointer table slot at `0x10176B84` contains
`0x1014DF30`; slot `0x10176B90` contains `0x1015A8A0`. Ghidra found no direct
calls or code references for the sibling either. These nearby entries and their
shared stream/mask behavior support treating them as a renderer method family,
while leaving the table owner and runtime dispatch unresolved.

`0x101481E0` is another method in this family. It uses the same target surface,
clipping pattern, and encoded span stream, with two additional masks:
`DAT_101C92F0` and `DAT_101C92F8`. `FUN_10102C40` copies them from host-table
offsets `+0x6C` and `+0x64`, respectively. Its packed pixel arithmetic reads
these masks alongside `DAT_101C9300`, `DAT_101C9308`, and `DAT_101C9310`.
The mapped pointer-table slot at `0x10176B78` contains `0x101481E0`; Ghidra
found no direct calls or code references to it. The role of the two extra masks
and this method's exact effect modes remain uncertain.

`0x10144810` has the same source stream, source bounds, clipping, and target
buffer/pitch accesses, and it reads the same five host-supplied mask globals.
Its Ghidra signature has one additional explicit integer parameter; the body
uses three trailing values in packed per-channel arithmetic, but their separate
roles are not identified. The pointer-table slot at `0x10176B70` contains
`0x10144810`. Ghidra found no direct calls or code references to the function,
so its dispatch path and connection to the other methods remain uncertain.

`0x1014C060` is a 7,773-byte sibling at table slot `0x10176B7C`. Its Ghidra
decompilation shows the same source bounds, clipped destination surface, and
span-stream traversal as the other methods. It reads the five host-provided
channel masks and uses two additional explicit values to select packed blend
paths: one is compared against `0x100`, while the other is tested for zero and
sign. Those branch conditions are observed; the original argument names and
their semantic labels are not recovered. Ghidra reports no direct call targets
or code references to this function, so the owner and runtime dispatch remain
unknown.

`0x1013B8A0` is the next method in this table family and contributes another
36,709-byte compositor. The captured slot at `0x10176B6C` contains
`0x1013B8A0`; the adjacent slots `0x10176B70` and `0x10176B78` contain the
already matched methods `0x10144810` and `0x101481E0`. Ghidra reports no direct
call targets or code references to this entry, so the table owner and live
dispatch route remain unknown.

Its Ghidra pseudocode repeats the span-stream layout and clipping described
above, using the stream pointer at `this+0x0C`, source bounds at `this+0x04`
and `this+0x08`, and target buffer/pitch at `param_1+0x08` and `param_1+0x0C`.
It reads the three common channel masks plus `DAT_101C92F0` and
`DAT_101C92F8`, which `FUN_10102C40` copies from host-table offsets `+0x6C`
and `+0x64`. The body branches on `param_8`/`param_9` threshold ranges and
span-record flag bits to select packed 16-bit pixel paths. Those branches and
mask accesses are observed in the decompilation; their effect names and
high-level parameter meanings remain unproven.

`0x1012F130` is another method in the same table and adds 36,184 matched
bytes. Its captured slot `0x10176B60` contains `0x1012F130`; Ghidra decompiles
it as a `__thiscall` routine with the same span pointer, source dimensions,
destination buffer/pitch, and rectangle clipping. It traverses transparent
runs and row delimiters, then blends through the same five host-configured
channel masks described above. Address calculations also multiply horizontal
offsets by the mapped global at `0x101ACDB4`; its source-level name is unknown.
Ghidra found no direct calls or references to the entry. The owning vtable
class, live selection path, and exact effect meaning of its parameters remain
unresolved.

`0x10137E90` is the adjacent 14,750-byte sibling at slot `0x10176B64`, between
`0x1012F130` and `0x1013B8A0`. It reads the same span pointer, source bounds,
clip rectangle, destination buffer/pitch, and host mask globals. Its signature
has ten explicit arguments; the body branches on additional effect values and
uses `DAT_101ACDB4` in horizontal address calculations. The vtable slot is
direct evidence of table membership, while the class owner, dispatch route,
and source-level meaning of these arguments remain unknown.

`0x1012D2B0` is the preceding 7,686-byte sibling at slot `0x10176B58`.
Capstone decodes its entire indexed extent `[0x1012D2B0, 0x1012F0B6)` as 2,124
instructions. Ghidra shows the same clipped span stream and destination
buffer/pitch fields; this variant prepares packed values from `param_8` and
uses all five host-configured masks, including `DAT_101C92F0/F8`, in its RGB16
blend paths. The next table slot is a short thunk at `0x1012F0E0`, followed by
the already matched method at `0x1012F130`. Ghidra found no direct references
to this entry, so its dispatch owner and live caller remain unknown.

`0x1011F370` is another table member at slot `0x10176B40`; its indexed body
contains 11,831 bytes and ends at `0x101221A7`. The next indexed function starts
at `0x101221B0`, while the next table slot points to thunk `0x101221D0` and the
following slot points to `0x10122220`. Ghidra confirms the same span-record
traversal, clipping, destination buffer/pitch fields, and horizontal address
stride. This body references `DAT_101C92F0/F8` but not the three
`DAT_101C9300/08/10` masks used by several neighboring methods. Its pixel
format, owner class, dispatch path, and effect argument meanings therefore
remain uncertain; table membership and byte identity do not resolve them.

`0x10122220` is the variable-format sibling at slot `0x10176B48`. Its
17,222-byte indexed body ends at `0x10126566`; the next function begins at
`0x10126570`. Ghidra shows the shared clipping and run-record traversal, with
record flags selecting byte, short, integer, and packed-wide destination paths.
This method uses `DAT_101C92F0/F8` and `DAT_101ACDB4`; it does not reference the
three `DAT_101C9300/08/10` masks used by other table entries. The pixel-format
and flag contracts, table owner, and runtime caller remain unresolved.

`0x10126570` is the next table member at slot `0x10176B4C`, with a 12,039-byte
indexed body ending at `0x10129477`; the next indexed function begins at
`0x10129480`. Ghidra shows the same clipping and run-record traversal, with
record bits selecting byte, short, integer, and packed-wide pixel operations.
It uses `DAT_101C92F0/F8` and the address-scaling global `DAT_101ACDB4`, but not
the three common channel masks. `param_8` is unused in the decompilation, while
`param_9` and `param_10` steer threshold and weighted-blend branches. Their
source-level roles, the pixel-format and flag contracts, and the owning class
and live dispatch path remain unknown.

`0x101294F0` is the 15,799-byte method at slot `0x10176B54`; its indexed body
ends at `0x1012D2A7`, immediately before the next matched compositor at
`0x1012D2B0`. Ghidra shows the shared clipped span stream and uses the three
host-configured masks `DAT_101C9300/08/10` for its blend paths. The adjacent
slot `0x10176B50` is a scalar-deleting-destructor wrapper at `0x101294A0`, not
a compositor; its body calls `0x101294C0`, which stores `0x10176B50` as the
object vtable pointer. This independently supports the table address point,
but does not identify the owning class or live dispatch path. The blend
parameters and record flags remain semantically unresolved.

`0x10156E30` is a 14,839-byte method at slot `0x10176B88`; its indexed body
ends at `0x1015A827`, with the next indexed function beginning at `0x1015A830`.
Ghidra shows the same clipped 16-bit span traversal and use of all five
host-configured renderer masks. Neighboring table slots point to matched
compositors and a short thunk. Ghidra finds no direct reference or caller for
this method, so the owning class and live dispatch remain unknown. The mask
values in an actual frame and source-level meanings of its effect parameters
are also unresolved.

`0x101639B0` is the 14,769-byte entry at slot `0x10176B94`; its indexed body
ends at `0x10167361`, and the next indexed function begins at `0x10167370`.
Ghidra confirms clipped 16-bit destination addressing, the shared span-record
layout, and paths using all five renderer masks. The neighboring slot at
`0x10176B90` points to matched compositor `0x1015A8A0`; Ghidra found no direct
references or callers for this entry. Its record-flag meanings, effect
parameters, owning class, and runtime dispatch remain unresolved.

## Destructor and cleanup closure

The compositor pointers are interleaved with 13 scalar-deleting-destructor
wrappers. Each wrapper calls its paired destructor body, tests flag bit 0, calls
the already matched free wrapper `0x1016C784` when set, and returns `this`.
The paired bodies restore their observed vptr; nine also conditionally release
the field at `+0x0C` through `0x1016CD44` before calling shared cleanup
`0x100FF9F0`. Three short bodies tail-call that shared cleanup, and the body at
`0x101673B0` calls `0x10167DB0`, which restores another vptr and decrements
`DAT_101C9328`. These call relationships and field operations are visible in
Ghidra; the class names, ownership meaning of `+0x0C`, and meaning of the global
counter remain unknown.

All 13 wrappers, all 13 paired bodies, and both shared cleanup helpers
byte-match: 28 functions / 844 bytes. The wrapper/table pairs are at slots
`0x10176B08`, `0x10176B14`, `0x10176B20`, `0x10176B2C`, `0x10176B38`,
`0x10176B44`, `0x10176B50`, `0x10176B5C`, `0x10176B68`, `0x10176B74`,
`0x10176B80`, `0x10176B8C`, and `0x10176B98`. This closes the direct lifecycle
calls associated with the recovered compositor methods. The neighboring
state-transition methods and shared leaf stub are separately byte-matched; the
remaining uncertainty is the ownership and runtime use of those shared table
entries.

## Byte-match validation and limits

The reconstructed sources preserve each mapped instruction, including direct
relative calls and the implicit string and packed-pixel instructions that VC6's
inline assembler cannot express. `tools/verify_client_matches.py` compiles the
client inventory with the recorded VC6 flags and confirms the indexed methods
byte-for-byte against the mapped capture using objdiff 3.8.0. The 24 compositor
methods account for 381,241 bytes; their 28 lifecycle/cleanup functions account
for another 844 bytes. The two final vtable stubs add 8 bytes: the 54
renderer-family functions cover 382,093 byte-matched bytes. The two adjacent
state-transition functions are a separate 77-byte match. The two unassigned
table-referenced leaf functions add 9 bytes with their table ownership still
uncertain. No direct-call relocations are unresolved in these verified extents.

The Ghidra signature does not recover the original parameter names or the
meaning of each effect value. The runtime target masks can vary with host
configuration, and this static reconstruction has not yet been compared against
a captured live frame. Byte identity is verified against the mapped Main.dll
capture; the owner class and exact runtime caller remain open questions.
