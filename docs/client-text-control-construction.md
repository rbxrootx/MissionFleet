# 2062 Main.dll text-control construction

This note covers the archived 2062 `Main.dll` constructor at `0x10018600`, its
base initializer, buffer allocator thunk, and constructor-failure cleanup. The
constructor body is byte-matched against the local unpacked client, but its
current source is instruction-level assembly. The evidence below describes
observed behavior; it does not claim the original C++ class declaration or
compiler source has been recovered.

## Construction path

Ghidra's disassembly and pseudocode show `0x10018600` calling
`0x100FE9B0(this, owner, x, y, right, bottom, 0x40)` first. That base
initializer writes the control rectangle, initializes its child and sibling
list links, sets style bits, and, when `owner` is nonnull, attaches the control
through `0x100FEF00` and `0x100FEFA0`.

After the base call, the constructor writes the supplied values at `+0x50`,
`+0x60`, `+0x64`, and `+0x68`; initializes `+0x54`, `+0x58`, and `+0x5C` to
zero, eight, and sixteen; then calls `0x1016C7A0` with `0x80`. That six-byte
function jumps through the runtime slot at `0x1017515C`, so its concrete
allocator target is not established by static analysis. On return, the
constructor stores the pointer at `+0x6C`, clears its first byte, updates the
style word at `+0x24` with `(old & 0xE5FB) | 0x0500`, installs the final vtable
pointer, clears fields `+0x70` through `+0x7C`, clears byte `+0x80`, and clears
the dword at `+0x180`.

The call at `0x1002C3D0` supplies owner `this`, null for the second argument,
`DAT_101C569C`, coordinates `(0x14A, 0x208)`, extent `(800, 0x21C)`, and final
values `(0x00DCDCDC, 0, 0)`. It then calls `0x100188E0` with `0x32`, which
writes that value to offsets `+0x70` and `+0x74`. The semantic names for these
fields and the resource at `DAT_101C569C` remain unknown.

## Constructor-failure cleanup

The constructor registers an MSVC exception frame at entry. Its scope table at
`0x10177618` begins with signature `0x19930520`; Ghidra models the state as
`-1` before base initialization and `0` after the base call. The unwind thunk
at `0x1016D568` reaches a funclet that loads the saved `this` pointer and calls
`0x101027D0`. That wrapper restores the base vtable and calls
`0x100FEB90`.

`0x100FEB90` removes the object from its owner list and child/sibling links,
then clears the corresponding link fields. This establishes the constructor's
base-subobject cleanup path when a later operation unwinds. The precise C++
construct and compiler options that produced this exception frame have not
been recovered: the current VC6 source probe reproduces the ordinary field
writes but does not emit the observed EH registration or unwind metadata.

## Validation and limits

The 206-byte body at `0x10018600` is recorded in
`config/NF2_2062/client-verifications.json` and matches the mapped target
bytes. Its relocations target `0x100FE9B0` and `0x1016C7A0`. This proves the
instruction sequence and call destinations, not the identity of the allocator
behind `0x1017515C`, the user-facing meaning of the fields, or the original
source-level type hierarchy. Do not count the current assembly source as a
typed C++ decompilation of this constructor.

VC6 SP5 `/O2 /GX` source probes modeled the function as a derived
`TextControl` constructor and allocated 128 bytes with either
`new char[0x80]` or an explicit `operator new(0x80)` call. Both generated the
same `0x19930520` exception-frame signature, allocator call shape, and
base-destructor unwind funclet. This supports (but does not prove) that the
target allocates its buffer with a C++ `new` expression. The corrected-layout
probe reaches 94.0833% objdiff similarity, not a match: VC6 emits object relocations for its
EH handler and `__except_list`, and schedules the allocation argument and EH
state before the target's ordinary field writes. The mapped target contains
the corresponding fixed addresses and a different instruction order. The
byte-exact assembly remains the verified source until those differences are
resolved without weakening the byte check.

The probe also rejected an earlier layout guess: the target only writes one
byte at `+0x80`; the final cleared dword is at `+0x180`. Treating `+0x80` as an
0x80-byte embedded array incorrectly placed that dword at `+0x200`.
