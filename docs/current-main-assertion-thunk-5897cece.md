# Current Main.dll assertion thunk at `0x5897CECE`

`FUN_5897CECE` is a six-byte indirect tail thunk. Ghidra reports one contiguous
body, `[0x5897CECE, 0x5897CED4)`. The mapped bytes `FF 25 90 C2 98 58` decode as
`jmp dword ptr [0x5898C290]`; Ghidra's call-then-return pseudocode does not
represent this tail transfer. The thunk preserves the caller's stack arguments.
The source candidate records the complete instruction stream and the absolute
operand at field offset `+2`, targeting `0x5898C290`.

The pointer slot is in Main.dll `.rdata` at RVA `0x25C290`, outside the PE IAT
directory. In the captured mapped image, the slot contains `0x59882E0C`. Main's
IAT entry for `MSVCR90.dll!_wassert` is at RVA `0x639354` (loaded VA
`0x58D69354`) and contains the same captured dword. This establishes that the
`.rdata` slot aliases the `_wassert` target for this particular load; the slot
itself is not the IAT entry.

Ghidra records 18 direct calls across 15 caller functions. An independent
Capstone scan of the indexed mapped `.text` ranges found the same 18 sites.
Three already byte-matched callers account for five sites:

- `FUN_58778F30` at `0x58778F51` pushes a component-type assertion expression,
  source path, and line `0x322`.
- `FUN_587A90D0` at `0x587A912B`, `0x587A9936`, and `0x587AA16C` pushes
  assertion expressions, source path, and line numbers for event, size, and
  object-condition checks.
- `FUN_588E4260` at `0x588E4A34` pushes `Selected > 0`,
  `Ship_MapObjectScreen.cpp`, and line `0xACB`.

The other 13 sites are in 12 unmatched callers: `FUN_587C9F30` at
`0x587C9F54` and `0x587C9F93`; `FUN_587AAA50` at `0x587AAA78`;
`FUN_587A8E00` at `0x587A8E41`; `FUN_587A88A0` at `0x587A88C4`;
`FUN_587AA5D0` at `0x587AA5F0`; `FUN_587AA540` at `0x587AA55B`;
`FUN_587A7F10` at `0x587A7F31`; `FUN_587A8170` at `0x587A818B`;
`FUN_587A8B70` at `0x587A8B8D`; `FUN_587A7E50` at `0x587A7E68`;
`FUN_587A9070` at `0x587A908B`; and `FUN_58874310` at `0x5887432E`.
Their higher-level conditions remain unverified against matched callers.

Objdiff verifies the six-byte reconstructed object code at 100%. The imported
routine's implementation body and loaded module base are outside this Main.dll
capture, and no emulator runtime comparison was performed.
