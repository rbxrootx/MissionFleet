# Main.dll shared Trade/WAW room-type method

Fresh Ghidra body exports `58758ee0` and `587cef70` agree on one complete
range, `[0x588D2300, 0x588D2471)`, containing 369 bytes and 111 instructions.
The mapped bytes decode across the same complete extent. The fresh edge exports
record the function's data reference to `0x589A0F2C` and no incoming direct
call. The known entry is therefore through a vtable.

The mapped cell at `0x589A0F2C` is both slot 17 of the vtable at `0x589A0EE8`
and slot 7 of the vtable at `0x589A0F10`. Their RTTI descriptors identify
`.?AVCRoomTypeTrade@@` and `.?AVCRoomTypeWAW@@`, respectively. Both views point
to `FUN_588D2300`. This proves the shared table entry without assuming the
classes' inheritance or other relationship.

The body passes `[this+0x50]`, zero, and `0xC4`, then `[this+0x54]`, zero, and
`0x50` to byte-matched `FUN_5897CC48`. It writes fixed integers and masked flag
bits through the two pointers. It passes the NUL-terminated key
`MESSAGESTRING_ROOMTYPE_WAW` at `0x5899A4C8` through `[0x5898C030]`; the
captured callback pointer is `0x59A98290`. The result is copied to
`[this+0x50]`, bounded to `0x30` bytes including the terminator. Main.dll
imports `UtilsGetLanguageText` from `FleetMissionUtils.dll`, and its installed
export is at RVA `0x8290`; the callback identification follows only if that
module is loaded at `0x59A90000`. The capture does not establish that base, so
the name is a strong inference.

The method tests count and table-pointer fields at `DAT_58A24754+0x164` and
`+0x18C`, then selects the first row. It stores `row[+4] + [this+4] + 0x2C`
through `[this+0x5C]+0x6C`, then copies child fields `+0x88` and `+0x8C` to
`+0x50` and `+0x54`. The adjacent `CRoomTypeWAW` constructor's Ghidra output
sets `DAT_58A24754` from `FUN_588F3D70(".\\spr\\ITWAW.spr", 0, 1)` when its
resource allocation succeeds. These records and child fields have no
established schema or semantic labels.

On the method's count/table failure path, the instructions clear EAX and then
read `[EAX+4]`, an absolute address-`0x4` read. Its validity is unresolved and
it may fault. The method ends with `ret 4` without a visible read of that stack
argument. The two pointer structures, helper and callback contracts, stack
argument, and visible effect remain unresolved.

The emitted source preserves the mapped x86 instruction stream and is verified
byte-identical by objdiff 3.8.0. It is instruction-level source, not recovered
high-level C++. This is static mapped-image, Ghidra, and RTTI evidence; no
runtime or visual emulator test was performed.
