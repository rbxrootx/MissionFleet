# Installed Core.dll numeric result conversion

This slice connects the previously matched numeric-string parser family to its
32-bit and 64-bit result encodings. Ghidra's recovered names are address-based.

Four 138-byte wrappers provide the paths:

- `0x5885B8F0` and `0x5885B97A` call parser `0x5885BB18`.
- `0x5885BA04` and `0x5885BA8E` call parser `0x5885BF85`.
- `0x5885B8F0` and `0x5885BA04` send the parser status and 780-byte stack
  intermediate record to the 32-bit converter `0x5885C860`.
- `0x5885B97A` and `0x5885BA8E` send them to the 64-bit converter
  `0x5885C9A8`.

Both wrappers check the input and output-capacity arguments. The two converters
dispatch on the parser status, write special result patterns for selected
statuses, and send ordinary-conversion statuses to the helper families. The
32-bit path writes one output word and uses `0x5885B84E` / `0x5885B890`; the
64-bit path writes two words and uses `0x5885B86F` / `0x5885B8B1`. The latter
path also calls `0x5885B6F8` for a special status. The four small forwarders
construct local two-DWORD argument records for `0x5885E370` or `0x5886006F`.
The 32-bit converter contains explicit zero and infinity patterns and a
`0xFFC00000` special pattern; the 64-bit converter builds corresponding
two-word patterns. Both read the sign byte at offset `0x308` in the parser
record.

These eleven functions cover 1,251 bytes and 36 audited relocation operands.
The source candidates preserve the Ghidra-bounded instruction streams from the
pinned mapped Core image. The configured local compiler and objdiff 3.8.0
verified every function at 100.0% byte identity. This proves the emitted code
matches; Ghidra has not recovered the full wrapper prototypes, parser status
names, or the arithmetic contract of the conversion helpers.
