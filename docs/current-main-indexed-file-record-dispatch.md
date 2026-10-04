# Current Main.dll indexed file-record dispatch helper

`FUN_587C45C0` is a 273-byte routine in the hash-pinned mapped installed-client
`Main.dll`. Verified callers are the packet/message dispatcher
`FUN_587BB700`, which passes index 1, and scene/object update `FUN_587E3080`,
which passes index 2. The complete function extent matches the captured bytes
at 100% under objdiff, including all 11 mapped operand targets.

The routine checks a receiver status DWORD at `+0x0C + index*4`; a value of 1
returns 2 immediately. Otherwise, it opens a source through `0x589714B8`
(failure returns 3) and reads 0x128 bytes through `0x589714B2`. It traverses
the receiver's pointer array at `+4`, bounded by the count at `+8`, and compares
the loaded record's string at local `+0x38` with each entry's string at
`+0x38` through callback `0x5898C1A4`. A matching entry supplies a bounded
string to the dispatch call `0x58970C70` with message `0x80025004` and the
requested index; the status field is then set to 1. Read failure and no match
close the opened source through `0x5898C184` and return 0. The function uses
`ret 4`.

The captured callsites support the file-read, search, completion-flag, and
dispatch behavior above. They do not establish which file is opened, the full
record schema, what the indices identify, the callback's exact return
contract, or the user-visible effect of message `0x80025004`. No runtime or
emulator test was performed.
