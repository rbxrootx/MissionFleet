# Current Main.dll communicator clan-message notification handler

RTTI identifies the vtable at `0x5899DB64` as `CPannelCommunicatorClanMessage`.
The verified constructor `FUN_58823270` installs it, and the verified parent
`FUN_58849B70` stores the object at child offset `+0x114`. The handler is the
vtable entry at `+0x18`; `verify_current_communicator_rtti.py` checks the slot
against the pinned `Main.dll` image.

The 129-byte body first checks whether its second stack argument equals `2`.
On that path, it compares its first stack argument with receiver child pointers
at `+0x80`, `+0x78`, `+0x7C`, `+0x9C`, and `+0xA0`. A match at `+0x80` invokes
the receiver's vtable slot `+0x08`. The other matches call helpers
`FUN_589087F0`, `FUN_58823110`, `FUN_588231A0`, or `FUN_588231D0`; the `+0x78`,
`+0x9C`, and `+0xA0` cases also call `FUN_58823210`. All branches return zero
with `ret 0x0C`. This describes observed control flow without assigning names
to the arguments or child objects.

The complete indexed extent is `[0x58823EB0, 0x58823F31)`. Capstone decodes all
129 bytes through `ret 0x0C` at `0x58823F2E`; the next indexed function begins
at `0x58823F40`. The seven mapped operand targets are checked by the function
match verifier.

The stack-argument ABI, value `2`, notification source, child identities, and
helper effects remain uncertain. No direct virtual-call site or emulator
interaction test has been established.
