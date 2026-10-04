# Current Main.dll bounded indexed record accessor

`FUN_58755FF0` is a 46-byte helper shared by four mapped callers. The call
inventory includes `FUN_588290F0` and `FUN_588E05C0`; the battle-record path
also reaches it from `FUN_58839B80`, and the inventory lists
`FUN_58838CB0` as a fourth caller. `FUN_58839B80` first checks global
`0x58A245E0`, then passes the record dword at `+8` minus one. The
`FUN_588290F0` call site likewise passes an observed record value minus one.

The original instructions use ECX as the receiver and take a stack index. They
return null unless the receiver dword at `+0x28` is nonzero, the object pointer
at `+4` is usable, its dword at `+0x164` is greater than the signed index, and
the pointer at `+0x18C` is non-null. On success they return the pointer-array
entry at `index * 4`; all failure branches return zero. This documents the
observed checks without assigning a C++ container type or naming the domain
record represented by the entry.

ObjDiff verified the full 46-byte body at 100.0%; the function has no encoded
operand targets. The receiver type, `+0x28` gate meaning, indexed collection
identity, and callers' index semantics remain uncertain. No runtime test was
performed.
