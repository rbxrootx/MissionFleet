# Current Main.dll mode-gated child flag update

`FUN_587D6DB0` is called after verified callers set receiver DWORD `+0x500`
to zero or one. With zero, it clears bit 0 on child words at `+0x4D4` and
`+0x4D8`, clears low four bits at `+0x4DC`, and clears bit 0 on the five
children referenced by pointers in `+0x4E0..+0x4F0`.

With a nonzero mode, it sets bit 0 on `+0x4D4`, `+0x4D8`, and all five array
children. For the child at `+0x4DC`, it sets low four bits when global
`0x58A24568` is zero and clears them otherwise. `FUN_587E3080` calls the helper
after clearing the mode; `FUN_588889F0` calls it in separate branches after
writing mode zero or one. The class types and semantic meaning of the mode
and flags remain unknown.

The complete 160-byte body matches mapped `Main.dll` under objdiff 3.8.0;
its sole mapped operand target was checked. No runtime client or emulator
test was performed.
