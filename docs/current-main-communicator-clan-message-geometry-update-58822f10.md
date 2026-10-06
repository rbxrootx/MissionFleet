# Current Main.dll communicator clan-message geometry update

The RTTI-backed `CPannelCommunicatorClanMessage` vtable at `0x5899DB64`
stores `FUN_58822F10` in slot `+0x0C`. The verified
[`FUN_58823270` constructor](current-main-communicator-clan-message-constructor-58823270.md)
installs this vtable, and its verified parent constructs the child at
communicator ID panel offset `+0x114`. The RTTI check verifies this method
slot against the pinned `Main.dll` image.

The method returns early unless receiver flag bit `0x0004` is set and state
bits `(+0x24 & 0x1F00)` equal `0x0100` or `0x0400`. It compares current
position at `+0x04/+0x08` with targets at `+0x50/+0x54`, and current bounds at
`+0x28/+0x2C` with targets at `+0x58/+0x5C`. When they differ, it advances
position and bounds toward the targets through the matched recursive helpers
`FUN_58902E10`, `FUN_58902CE0`, and `FUN_58902D20`. Once the observed values
agree, it updates state bits and walks the child chain at `+0x3C`, dispatching
through each child's virtual slot `+0x0C`.

The complete indexed body is 500 bytes, from `0x58822F10` through
`0x58823103`. It has a `ret` path at `0x588230FF` and an indirect tail-jump
path at `0x58823102`; both fit the indexed boundary. Its instruction source
matches all 500 bytes with seven mapped operands checked. The field names and
units, state meanings, exact easing behavior, callback contract, and rendered
result remain uncertain. No emulator layout or visual test was performed.
