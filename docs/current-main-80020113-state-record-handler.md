# Current Main `0x80020113` variable-record update handler

The installed `Main.dll` handler at `0x58807910` is reached by the byte-matched
dispatcher `FUN_587BB700` in event case `0x80020113`. The dispatcher's two call
instructions are at `0x587BCF17` and `0x587BCEF9`; the Ghidra decompilation's
associated path labels are `0x587BCF1C` and `0x587BCEFE`. The low bit of
`param_3[0xF]` selects different event-relative pointer arguments. The receiver
flag at `+0x1BC` bit 0 determines whether the handler reads an optional
four-DWORD bit mask.

## Behavior supported by the original code

For each record, the handler copies `0x2E` DWORDs from `record + 0x44`. It
compares the 16-bit value at `record + 0x10A` with
`(((DWORD at record + 0x44) >> 1) & 0x1F) * 0x18`. On mismatch, it emits the
diagnostic `ShipContentsNumberOfWaeponSetSerials != /sizeof_WeaponSetSerials`
and enters a fatal/error callback path. When the receiver's mask flag is set,
one bit per record is read from the copied four-DWORD mask and passed as a
boolean to `FUN_58806F60(record, record + 0x114, flag)`.
The matched helper's observed branches are documented in
[the component-record updater notes](current-main-58806f60-component-record-updater.md).

At `0x58807C06`, the handler also calls the matched selected-object component
and cargo refresh helper with `ECX=[0x58A245C4]` and the word at
`selectedObject + 0x350`. See the
[selected-object refresh notes](current-main-58857020-selected-object-refresh.md)
for the observed slot/cargo loops and their unresolved field meanings.

The next record address advances by `0x114`, the record's 16-bit value at
`+0x10A`, and `0x20` times its byte at `+0x100`. After the loop, the handler
calls `FUN_58907990`, moves the selected pointer from `[0x58A247F8]+0x10` to
`+4`, and calls the byte-matched 32-slot builder `FUN_587A6220`. It then writes
receiver state and calls additional scene/map/UI helpers. Their exact behavior
is not assigned here.

The source at
[`FUN_58807910.cpp`](../src/client-current/Main/FUN_58807910.cpp) preserves the
complete 1,070-byte decoded instruction stream and passes byte comparison
against the pinned mapped `Main.dll` using the repository's pinned clang-cl
compiler. Its evidence record is in
[`build_current_main_verifications.py`](../tools/build_current_main_verifications.py).

## Unresolved details

The event-record structure, meanings of the `+0x100` and `+0x10A` fields,
mask-bit semantics, receiver/global object types, and visible effect are
unknown. Multiple later scene/map/UI callees are still unmatched. Ghidra leaves
some register-derived state as `unaff_*`. This is a static byte match; no
emulator runtime test has been performed.
