# Current Main event payload builder

The installed FleetMission `Main.dll` maps `FUN_587e9a10` at
`0x587E9A10..0x587EA56B`, one contiguous Ghidra body totaling 2,908 bytes.
Ghidra records direct calls from `FUN_587F7E10`, `FUN_587ED430`,
`FUN_587FF150`, `FUN_587ED5B0`, `FUN_587FD810`, `FUN_587EE2C0`, and
`FUN_588970D0`. For example, `FUN_587ED5B0` passes event values `0x5B` through
`0x5E`, while `FUN_587FF150` passes `0x28`.

## Behavior supported by the original code

When the second argument is zero, the routine dispatches on its third argument.
Several cases inspect up to eight active entries in the object array beginning
at `param_1+0x98`. They form payloads from the selected entries and values
computed from global coordinates and record scale/offset fields. The routine
serializes those buffers through `FUN_5897CD4C` and routes different cases
through `FUN_587E5A70`.

The code-0 path forms a `0x101` payload from the active-entry count and
coordinate fields. It passes the payload through `FUN_5897CD4C`, then reaches
`FUN_58970C70` with message `0x80020500`. That callee is independently
byte-matched and documented as the current client's outbound record sender;
its wire header and socket send behavior are described in
[the sender evidence](current-main-network-sender.md).

Other observed paths include event values `0x01` and `0x02`, `0x0A` and
`0x0B`, `0x0C`/`0x0D`, `0x15`/`0x17`, `0x16`, `0x1F`/`0x20`, `0x28`, and
`0x5A` through `0x5E`. Several build compact buffers for `FUN_587E5A70`.
Event `0x5A` conditionally forms a coordinate payload and updates a local
state flag. Other paths update local coordinate/selection state, allocate a
small temporary object, or return without sending. This describes observed
branches, not recovered protocol names.

The source preserves instructions from the Ghidra body and was compared with
the pinned mapped image using ObjDiff 3.8.0. `FUN_587ED5B0`, its 74-byte
dispatcher for event values `0x5B`–`0x5E`, is now byte-matched as part of the
[ship-map action helper graph](current-main-ship-map-action-helper-graph.md).
Local analysis artifacts include `var/current-main-next/587e9a10-ghidra.c`,
its range/reference log, and `var/current-main-next/587ed5b0-ghidra.c`.

## Unresolved details

The semantic names for event codes and payload fields, the contract of
`FUN_587E5A70`, and the owning class are not recovered. Although one route
reaches the verified socket sender, this local capture contains no live-server
packet comparison; server compatibility remains unverified.
