# Installed Core.dll integer scan output binding

This slice connects the base-aware integer parsers to the scan object's input
stream and destination list. The two methods remain address-named because no
original symbols or structure definitions are available.

`0x588608EE` selects primary conversion method `0x58860A36` for its integer
format cases; alternate dispatcher `0x58860962` selects `0x58860A9B`. Each
method prepares its stream position, initializes a bounded parser record
through `0x5885B8D2` / `0x5885DAD1`, then calls the corresponding already
matched base-conversion wrapper (`0x5885CDC0` or `0x5885D110`). The primary
path skips leading characters classified with mask `8` using `0x5885D904` and
the alternate path uses `0x5885D93B`; both push the first nonmatching
character back through their respective stream adapter.

After parsing, `0x58860A36` and `0x58860A9B` conditionally store the result via
`0x58861559` or `0x588615C8`. Each store routine consumes the next destination
pointer, asks `0x5886074D` for its width, and writes 1, 2, 4, or 8 bytes. A null
destination records error `0x16`; unsupported widths do not write. The two
paths use distinct cursor fields and destination-pointer lists, but the
available Ghidra evidence does not establish why.

These ten functions cover 663 bytes and 23 audited relocation operands. Their
candidate sources preserve the Ghidra-bounded instruction streams from the
pinned mapped Core image, and the configured local verifier with objdiff 3.8.0
confirmed 100.0% byte identity for each. This verifies the emitted machine
code, not the complete scan-object contract; the object layout, mode-byte
meaning, and destination width-record types remain unresolved.
