# Current Main member squad-join proposal path

`FUN_5883DDF0` is a 384-byte helper in the installed 2026 `Main.dll` capture.
Verified handlers `FUN_587BB700` and `FUN_588C1650` call it on their state-3
branch after resolving and displaying `MESSAGESTRING__MEMBER_SQUAD_JOIN_PROPOSE`.
Both callers pass two values from the incoming message.

## Observed behavior

The helper calls `0x5897152E` with size `0x18`, saves its return value, then
passes that block and the two inputs through callback slot `0x5898C194`. It
compares the saved block pointer with entries in receiver collection `+0x21C`
through callback `0x5898C1A4`. A zero result from that comparison takes the
early-return path; otherwise it appends the pointer, calling `FUN_588F6890`
when collection capacity must grow.

If receiver flags at `+0x24`, masked with `0x1F00`, equal `0x200`, the function
calls `FUN_589088D0` for receiver fields `+0x210`, `+0x214`, and `+0x218`, then
updates `+0x1E4` from the collection count through `FUN_58907360`.

## Uncertainties

The callback contracts, collection type, identities of the two input values,
comparison semantics, flag meaning, and resulting UI/state effect are not
established. The localized caller identifies the squad-join proposal context,
but not the precise domain action. No emulator test was performed.
