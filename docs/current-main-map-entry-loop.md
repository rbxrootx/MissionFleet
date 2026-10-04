# Current Main repeated map-entry loop

This pass follows the repeated-entry loop in `FUN_588587C0` into
`FUN_587A15E0`, the tree lookup/update routine `FUN_587A1330`, and its
conditional tree update routine `FUN_587A1160`. Eleven functions in that call
chain now match the captured installed `Main.dll` at 100% under objdiff 3.8.0,
adding 1,963 matched bytes. The depth-ten direct-call audit reports no
unmatched inventory-backed edges in this branch.

The tree routines compare the supplied 32-bit values with node field `+0x0C`
and use the byte at `+0x15` to distinguish the captured terminal nodes while
walking node links at `+0/+4/+8`. Their observed helper paths allocate an
18-byte node, initialize fields through `+0x15`, and update link fields in
three node-linking helpers. The iterator-like helpers also compare two-word
records and follow the same node links. These operations support an inference
that the branch maintains an ordered tree of entries; the key/value types and
application meaning are still unknown.

The original function index gave `FUN_587A1330` a 162-byte extent, ending on
the first byte of `mov esi, [esi]` at `0x587A13D1`, even though an earlier
conditional branch targets that address. The mapped instructions continue
with that two-byte load and a jump back to `0x587A13BB`, then `int3` padding
through `0x587A13DF`; the next indexed function starts at `0x587A13E0`. I
corrected the indexed extent to 165 bytes so the matched body includes the
branch tail and stops before padding. The decode-inspection helper
`tools/inspect_current_main_decode.py` makes such extent gaps and their
following instruction context visible during future audits.

The 87-byte caller helper also uses the function pointer at `0x5898C120`; its
target and contract remain unresolved. Receiver types, key/value schema, and
the domain meaning of these entries are not established. The byte matches and
call-graph closure do not prove the client starts or runs correctly; no runtime
test was performed.
