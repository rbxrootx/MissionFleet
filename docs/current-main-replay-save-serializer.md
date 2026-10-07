# Current Main replay and battle-save serializer

The installed `Main.dll` replay/save routine at `0x587EB370` is reached from
the byte-matched `FUN_587F8760` at `0x587FAE93`. The caller checks receiver
`+0x21C38`, skips the call when it is zero, and otherwise pushes the mapped
`SaveFile_0001` string at `0x5899C908`. The serializer has three Ghidra body
ranges totaling 1,808 bytes. Its only direct in-closure call is the six-byte
thunk at `0x5897CE98`, which makes the closure two functions and 1,814 bytes.

## Behavior supported by the original code

The serializer references the mapped `ReplayFile` literal at `0x589C8EE0`
while formatting `%s/%s.nsf`. If its initial file-open callback returns the
observed failure value, it inspects a four-digit suffix and enters a retry
path formatted as `%s/%s_%04d.nsf`. Once the receiver's handle field at
`+0x21C3C` is not `-1`, it passes the literal `FleetMission Battle Save file`
to an indirect callback with the receiver buffer at `+0x21918`, then
initializes nearby header fields. Later it walks linked entries rooted at
`[0x58A247F8] + 0x0C`, advances through each entry's `+0x78` link, and passes
`0x114`-byte spans beginning at entry `+0x350`, together with the active
handle, to an indirect callback.

The direct call at `0x587EB48F` targets `0x5897CE98`. The thunk itself is
exactly `jmp dword ptr [0x5898C26C]`; the indirect destination has not been
resolved. The serializer's two direct calls outside this slice target the
already byte-matched `0x58789FB0` helper and `0x5897CBDA` security-cookie
check.

The reconstructed functions are in
[`FUN_587eb370.cpp`](../src/client-current/Main/FUN_587eb370.cpp) and
[`FUN_5897ce98.cpp`](../src/client-current/Main/FUN_5897ce98.cpp). They retain
the exact instruction bytes from the pinned mapped image, split according to
the fresh Ghidra ranges in
[`main-replay-save-serializer-body-ranges.tsv`](../config/NF2_2026/main-replay-save-serializer-body-ranges.tsv).
ObjDiff 3.8.0 reports both functions byte-identical at 100.0%. The focused
check is `python tools/verify_current_main_replay_save_serializer.py`.

## Unresolved details

The record and header schemas, field meanings, callback contracts, precise
filename selection policy, and the indirect thunk destination remain unknown.
The caller's `SaveFile_0001` argument is recorded as evidence; its semantic
role is not established here. The byte match and static checks do not confirm
that the original client can create or replay a file at runtime. No emulator
save/replay test has been performed.
