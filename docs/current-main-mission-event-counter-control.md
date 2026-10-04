# Current Main mission-event counter control

`FUN_588D9E10` is called by the verified mission-event `DoAction` routine
`FUN_587A90D0` and the verified `CShip_MapObjectScreen` constructor
`FUN_588E05C0`. Ghidra's assertion/source references in `FUN_587A90D0` name
`MissionEventManager.cpp` and `DoAction`; this establishes caller context but
not the allocated object's domain role.

The helper decodes receiver DWORDs at `+0xD98` and `+0x398` by XOR with
`0xAAAAAAAA`, stores the lower value at `+0x1434`, re-encodes it into
`+0x1438/+0x143C`, and stores lower*100 at `+0xDD4`. It computes a capped
percentage at `+0x1444` from lower*100 divided by decoded `+0xD98`, with a zero
denominator producing zero. It allocates an `0x8C`-byte child and initializes
it from receiver coordinates at `+4/+8`. The call to `FUN_5884D420` receives
the local record at `+0x3A0`, the low five bits of receiver data
`+0x100C+4`, the lower counter, decoded `+0xD98`, and two zero values. The
helper sets child word `+0x26` to `0x2710`, releases existing resources at
`+0x40/+0x30`, and clears bit 0 of child word `+0x24`.

The complete SEH-protected body is 367 bytes with 7 mapped operand targets and
matches the pinned original. Counter meanings, record layout, child type,
object value, and `FUN_5884D420` semantics remain unresolved. No runtime client
or emulator test was performed.
