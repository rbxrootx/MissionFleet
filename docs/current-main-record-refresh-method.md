# Current Main record-driven object refresh method

Ghidra identifies `FUN_58864fd0` only by address; its class remains
unrecovered. The body consists of four ranges totaling 6,071 bytes. The emitted
source preserves those ranges from the mapped `Main.dll` image, and ObjDiff
3.8.0 verifies all bytes exactly with 132 operands checked.

Ghidra shows one direct call, from `FUN_58871d60` at `0x58871DBB`. In that
wrapper, an input record is resolved through `FUN_588f4090`; the wrapper derives
a selector from record offset `+0x5E`, using `0xFFFFFFFF` when offset `+0xB8`
is `-1`, invokes this method, and then dispatches a virtual call through the
receiver's `+0xB8` field. The enclosing `FUN_587bb700` dispatcher reaches that
wrapper in switch case `0x80020118`.

The target copies a 0x60-DWORD record region into its receiver, stores a count
and copies count-sized data, then walks repeated child-object groups. It updates
their resource pointers from bounded global tables and invokes shared layout
and graphics helpers. The body also branches on receiver and table values. This
supports describing it as a record-driven object refresh path, but does not
identify the receiver class or the resulting visual and gameplay effects.

The unowned gaps between ranges are 9, 3, and 3 bytes. Ghidra reports no
instructions or ownership there, and its preceding blocks jump to the next
range starts; the source excludes these bytes. The receiver type, record
schema, global table identities, selector meanings, and exact runtime effect
remain uncertain. This byte match is against the local mapped image and has not
been exercised in the emulator.
