# Main event message dispatch helper

`FUN_58814FD0` is called by both verified event handlers,
`FUN_587BB700` and `FUN_588C1650`. The latter loads an object through global
state at offsets `+0xDC` and `+0x68`, calls this helper, then checks an event
record field at `+0x0C`. The other handler reaches it from its event path.

The helper accepts the receiver in ECX and four stack arguments. It begins with
callback `0x5898C194`, passing two arguments and a local record. One observed
argument value creates resource `0x1C5`, passes a local record through global
objects at `0x58A245B4 +0xD8/+0xDC`, then issues two virtual calls through the
receiver's child at `+0x30`. Another path checks receiver word `+0x24` under
mask `0x1F00` and selects resource IDs `0x1C6`, `0x1C7`, or `0x1C8`; remaining
values use string pointer `0x5899D784` through callback `0x5898C030`. The helper
finishes by updating the receiver child at `+0x58` through `FUN_5875F940`.

The full 390-byte function body and all 19 mapped operand targets match the
pinned original. Argument meanings, receiver and child types, callback
contracts, resource meanings, and the visible UI effect remain unresolved. No
client runtime or emulator test was performed.
