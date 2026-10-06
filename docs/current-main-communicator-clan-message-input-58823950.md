# Current Main.dll communicator clan-message input handler

The RTTI-backed `CPannelCommunicatorClanMessage` vtable at `0x5899DB64`
stores `FUN_58823950` in slot `+0x10`. Its constructor
[`FUN_58823270`](current-main-communicator-clan-message-constructor-58823270.md)
installs that vtable, and the verified parent constructor stores the object at
the communicator ID panel's child `+0x114`. The RTTI audit checks the class
name, the constructor's vtable write, and this method slot.

The method tests bit `0x0002` in receiver word `+0x24`, forwards the event
pointer through a nested child chain by calling each child's virtual slot
`+0x10`, then dispatches on the DWORD at event offset `+4`. Mapped branches
include values `0x102`, `0x200`, and `0x201` through `0x20A`. They read and
update receiver fields including `+0x50`, `+0x54`, `+0x84`, `+0x88`, `+0x8C`,
`+0x90`, and `+0x94`; call helpers `FUN_58823110`, `FUN_588231A0`, and
`FUN_588231D0`; and update child/control state. Event values resemble
keyboard/mouse messages, but the argument ABI and their exact meanings have
not been proven.

The complete indexed body is 926 bytes, from `0x58823950` through
`0x58823CED`, followed by the next indexed function at `0x58823D10`. The
instruction source matches all 926 bytes, with 59 operand targets checked.
Nested child types, field meanings, scroll units, callback contracts, and the
rendered interaction remain unresolved. No emulator input or visual test was
performed.

Its four direct helper callees shared with the notification handler are
documented in [the event-helper notes](current-main-communicator-clan-message-event-helpers.md).
