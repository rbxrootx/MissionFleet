# Current Main `CWarehouseLockedSlotSprite`

The captured `Main.dll` identifies the table at `0x589A2204` through its
Complete Object Locator at `0x589A2200`, locator `0x589AABB8`, and TypeDescriptor
`0x589CDDB8` (`.?AVCWarehouseLockedSlotSprite@@`). Its seven slots are
`FUN_588FB4F0`, `FUN_58903400`, `FUN_58903420`, `FUN_58822F10`,
`FUN_5873B360`, `FUN_58902FE0`, and `FUN_589033F0`.

The constructor `FUN_588FB570` was already byte-verified. It installs this
vtable and initializes child pointers at `+0x60` and `+0x64`. This slice adds
the destructor body `FUN_588FB470`, deleting wrapper `FUN_588FB4F0`, and
nonvirtual child-state helper `FUN_588FB510`; all three now match the pinned
mapped image byte-for-byte (243 bytes total). The destructor reinstalls the
vtable, releases and clears the two child pointers through virtual slot 0 with
flag 1, then calls `FUN_58902C10` and restores the exception-list pointer.

`FUN_588FB510` is called directly by `FUN_588FF420` at `0x588FF436` on the
object loaded from the caller's `+0x7C` field. Selector 0 sets bit 0 in both
children's words at `+0x24`; selector 1 clears it in the first child and sets
it in the second; selector 2 clears it in both. The helper is not a vtable
entry. The caller then iterates its item-pointer range at `+0x70..+0x74` and
calls `FUN_588F7D00` for the selected items.

The helper's selector meanings, the flag's meaning, both child roles, and the
ownership contracts remain unknown. No emulator interaction test has been
run. The standalone structural checks are in
`tools/verify_current_warehouse_locked_slot_sprite.py`; byte matching is
checked with `tools/verify_client_matches.py`.
