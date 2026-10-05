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
count, and `-1`. `FUN_587B91B0` now matches all 40 bytes and calls verified
transport routine `FUN_58970C70` with message `0x80010F03`; it computes the
payload length as count times `0x18` and forwards the buffer, count, and channel.
The negative channel's protocol meaning and the server-side interpretation of
this message are unresolved. The 206-byte batch body has eight mapped operand
targets; it ends with `ret` at `0x5875240D`. Two `CC` bytes precede the next
indexed function at `0x58752410`. Sources:
[`FUN_58752340.cpp`](../src/client-current/Main/FUN_58752340.cpp) and
[`FUN_587b91b0.cpp`](../src/client-current/Main/FUN_587b91b0.cpp).

## Uncertainties

The receiver and record types, `+0xA0` limit semantics, fixed key meaning,
callback contract and output-slot schema, cursor lifetime, and visible effect
remain unresolved. The sender wrapper's own buffer ownership and message
semantics remain unresolved. The caller paths establish
shared use from verified event/packet handling but do not reveal the batch's
domain meaning. No client runtime or emulator test was performed.
