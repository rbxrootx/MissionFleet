# `FUN_5887A3F0`: receiver-gated identifier dispatcher

Ghidra reports a contiguous 32-byte function body at `0x5887A3F0–0x5887A40F`.
It is a `__thiscall` with one stack argument and returns using `ret 4` at
`0x5887A40D`.

The mapped instructions first test the dword at `[this+0x68]`. A zero value
returns immediately. Otherwise the function calls `FUN_5876BAF0` with the
stack argument followed by three zero arguments, moves that call's result into
ECX, and calls `FUN_58764D30`. This describes the observed control and data
flow; it does not establish what the receiver field or either callee means.

Ghidra's reference dump lists 30 direct calls across seven callers. Two callers
are already byte-matched in the catalog:

- `FUN_587BB700` calls at `0x587C14EE`; its matched instruction stream shows
  stack argument `0x0FA0` immediately before the call.
- `FUN_58882D80` calls at `0x58882E18`, `0x58882EB3`, `0x58882F1F`,
  `0x58882F30`, `0x58882F3F`, `0x58883924`, and `0x58883C7F`. The matched
  source shows these uses with identifiers `0x1004`, `0x1068`, `0x10CC`,
  `0x10CF`, `0x0FA2`, `0x1139`, and `0x0FA2`, respectively.

The remaining references are from currently unmatched callers:

- `FUN_5887A500`: `0x5887A734`
- `FUN_5887AE70`: `0x5887AEA1`, `0x5887AEAE`, `0x5887AEBB`, `0x5887AED8`,
  `0x5887AEE5`, `0x5887AEF2`, `0x5887AF0F`, `0x5887AF1C`, `0x5887AF3E`,
  `0x5887AF4B`, `0x5887AF58`, `0x5887AF65`, `0x5887AF72`, `0x5887AF7F`,
  `0x5887AF8C`, `0x5887AF99`, `0x5887AFA6`, and `0x5887AFB3`
- `FUN_58881E30`: `0x58881F7F`
- `FUN_58881C90`: `0x58881DE9`
- `FUN_58881680`: `0x58881AA7`

The source preserves all 32 mapped bytes literally, including the two relative
call displacements. `objdiff` verifies the emitted object code byte-for-byte.
The receiver type, field purpose, identifier meanings, and callee contracts
remain unknown. The other five callers have not been byte-matched, and no
emulator runtime test was performed.
