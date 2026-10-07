# Nested-record state update

`FUN_58776B10` is a 1,035-byte routine in the installed `Main.dll`. Both fresh
Ghidra projects report the same 315-instruction body, and decoding the pinned
mapped image covers the same complete extent through `ret 8`. The reconstructed
instruction stream is in
[`FUN_58776b10.cpp`](../src/client-current/Main/FUN_58776b10.cpp).

The only direct caller in both full call-edge exports is the byte-matched
`FUN_587FAEC0`, which calls at `0x587FB088` with mode 0 and `0x587FB154` with
mode 1. Both calls pass ESI first and use ECX loaded from
`[0x58A2459C]+0x21C48`. The first caller gate tests bit 0 of byte
`[EDX+0x105A8]`; the second tests bit 0 of `[EAX+0x105A8]`. Both also require
`[ESI+0x6070] == 0`. The instruction evidence does not establish that EDX and
EAX point to the same object. The mode-1 caller subtracts the helper's return
value from the object at its stack-local `+0x10A18` field.

The callee traverses receiver-held DWORD ranges, compares record byte `+0x4`
with the supplied object's byte `+0x354`, and follows nested ranges. In mode 1,
it clears bits 0 and 2 in child `+0x24`; when the child's `+0x354` byte differs
from the byte at `[0x58A247F8]+4`, it adds `[child+0x100C]+0x60` to a local
accumulator returned in EAX. The mode-0 path calls byte-matched
`FUN_588DF450`, `FUN_588DA9E0`, and `FUN_587F21E0` on its observed branches.
The routine has 49 direct call instructions, all targeting byte-matched code,
plus an indirect callback through the pointer at `0x5898C1A4`.

The byte comparisons and control flow are directly visible in the original
instructions. The names and types of the collections and nested records, the
meaning of byte `+0x354`, the indirect callback contract, and the flag roles
remain unresolved. The indirect callback destination is not recovered. The
source is an instruction-level reconstruction for byte matching, and no
emulator runtime test was performed. A focused verifier checks the two fresh
body and edge exports, mapped instruction coverage, dependency matches, and the
two caller windows:
[`verify_current_main_58776b10.py`](../tools/verify_current_main_58776b10.py).
