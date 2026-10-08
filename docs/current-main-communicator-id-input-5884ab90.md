# Current Main.dll communicator ID panel input method

The pinned `Main.dll` vtable for `CPannelCommunicatorIDPannel` stores
`FUN_5884AB90` at slot `+0x10`. The original instruction body checks bit
`0x0002` in receiver word `+0x24`, follows a `+0x3C/+0x34` object chain
through a virtual `+0x10` call, then reads a DWORD at `+4` of its sole stack
pointer argument. It branches on numeric message values `0x100`, `0x201`,
and `0x203`. Several branches update receiver selected-node fields
`+0x100/+0xFC` and position words `+0xFA/+0xF8`, then call the already
matched `FUN_588486E0` linked-state refresh helper. Other branches invoke
input/UI helpers and indirect child callbacks. The argument's shape is
consistent with a Windows message record, but that ABI has not been proven.

For one `0x100` path, the original code reads the argument DWORD at `+8`,
subtracts `0x21`, bounds the result to `0..7`, and jumps through the
32-byte table at `0x5884B258`. The table entries are:

| Input value | Original target |
| --- | --- |
| `0x21` | `0x5884AD46` |
| `0x22` | `0x5884AE01` |
| `0x23` | `0x5884AF6E` |
| `0x24` | `0x5884AF3E` |
| `0x25` | `0x5884AD3E` |
| `0x26` | `0x5884AC4B` |
| `0x27` | `0x5884AD3E` |
| `0x28` | `0x5884ACF2` |

The function ends at `0x5884B257`, immediately before that table. Eight
`0xCC` padding bytes follow the table, and the next indexed function starts
at `0x5884B280`. The [table specification](../config/NF2_2026/communicator-id-input-table.json)
and [`verify_communicator_id_input_table.py`](../tools/verify_communicator_id_input_table.py)
check all eight target pointers against decoded instruction boundaries,
the dispatch instruction, the bound, padding, and next-function boundary.
These 32 data bytes are verified separately and are not counted as function
code progress.

The [instruction source](../src/client-current/Main/FUN_5884ab90.cpp)
matches all 1,736 code bytes at 100% under objdiff 3.8.0, with 59 mapped
operand targets audited. Run `python tools/verify_client_matches.py --config
config/NF2_2026/client-verifications.json --only 5884AB90` and
`python tools/verify_communicator_id_input_table.py` to reproduce the checks.
The source preserves original x86 bytes, but the method and table have not
been linked into a runnable client. Per-message contracts, indirect callback
effects, and the visible interaction remain unresolved.

Two branches in this method call the pointer-range helper
`FUN_5884A820` at `0x5884B0CD` and `0x5884B0F3`. Its exact instruction body,
other two callers, and remaining uncertainty are recorded in the
[pointer-range update notes](current-main-communicator-id-pointer-range-update.md).
