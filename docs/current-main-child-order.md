# Current Main child-order list

This renderer slice covers two routines that mutate a doubly linked child list
whose head is stored at receiver offset `+0x4C`. Ghidra call references connect
the code to the current client scene path: `FUN_58903070` is called by
`FUN_587fb810` at `0x587FBC84`; `FUN_58903160` is called twice by
`FUN_58889640` and once by `FUN_588f6940`.

`FUN_58903070` walks nodes through child `+0x48`, compares a signed 16-bit
value at `+0x26`, and uses the sum of `+0x20` and `+0x08` as a tie-breaker. It
splices a node into its new position by changing the previous/next links at
`+0x44` and `+0x48`, updating the list head when needed. Its complete 232-byte
body is byte-matched.

`FUN_58903160` finds the list tail. When the supplied node has a next link, it
optionally calls the already matched `FUN_58902c70` if the node has an existing
owner/list pointer at `+0x40`, then appends the node by changing its links and
the receiver-side owner field. Its complete 63-byte body is byte-matched.

ObjDiff 3.8.0 reports 100% for both functions, 295 bytes total, with six
relocation operands checked. The member types, caller-level trigger conditions,
and intended semantic names for the comparison fields are not recovered; the
documented ordering rule is limited to the observed comparisons and link
mutations. Runtime list state was not captured.
