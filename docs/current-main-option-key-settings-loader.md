# Current Main option key-settings loader

`FUN_588a0450` is the RTTI-backed `CPannelOption` method at vtable slot
`+0x18`. The vtable entry is at `0x589A0218`; its complete-object locator at
`0x589A9424` points to the type descriptor `.?AVCPannelOption@@`. The function
occupies one Ghidra range, `0x588A0450..0x588A1038`, totaling 3,049 bytes.
ObjDiff 3.8.0 verified all bytes and checked seven mapped operand records.

## Evidence from the original

Ghidra records one direct caller, `FUN_588a3200`, at `0x588A324D`. The caller
is the message handler associated with the same `CPannelOption` vtable. In its
`param_3 == 2` branch, a match against receiver slot `+0x93` runs prerequisite
helpers, calls `FUN_5889f0c0` and `FUN_5889fca0`, then invokes this loader and a
virtual method on the panel. This confirms the loader participates in an
option-panel event path; the event's friendly name is not known.

The method validates the 31 key codes at receiver offsets `+0x150` onward.
Codes outside the accepted ranges and duplicate bindings call
`FUN_5889e970`. It then reads named values under
`SOFTWARE\FleetMission\FleetMissionCN\CONFIGURATION_KEY` through host API
function pointers and writes values into receiver fields through `+0x1C8`.
Visible names include `PortAllTurets` (spelled this way in the client),
`StarboardAllTurrets`, `GunElevationUp`, `PreciseWeaponControl`, `Fire`,
`SelectFrontWeapon`, `EngineAccelerate`, `ReturnToTheShip`, `Dive`, `Bombing`,
`SmokeBomb`, `Submerging`, `CriticalSubmerging`, and `MapGridOnOff`. It closes
the opened configuration handle through a host function pointer.

## Uncertainty and validation

The key-code meanings, full defaults schema, host API contracts, configuration
versioning, and runtime effect of restored bindings remain unresolved. This is
a static byte match; no live registry or original-client options interaction
test was run.
