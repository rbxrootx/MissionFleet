# Installed client quit-prompt setup helper

`FUN_5876B9F0` is called from two already byte-verified Main.dll functions:
`FUN_587D51D0` at `0x587D59D4` and `FUN_587DEB30` at `0x587DEDEE`. The new
focused verifier checks both mapped call instructions and confirms each call
site lies inside its matched caller body. The mapped inventory also records a
third direct caller, `FUN_58894B40` at `0x58894BA8`; that caller is not
byte-verified, so its route and inputs remain unconfirmed.

Fresh Ghidra output and the mapped function body show three child-object setup
calls, three position/control calls, selector values `3`, `4`, and `8`, then a
conditional localization path. When the word at `[esp+8]` is zero, the function
passes the mapped key `MESSAGESTRING__ARE_YOU_SURE_TO_QUIT` through the global
string resolver, passes the returned text to `FUN_587645F0`, and writes `1` to
receiver offset `+0x7C`. It finishes through the receiver's vtable slot `+4`.
The verified body is 246 bytes in one complete Ghidra range; all 11 direct
calls target functions already verified byte-identical.

The receiver's class, child labels, caller-specific stack argument meanings,
and virtual callback contract remain unresolved. The Ghidra-inferred function
signature does not account for the full `ret 0x10` stack cleanup. No emulator
runtime test has been performed.

Repeat the source match and structural checks with:

```powershell
rtk python tools/verify_client_matches.py --config config/NF2_2026/client-verifications.json --only 5876B9F0
rtk python tools/verify_current_main_quit_prompt_setup.py
```
