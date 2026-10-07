# Current Main ManageFleetTab event-dispatch path

This byte-match batch covers the `CPannelCommunicatorConfigManageFleetTab`
event method at vtable slot `+0x18` and its 14 unmatched direct callees. The
Ghidra-imported vtable begins at `0x5899E1D4`; its slot at `0x5899E1EC` contains
`0x58835F70`. The verified constructor `FUN_58836B90` writes the table address
at `0x58836BFF`, and the destructor body `FUN_58834C00` restores it at
`0x58834C2B`. The constructor note ties `FUN_58836B90` to the communicator
configuration panel and its Fleet tab child.

There is no direct code reference to `FUN_58835F70`; its vtable entry is the
dispatch evidence. Ghidra assigns it two exact body ranges,
`[0x58835F70, 0x588364FA)` and `[0x58836500, 0x588368F4)`, totaling 2,430
bytes. The 14 open callees add 1,500 bytes, for 3,930 bytes across 15
functions. Every range has complete instruction coverage. The event method's
17 direct calls into the open set are listed in
`tools/verify_current_main_manage_fleet_event.py`; every other mapped direct
callee is already marked byte-identical in the current-client catalog.

## Behavior visible in the original code

Ghidra's pseudocode dispatches on event values `2`, `62000`, and `0xF235`.
For event `2`, it compares the event source with child pointers in the tab,
updates bit `1` in child words at `+0x24`, and calls the two position-update
helpers for selected control paths. Other branches refresh paired child values,
walk bounded row records, remove a matching record, and route additional
selection events. The code distinguishes global mode value `6` in the refresh
paths.

The `62000` path compares its event source with a global user/object pointer and
the receiver. Depending on receiver byte `+0x320`, it forwards commands
`0x80010F09`, `0x80010F0A`, `0x80010F13`, or `0x80013126` through
`FUN_58970C70`; it also scans bounded row data. The `0xF235` path selects
deposit or withdrawal prompt state in receiver fields `+0x1E4` and `+0x1E8`,
uses the observed resource strings
`MESSAGESTRING__CLAN_CREDIT_DEPOSIT` and
`MESSAGESTRING__CLAN_CREDIT_WITHDRAW`, then calls the existing message helpers.
These are descriptions of observed branches and arguments, not claims about
the server's interpretation of the numeric commands.

The open callees provide the following directly observed operations:

| Address | Bytes | Observed operation |
| --- | ---: | --- |
| `587A8520` | 63 | Copies an iterator pointer/index pair, checks its bound, then advances its index by four. |
| `587B6BE0` | 116 | Updates a horizontal or vertical position field using axis, extent, and bound fields. |
| `587B6C60` | 174 | Applies the alternate bounded position update using the viewport field at `+0x74`. |
| `587B9400` | 32 | Calls `FUN_58970C70` with command `0x80010F09`. |
| `587B9420` | 32 | Calls `FUN_58970C70` with command `0x80010F0A`. |
| `587B94A0` | 50 | Measures a supplied string and calls `FUN_58970C70` with command `0x80010F13`. |
| `587BA070` | 46 | Measures a supplied string and calls `FUN_58970C70` with command `0x80013126`. |
| `587BA9E0` | 117 | Builds a length-prefixed string payload, sends command `0x80010F0D`, and releases the buffer. |
| `587C8190` | 13 | Stores an argument at receiver offset `+0xB4`. |
| `587C8910` | 68 | Stores arguments at `+0xB0/+0xB8` and calls three existing helpers. |
| `58834030` | 230 | Examines five records and maps observed type values `3`, `4`, and `6` to paired child values. |
| `58834520` | 246 | In mode `6`, updates three child values from the selected record and refreshes a string. |
| `58834B00` | 43 | Copies a bounded collection iterator pair. |
| `58835B30` | 270 | Searches `0x54`-byte records by the string at `+0x2D`, removes a match, and compacts later records. |

## Exact-match method and limits

The emitted source files contain the original decoded x86 instruction bytes in
MSVC `__asm _emit` blocks, paired with per-instruction addresses and decoded
mnemonics. ObjDiff 3.8.0 linked all 15 functions at 100.0%, checking 181 mapped
operands across the batch. This establishes exact instruction-stream matches
for the captured `Main.dll` build; it does not recover the original C++ source
or prove that the emulator renders or runs this UI path correctly.

The receiver/record layouts, meanings of the numeric event and command values,
transport behavior behind `FUN_58970C70`, field units, and exact user-visible
control semantics remain unresolved. No original-client interaction or
emulator visual test was performed for this subsystem.
