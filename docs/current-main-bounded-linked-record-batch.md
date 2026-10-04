# Current Main bounded linked-record batch formatter

`FUN_58752340` is called by verified handler `FUN_58847770` and verified
dispatcher `FUN_588C1650`. Both set ECX to the object at global `0x58A245B0`
and pass no stack arguments. In `FUN_58847770`, the call follows its
`FUN_587522F0` fallback path; in `FUN_588C1650`, it occurs after
`FUN_587B9190` and before control returns to the dispatch loop.

## Evidence from the mapped code

The helper returns if receiver pointer `+0x90` is null. Otherwise it creates a
0xF0-byte local output area, initializes cursor `+0x98` from list head `+0x90`
when the cursor is null, and processes entries while the index is below the
receiver's dword `+0xA0` and below ten. For each entry it reads the pointer at
record `+0x70`, then the pointer at that object's `+0x6C`, and passes the
result, fixed address `0x5898D0D4`, and the current 0x18-byte output slot to
callback `0x5898C3C4`. It advances through record link `+0x54`; when that link
is null, it restarts from receiver `+0x90`. The selected next cursor is stored
back at receiver `+0x98`.

If at least one entry was processed, the helper calls `FUN_587B91B0` with
receiver global `0x58A24588`, the populated local buffer, the processed entry
count, and `-1`. Its exact body is 206 bytes with eight mapped operand targets;
it ends with `ret` at `0x5875240D`. Two `CC` bytes precede the next indexed
function at `0x58752410`. Source: [`FUN_58752340.cpp`](../src/client-current/Main/FUN_58752340.cpp).

## Uncertainties

The receiver and record types, `+0xA0` limit semantics, fixed key meaning,
callback contract and output-slot schema, behavior of `FUN_587B91B0`, cursor
lifetime, and visible effect remain unresolved. The caller paths establish
shared use from verified event/packet handling but do not reveal the batch's
domain meaning. No client runtime or emulator test was performed.
