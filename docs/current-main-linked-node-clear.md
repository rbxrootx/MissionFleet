# Current Main.dll linked-node clear helper

`FUN_58848610` is a 97-byte routine in the hash-pinned mapped installed-client
`Main.dll`. Verified callers include packet/message dispatcher
`FUN_587BB700`, event dispatcher `FUN_588C1650`, and semicolon parser
`FUN_58849440`. The complete function extent matches at 100% under objdiff;
there are no mapped relocation operands.

The helper starts at receiver tail pointer `+0x68`. For each node, it saves
the previous link at node `+0x50`, loads the first function pointer in the
node's vtable, and calls it with the node in `ECX` and stack argument 1. It
counts visited nodes. If the saved previous link is null or that count equals
the sign-extended word at receiver `+0xF0`, it clears receiver fields `+0x10C`,
`+0x68`, `+0x64`, and `+0xF0`. It follows the saved previous link until null,
then clears `+0x68`, `+0x64`, `+0xFC`, and `+0xF0` again and returns. On an
initially empty list, control skips the traversal and final-clears the latter
four fields without touching `+0x10C`.

The callers establish repeated list-reset use, but not the receiver or node
types, the first vtable method's exact contract, why the visited count is
compared with `+0xF0`, or the meanings of `+0x10C` and `+0xFC`. No runtime or
emulator test was performed.
