# Current Main.dll indexed-pointer lookup

`FUN_587317b0` is called from `0x587A90D0`, `0x58866880`, and `0x588D4300`; the
last caller has two call sites. Those call sites load a receiver into `ECX` and
pass one 32-bit index on the stack.

The mapped 37-byte function compares the signed index with the signed count at
receiver offset `+0x164`, rejects a negative index, and rejects a null table
pointer at `+0x18C`. For a valid index and non-null table it returns the DWORD
pointer at `table[index]`. Both exits use `ret 4` to clean the one stack
argument. Recompilation is checked against the complete mapped extent.

The receiver type, count and table field meanings, element type, and domain role
are not established by the available caller evidence. The callers perform
larger object/resource operations around the lookup, but that context does not
identify what the returned pointer represents. No runtime behavior test was
performed.

## Sibling accessor at `0x58731810`

The adjacent `FUN_58731810` has the same mapped control flow and 37-byte
extent, with its count at receiver `+0x170` and table pointer at `+0x194`.
Its callers are `0x5873FE80`, `0x5877EC80`, and `0x588D4300`; the first adds
`0x13` to its computed index and checks the returned pointer for null. The
matching behavior is verified independently. The available evidence does not
prove that the two helpers share a receiver type or identify either table's
domain meaning.
