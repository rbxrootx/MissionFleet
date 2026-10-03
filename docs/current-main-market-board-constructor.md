# Current Main market-board constructor

Ghidra decompilation shows `FUN_58799eb0` initialize its `CMenuScreen` base and
install `CMarketBoard::vftable`. The constructor has two body ranges totaling
5,371 bytes: `58799EB0..5879A88C` and `5879A890..5879B3AD`. ObjDiff 3.8.0
verifies the emitted source against the captured mapped client at 100%, with
163 relocation operands checked.

Direct calls are recorded at `0x587DBEBA` in `FUN_587dba00` and `0x5882E4B2`
in `FUN_5882d1f0`. The first caller allocates `0x304` bytes for this object,
passes the parent and layout values, and stores the result at parent offset
`+0xDB0`. Its surrounding path also selects `.\SPR\ShipStructureMarket.spr`.
The second caller is the `CPannelCommunicatorConfigFort` constructor: it
allocates a `0x304`-byte child, passes layout values `0xE3` and `-0x190`, and
stores it at its own `+0x174` field. That constructor is allocated as a
`0x1C0`-byte child of `CPannelCommunicatorConfigPannel` and stored at the
parent's `+0x174` field; see
[the nested constructor evidence](current-main-communicator-config-fort-constructor.md).

The constructor creates sprite-data children and other controls through helper
routines. It checks shared resource-table bounds before using indexed entries,
sets child flags, and initializes fields with sentinel values. Resource indices,
labels, and user-facing behavior are not inferred from those offsets.

The three-byte span `5879A88D..5879A88F` contains no instructions and is skipped
by an unconditional branch. Exact member names, resource schema, control
meanings, and runtime appearance remain uncertain. No emulator runtime test was
performed.
