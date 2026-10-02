# Installed Core.dll scan-conversion dispatch

This byte-matched slice follows the format dispatch used by the installed
client's Core scan routines. The primary and alternate paths are paired but
remain separate functions in the reconstructed output because the mapped
binary has distinct records, readers, cursors, and output slots.

Primary entry `0x58860C11` and alternate entry `0x58860C53` select their format
byte, handle literal-character mode, and delegate format selection to
`0x588608EE` and `0x58860962`. Each dispatcher routes integer modes to the
already-matched integer conversion path, numeric mode to a width resolver and
numeric sinks, and pointer/character or string modes to the corresponding
scan handlers. The width resolver `0x5886074D` delegates to paired helpers
`0x588612D8` and `0x588612B5`.

The numeric wrappers call the previously matched float/double parsers and
write one or two DWORDs through small sink functions. The byte and word scan
loops read from their respective streams, apply paired match predicates,
respect width and buffer state, emit or terminate output as selected by the
mode, and restore the first nonmatching character. Wide-output helpers consult
the conversion table and call `0x5886DDA0` to emit encoded bytes. Literal
comparators also have paired paths and restore consumed input on mismatch.

Ghidra decompilation of the pinned mapped `Core.dll`, direct call edges, field
offsets, and branch targets provide the behavior evidence. The exact recovered
instructions were emitted into candidate source and verified by objdiff 3.8.0
against the pinned image: all 31 functions and 3,491 bytes match at 100%.

Remaining uncertainties include the symbolic names of format modes and object
fields, the complete conversion-table encoding contract, width-record source
types, and the precise status/count semantics of the outer scan loop. This
slice verifies machine-code identity; it does not establish a complete client
build or prove the whole scan API's runtime behavior.
