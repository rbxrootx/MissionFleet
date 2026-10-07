# `CRoomTypeDKT2` constructor

The installed Main.dll contains an exact 347-byte constructor at
`[0x588CD3C0, 0x588CD51B)`. Fresh Ghidra body and edge exports report 114
instructions across that single contiguous range, and the emitted candidate
matches the mapped instruction bytes.

Byte-matched `CRoomSettingManager` (`FUN_588C9280`) calls the constructor at
`0x588CAA25` only after the resource lookup at `0x588CAA00` accepts resource
`0x70`. It passes pointers based at manager offsets `+0x68` and `+0x12C`, then
stores the returned object at `+0x188`. The focused verifier reads each caller
instruction directly from the installed mapped image.

The body calls byte-matched `FUN_588D02E0`, `FUN_5897CC4E`, and
`FUN_588F3D70`. It installs vtable `0x589A0D38`; the vtable's RTTI resolves to
`.?AVCRoomTypeDKT2@@`. On the resource-`0x198` path, the constructor passes
`.\SPR\ITRSGB2.spr` to the sprite-file
initializer `FUN_588F3D70` and stores the returned object at receiver `+0x58`.
The name identifies the requested installed asset; the recovered code alone
does not establish its on-screen use.

The constructor checks loaded-object fields `+0x164` and `+0x18C`, selects
records, copies six DWORDs from each selected record into child objects at
receiver offsets `+0x60` and `+0x64`, and copies the first record's `+8` value
through the child at `+0x5C` to that child object's `+0x74` field. These are
observed data movements; the selected-record schema, child roles, and virtual
behavior remain unknown.

On the third-value fallback, the mapped instructions clear EAX and then read
`[EAX+8]`, which is an absolute address-`0x8` access. Its valid-state behavior
remains unresolved. No emulator or visual runtime test was performed; this is
static evidence from the installed client, Ghidra's fresh body/edge exports,
and RTTI.
