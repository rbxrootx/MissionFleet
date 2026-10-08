# FUN_587E3080 precondition helper sequence

The byte-matched screen event handler FUN_587E3080 reaches this sequence when
param_3 equals 2. Ghidra shows six direct helper calls in order:

| Helper | Call site | Observed caller-side condition |
| --- | --- | --- |
| FUN_587D96A0 | 0x587E3C41 | Return must equal 1 |
| FUN_587DB630 | 0x587E3C51 | Return must equal 1 |
| FUN_587DB3F0 | 0x587E3C61 | Return must equal 1 |
| FUN_587D9910 | 0x587E3C71 | Return must equal 1 |
| FUN_587DA040 | 0x587E3C81 | Return must be nonzero |
| FUN_587DB820 | 0x587E3C90 | Return must equal 1 |

Failure in the first five checks branches to the handler's switch case. A failed
FUN_587DB820 check calls FUN_5876BAF0 with selector 0x126C, calls FUN_58764D30,
and exits that path. FUN_587DB3F0 calls FUN_587DA710 at 0x587DB518,
0x587DB56D, and 0x587DB5A8; FUN_587DB630 calls it at 0x587DB776.

The evidence is the original handler decompilation in
var/current-main-next/587e3080-ghidra.c plus two independently generated Ghidra
body and call-edge exports. The seven helpers each have one complete body range
whose instruction count matches the mapped Main.dll bytes. ObjDiff verified all
2,770 helper bytes as byte-identical, and the verifier checks their 42 direct
call edges, six parent call sites, and all external direct-call targets.

The caller-side conditions are established; the underlying predicates, state
fields, and gameplay or server meaning of each result are not. The text or
action associated with selector 0x126C is unresolved. No live client or
emulator event was run, so this slice establishes a machine-code match and a
static call path, not runtime behavior.
