# Current Main.dll communicator ID panel constructor

The installed client's `FUN_58849B70` is the constructor used for the parent
initializer's `+0xD8` child. The parent `FUN_5881DE10` allocates `0x120`
bytes, passes parent-derived coordinates and flag `0x40`, then stores the
constructor result at `+0xD8`.

The pinned `Main.mapped.bin` shows the constructor calling base initializer
`FUN_589031A0` at `0x58849BBB`, writing the `CMenuScreen` vtable
`0x5898C500` at `0x58849BC0`, then writing `0x5899E780` at `0x58849BE6`.
MSVC RTTI points from the latter vtable to
`.?AVCPannelCommunicatorIDPannel@@`. This establishes the concrete panel name
from original binary metadata. The constructor subsequently allocates and
initializes nested objects, including results stored at receiver
`+0xA4/+0xA8/+0xAC/+0xB0` and `+0xCC/+0xD0/+0xD4/+0xD8/+0xDC`.
Their individual visual roles remain undetermined.

The Ghidra-derived function inventory ended at `0x5884A57C`, immediately
before the constructor's `ret 0x18` at `0x5884A57D..0x5884A57F`.
The next indexed function begins at `0x5884A580`. The corrected inventory
therefore assigns `0x58849B70..0x5884A57F` (2,576 bytes) to this function.
Its [instruction source](../src/client-current/Main/FUN_58849b70.cpp)
matches all 2,576 bytes at 100% under objdiff 3.8.0, with 86 mapped operand
targets checked. Run `python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 58849B70` and
`python tools/verify_current_communicator_rtti.py` to reproduce both checks.

The instruction source is an exact x86 reconstruction, not recovered
high-level C++. The nested control identities, resource descriptors,
exception cleanup, interactions, and rendered appearance are not yet
verified. No original-client runtime comparison was performed.
