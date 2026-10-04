# Current Main child state and division helper

This pass reconstructs `FUN_5877E7A0`, an 82-byte method called twice by
`FUN_588C78F0` at offsets `0x1A3` and `0x1B5`. ObjDiff 3.8.0 confirms a 100%
object-code match against the installed `Main.dll`; this body has no operand
relocations. The caller's depth-three direct-call audit now reports every
inventory-backed edge as verified.

The captured instructions clamp the first integer argument at zero and write
the result to offsets `+0x58` and `+0x5C` of the object referenced at receiver
`+0x70`. They store the immediate `0x40000000` at that object's `+0x60`, then
store `max(min(argument1, argument2), 1)` at receiver `+0x54`. Finally, they
multiply the embedded `+0x58` value by receiver `+0x68`, divide the signed
product by the clamped value at `+0x54`, and store the quotient at receiver
`+0x60`.

Receiver and embedded-object types, field units, and the externally visible
contract remain unknown. The constant and arithmetic are recorded as observed;
their UI or gameplay meaning is not established. No runtime or visual test was
performed.
