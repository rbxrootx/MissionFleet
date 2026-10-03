# Current Main channel-battle control update

`FUN_587d3860` is a virtual method in the `CPageChannelBattle_ControlMenuScreen`
class. The imported vftable at `0x5899B494` points to it from slot `+0x04`;
the Complete Object Locator at `0x5899B490` references the RTTI type
descriptor `.?AVCPageChannelBattle_ControlMenuScreen@@` at `0x589CBFB8`. Ghidra
records the vftable slot as its only incoming reference and no direct
callsites.

The method changes screen/control flags, adjusts child timing, dispatches a
virtual callback through `DAT_58A245C0 + 0x150`, clears child state, and
rebuilds or resets multiple `CSpriteDataScreen` and `CSpriteBundleScreen`
children from the count-checked resource table at `DAT_58A24778`. The body
also calls `FUN_5875f420` and `FUN_5875f0d0` in the control-state sequence.
The exact virtual-method role, resource labels, child indexes, and callback
contract remain unresolved.

Ghidra identifies three body ranges totaling 6,493 bytes:

- `587D3860..587D3DFC` (1,437 bytes)
- `587D3E00..587D4788` (2,441 bytes)
- `587D4790..587D51C6` (2,615 bytes)

The intervening gaps are 3 and 7 bytes. They have no instruction or function
ownership; unconditional jumps lead to the next range. ObjDiff reports an
exact match for all 6,493 bytes and checks 166 mapped operands.

This verifies compiled bytes against the captured installed `Main.dll`. No
runtime callback or emulator behavior test was performed.
