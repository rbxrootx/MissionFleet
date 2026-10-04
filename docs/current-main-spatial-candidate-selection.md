# Current Main spatial candidate selection

`FUN_5873B540` is called by verified spatial-state routine `FUN_5873F020` and
virtual spatial-update method `FUN_5873FE80`. Both callers consume its
returned pointer in their spatial update path.

The helper requires non-null receiver fields `+0x4CC` and `+0x4D8`, and rejects
selector `+0x4DC == -1`. It decodes the selector's low byte and four-bit field
at bits 16–19, checks the selected record at `+0x1398` in the object at
receiver `+0x4D8`, and traverses a linked list beginning at
`+0x1390 + selector*16`. Each node's candidate pointer is at `+0x0C`; the
candidate is skipped if its `+0x460` field is nonzero or its `+0x78` key differs
from the decoded low byte. For accepted candidates, the helper combines the
absolute receiver/candidate delta at `+4` with a second component formed from
the `+0x4B0` values using the original multiply/shift scale and factor-two
adjustment. It passes the resulting squared-distance-like value through two
arithmetic helpers, retains the lowest score below `0x05F5E100`, and returns
that candidate pointer or null.

The complete 342-byte body and all 10 mapped operand targets match the pinned
original. Selector meaning, types, units, helper contracts, threshold purpose,
and candidate domain remain unknown. No client runtime or emulator test was
performed.
