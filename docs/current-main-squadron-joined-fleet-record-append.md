# Current Main.dll joined-fleet record append

`FUN_58849210` is called by both verified event handlers,
`FUN_587BB700` and `FUN_588C1650`. In the joined-fleet notice branch, the
handlers format localized key `MESSAGESTRING__SQUADRON_JOINED_FLEET` and pass
the packet text at `+0x2D` (or the corresponding temporary string) to this
helper. `FUN_588C1650` has multiple observed call sites for the path.

The helper requests an object of size `0xB4` through `FUN_5897CC4E`. When that
request succeeds, it initializes the object using receiver fields `+4`, `+8`,
and `+0xB0`, passes the supplied text through callback `0x5898C198` and
`FUN_5875A4B0`, and clears flag bits in the new object's word at `+0x24`. If
receiver field `+0x64` is empty, the new object is stored at `+0x64` and `+0xFC`.
Otherwise, it is linked after the existing object at `+0x68` with links at
object offsets `+0x54` and `+0x50`. The helper increments receiver word `+0xF0`,
sets `+0x68` to the new object, then calls `FUN_588486E0`.

ObjDiff verified the complete 294-byte body at 100.0%, including all 9 operand
targets. The receiver/object types, allocator and callback contracts, field
and flag meanings, and exact visible or protocol effect remain unknown. The
localized caller ties the text input to the joined-fleet event but does not
establish a domain type for the appended objects. No emulator test was
performed.
