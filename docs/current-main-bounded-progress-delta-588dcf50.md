# Current Main.dll bounded progress-delta update

`FUN_588DCF50` is called from verified routines `FUN_5877EC80` and
`FUN_58782CF0`, each with a computed step value. It decodes a threshold from
receiver `+0x398` by XORing `0xAAAAAAAA`, then scales it by two. When shared
mode word `0x58A2459C +0x105F0` is `0xF` and receiver `+0x63B8` is zero while
`+0x63BC` is nonzero, the threshold is scaled by four instead. The routine
clips the requested delta against receiver accumulator `+0x63C4`, adds the
accepted amount, and returns that amount.

If the receiver equals the active object at `0x58A247F8 +4` and the accepted
amount is zero, it calls `FUN_587ECCA0` with the shared state object and zero.
The exact domain meaning and units of the encoded threshold, flags, and
accumulator remain unknown.

The complete 150-byte body matches mapped `Main.dll` under objdiff 3.8.0;
all four mapped operand targets were checked. No runtime client or emulator
test was performed.
