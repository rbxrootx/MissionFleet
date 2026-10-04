# Current Main.dll parent UI-child constructor

The installed client's pinned `Main.dll` contains `FUN_58847AB0` at
`0x58847AB0..0x588481E9` (1,850 bytes). Its [instruction source](../src/client-current/Main/FUN_58847ab0.cpp)
reproduces the complete indexed body: objdiff 3.8.0 reports 100% identical
code and the verifier checks all 61 mapped operand targets. This is an exact
machine-code reconstruction; the `_emit` source is not recovered high-level C++.

The Ghidra-decompiled caller `FUN_5881DE10` allocates `0xA4` bytes when its
`+0xE0` field is null, invokes `FUN_58847AB0(parent, 0xD2, 0xBE, 0, 0, 0x40)`,
and stores the result back at parent `+0xE0`. The constructor's mapped body
calls base initializer `FUN_589031A0`, writes vtable pointers `0x5898C500`
then `0x5899E518`, sets receiver `+0x50/+0x54/+0x58/+0x5C`, makes nested
allocations through `FUN_5897CC4E`, calls text-control initializer
`FUN_58733280` four times, and stores those results at receiver
`+0x70/+0x74/+0x78/+0x7C`. It also calls `FUN_58902D20` three times and ends
with `ret 0x18`. The instruction address comments in the source identify each
observation.

Validation: `python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 58847AB0` checks all 1,850
bytes and 61 mapped operands. The parent caller's decompilation is preserved
locally at `var/current-main-next/5881de10-ghidra.c`.

The vtable `0x5899E518` resolves through original MSVC RTTI to
`CPannelCommunicatorDetailedUserInfo`; the concrete child roles, resource
descriptors, exception/unwind semantics, and rendered appearance remain
unknown. No original-client or
emulator runtime test has been performed, so this match alone does not establish
a bootable client or visible screen.
