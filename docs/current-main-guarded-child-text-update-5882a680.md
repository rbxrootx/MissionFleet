# Current Main.dll guarded child text update

`FUN_5882A680` receives record-derived values from both the packet/message
dispatcher `FUN_587BB700` and event dispatcher `FUN_588C1650`; both callers
pass a child receiver reached through global object `0x58A245B4 +0xDC +0x15C`.
The helper first checks the two leading values. It returns unchanged when both
are zero or when either differs from globals `0x58A0B4A0` and `0x58A0B4A4`.

On the accepted path it copies supplied bytes into a 0x800-byte local buffer
through callback `0x5898C194`. The copy bound is capped at 0x800, or uses the
provided bound plus one when smaller. It then calls `FUN_58770A80` using the
receiver's `+0x88` child when the second value is nonzero, or `+0xA8` child
when zero. The precise argument meanings, globals' key roles, child types,
and user-visible text behavior remain uncertain.

The complete 169-byte body matches mapped `Main.dll` under objdiff 3.8.0;
all six mapped operand targets were checked. No runtime client or emulator
test was performed.
