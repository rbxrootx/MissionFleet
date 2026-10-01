# Installed client VM entry and trampoline slice

This is a byte-level reconstruction of the installed `Main.dll` entry path,
not a devirtualized VMProtect implementation. The on-disk module hash is
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd`; the
loaded image base is `0x58730000` and the mapped capture hash is
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831`.
All 15 indexed extents below lie in `.vmp1` and match their mapped bytes at
objdiff 3.8.0. The source emits each decoded byte so flag-sensitive or unusual
instruction encodings are not silently rewritten by the compiler. The
verification inventory also audits 29 relative, absolute, or immediate
operands against their captured values.

The static setup path is:

```text
entry 58F76B6B --CALL--> 58C3A998 --JMP--> 58BF62F5 --JMP--> 58DDB193
  --> 58BFF900: PUSH EBP; RET
```

The final `RET` transfers to the runtime value in EBP. Its destination is not
known, so the lexical `JMP 58C60FD6` later in `entry` is not proof that runtime
execution resumes there. This distinction matters: Ghidra pseudocode flattens
the 37-byte entry into a call to `58C3A998` followed by a thunk call, while the
instruction stream contains flag/register-sensitive operations and an
unconditional jump.

The other statically visible path is:

```text
58C60FD6 --JMP--> 58E0A61E --JMP--> 58F8160D
  JA 58C84F0B (JMP ESI)
  otherwise: 58DC34AD --> 58C319AB --> 58D6F6B0 --> 58D6F58A
              --> 58C5D37B --> 58FAC690 --> 58C84F0B (JMP ESI)
```

`58E0A61E` compares `EDI` with `ESP+0x60`; `58F8160D` branches on those
comparison flags. The fallthrough chain adjusts the stack and register state,
performs `REP MOVSB`, and rejoins the same two-byte `JMP ESI` stub. This proves
that both static branches converge on an indirect dispatch instruction. The
captured image does not reveal ESI's runtime value or the handler set, so it
does not identify the protected application routines.

The on-disk and mapped bytes are identical for 14 of the 15 extents. The
179-byte `58BF62F5` body differs at offsets `+0x1E`, `+0x1F`, `+0x79`, `+0x7A`,
`+0x85`, and `+0x86`; these are operand bytes rewritten in the mapped image.
The match is against the hash-pinned mapped image, and those immediate values
are included in the operand audit. The raw-section comparison can be repeated
with:

```powershell
rtk python tools/compare_current_main_disk.py --disk D:/FleetMission/Main.dll --only 58F76B6B --only 58BF62F5
```

The exact extents and evidence are in
`config/NF2_2026/client-verifications.json`. Their behavior remains limited to
the observed instruction and control-flow edges; the VM state and indirect
handler semantics are unresolved.
