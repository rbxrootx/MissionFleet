# Current Main.dll three-child parent initializer

The pinned installed `Main.dll` function `FUN_5881DE10` spans
`0x5881DE10..0x5881DF41` (306 bytes). Its
[instruction source](../src/client-current/Main/FUN_5881de10.cpp) matches the
entire body at 100% under objdiff 3.8.0, with eight mapped operands checked.
The instruction source preserves the exact x86 code; the separate
[portable C++ model](../src/client-current/semantic/ParentUiChildInit.cpp)
expresses its normal-path behavior and does not claim byte identity.

The Ghidra decompilation in `var/current-main-next/5881de10-ghidra.c` and the
mapped instructions show this sequence:

1. Copy receiver `+0x64` to `+0x70` and `+0x74` to `+0x80`.
2. If `+0xD8` is null, allocate `0x120` bytes, call the
   [communicator ID panel constructor](current-main-communicator-id-panel-58849b70.md)
   `FUN_58849B70` with the
   parent pointer, `(parent +0x4)+0x37`, `(parent +0x8)-0xA0`, `0, 0, 0x40`,
   and store its result at `+0xD8`. Allocation failure stores null.
3. If `+0xDC` is null, allocate `0x18C` bytes, call the already matched
   `FUN_58843380` communicator-configuration constructor with
   `(parent, 100, 100, 0, 0, 0x40)`, and store its result at `+0xDC`.
4. If `+0xE0` is null, allocate `0xA4` bytes, call the already matched
   `FUN_58847AB0` child constructor with
   `(parent, 0xD2, 0xBE, 0, 0, 0x40)`, and store its result at `+0xE0`.
5. OR the 16-bit receiver field at `+0x24` with `0x000F` and return.

The three conditional creations run in that order. Failure to allocate one
child does not skip later children. The [native cases](../tests/native/parent_ui_child_init_test.cpp)
verify call order, allocation sizes, constructor arguments, existing-child
behavior, allocation and constructor failure, and 32-bit coordinate wraparound.
Run `python tools/verify_parent_ui_child_init.py` for this normal-path model,
and `python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 5881DE10` for the exact
instruction match.

RTTI identifies the `+0xD8` child as `CPannelCommunicatorIDPannel` and the
`+0xE0` child as `CPannelCommunicatorDetailedUserInfo`. The parent class is
not established. The model does not cover the original SEH cleanup or prove how
these panels render. No original-client runtime comparison has been performed.
