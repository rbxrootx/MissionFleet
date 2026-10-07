# Current Main masked-record parameter helper

`FUN_5880B810` adds one byte-identical function / 1,738 bytes from the installed
current-client `Main.dll`. Fresh Ghidra 12.1.3 identifies one exact range,
`[0x5880B810, 0x5880BEDA)`, containing 491 instructions.

## Evidence from the original code

The byte-matched `FUN_5880D270` updater calls the helper at `0x5880D80B`,
`0x5880D831`, and `0x5880D83E`. The fresh Ghidra references and the matched
call instructions establish all three sites. The updater's existing note,
[`current-main-masked-record-parameter-update.md`](current-main-masked-record-parameter-update.md),
records how selected returned values are added to its field at `+0x10C`.

Ghidra shows the helper reading a DWORD at the global object's `+0x6504`,
XOR-decoding it with `0xAAAAAAAA`, then converting it through an observed
floating-point divide and round sequence. It also reads the five-bit subtype
from the object path through `DAT_58A247F8 + 4` and `+0x100C`, and a mode value
at `DAT_58A2459C + 0x105F0`. On selected mode/subtype paths it multiplies the
rounded result by the observed `0.2f` constant at `0x5899D644`. Other switch
paths return the intermediate or default result. The exact instructions,
including the floating-point operations and global references, are preserved
in the source.

The verifier checks the Ghidra range, all 491 decoded instructions, all 32
mapped operand targets, and the three direct CALL sites inside the already
byte-matched updater. ObjDiff reports 100.0% byte identity.

## Uncertainties

The global/object types, `+0x6504` field meaning and units, divisor
initialization, mode and subtype meanings, rounding contract, and why the
caller applies the returned value remain unresolved. The Ghidra decompilation
supports the observed operations but does not establish the game's domain
meaning. No emulator or live-client test was run.

Reproduce the checks with:

```powershell
rtk python tools\verify_current_main_masked_record_parameter_helper.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 5880B810
```
