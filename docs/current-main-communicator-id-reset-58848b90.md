# Current Main.dll communicator ID panel reset callback

The pinned `Main.dll` vtable for `CPannelCommunicatorIDPannel` contains
`FUN_58848B90` at slot `+0x08`. The verified event handler `FUN_58848BC0`
calls that slot after visiting its `+0x6C` and `+0x64` linked action lists
for the `+0xD4` target. The vtable entry is checked directly from the mapped
binary by [`verify_current_communicator_rtti.py`](../tools/verify_current_communicator_rtti.py).

The callback copies receiver DWORD `+0x04` to `+0x50` and `+0x08` to `+0x54`,
sets DWORD `+0x58` to zero, and changes the receiver word at `+0x24` to
`(old & 0xE4FF) | 0x0400`. It then returns without stack arguments. These
stores and the mask constants appear directly in the original instruction
stream at `0x58848B90..0x58848BBB`.

The [readable x86 instruction source](../src/client-current/Main/FUN_58848b90.cpp)
preserves the original instruction order and matches all 44 bytes at 100%
under objdiff 3.8.0; the function has no mapped operand targets. Run
`python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 58848B90` to reproduce the
match. A semantically equivalent ordinary C++ expression did not reproduce
the original instruction selection under the available compiler, so the
byte-matched source remains explicit x86 assembly.

The meanings of the copied coordinates and flag bits, and the visible result
of the preceding event, remain unresolved. No running-client comparison was
performed.
