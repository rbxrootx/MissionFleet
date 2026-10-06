# Current Main.dll communicator clan-message state reset

The `CPannelCommunicatorClanMessage` vtable at `0x5899DB64` stores this
function at `+0x08`. The verified notification handler `FUN_58823EB0` reaches
that slot when its first stack argument equals the receiver's child pointer at
`+0x80`. The constructor installs this RTTI-backed vtable, and the parent
constructor stores the instance at `+0x114`; the RTTI verifier checks the
vtable entry.

The 73-byte function clears mask `0x1B00` and sets bit `0x0400` in the
receiver's word at `+0x24`, zeros receiver `+0x58`, and clears bit 0 in the
state words at `+0x24` of objects referenced by receiver `+0x74` and `+0x70`.
It then invokes the indirect method at slot `+0x18` of the object referenced by
`[0x58A24584]+0x30`, passing the global object, `0x64`, and zero as stack
arguments. The code returns immediately after that call.

The indexed extent is `[0x58822EC0, 0x58822F09)`, fully decoded through `ret`
at `0x58822F08`, with the next function at `0x58822F10`. The one mapped
operand target is checked by the function verifier. The field and state
meanings, object types, indirect method contract, and user-visible result
remain unknown; no emulator interaction test has been performed.
