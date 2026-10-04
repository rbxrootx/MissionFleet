# Current Main.dll linked-list end position

`FUN_58908870` is a 54-byte helper in the hash-pinned mapped installed client
`Main.dll`. Its complete body matches at 100% under objdiff and contains no
mapped operand targets.

If the pointer at receiver `+0x7C` is null, the function returns without
changing receiver `+0x80`. Otherwise it computes the signed quotient
`((+0x20) - (+0x18)) / (+0x5C)`, subtracts one, and walks forward from the
`+0x7C` node by following each node's `+0x10` link. A nonpositive position
selects the head; if a link becomes null before the requested position, it
selects the last reachable node. It stores the selected pointer at `+0x80` and
returns.

Three verified callers use the helper: `0x588450B0` repeats the operation for
four contexts, `0x5888D250` recalculates a context boundary at a caller-derived
count threshold, and `0x58890110` invokes it on the list context at receiver
`+0x4C4`. These call paths support a list-boundary update interpretation, but
the fields' units, node type, and user-visible list behavior remain unknown.
