# Installed Main.dll runtime VM dispatch slice

This slice follows the installed, hash-pinned `Main.dll` through its DLL-only
initialization path. It does not start `FleetMission.exe`, perform login, or
connect to a server. The installed module hash is
`74398355bad12f5349319967ec92c08f2bb2e82dbb441acaeeffb4e55b4359dd`; the
mapped capture used for byte checks is
`e04ba858c5aec15f5c1e93adc3ef4ae1761767b92353294e57b4603f8c796831` at base
`0x58730000`.

## Runtime evidence

The VM entry/trampoline path reaches `0x58C84F0B` (RVA `0x554F0B`), whose
instruction is `JMP ESI` (`FF E6`). `tools/trace_current_main_dispatch.ps1`
installs a one-byte breakpoint at that instruction after `Main.dll` is mapped,
records the registers, restores `FF` before the original jump executes, and
restores the byte before the isolated PowerShell host exits. In one DLL
initialization run, the first 16 dispatches landed at these 15 distinct
addresses. The EBP and EDI columns show their values at each dispatch; the
delta columns compare each row with the following dispatch in that run.

| Dispatch | ESI handler | EBP stream cursor | First byte | Next EBP delta | Next EDI delta |
| ---: | ---: | ---: | ---: | ---: | ---: |
| 0 | `0x58BD01ED` | `0x58CA2E7B` | `26` | +5 | -4 |
| 1 | `0x58BEB131` | `0x58CA2E80` | `4D` | +8 | -4 |
| 2 | `0x58DAFF71` | `0x58CA2E88` | `F4` | +8 | -4 |
| 3 | `0x58C85B6B` | `0x58CA2E90` | `93` | +5 | -4 |
| 4 | `0x58C0E4F5` | `0x58CA2E95` | `F7` | +35 | +16 |
| 5 | `0x58BDEB98` | `0x58CA2EB8` | `86` | +5 | -4 |
| 6 | `0x58C98D2F` | `0x58CA2EBD` | `EA` | +17 | 0 |
| 7 | `0x58E1A4E0` | `0x58CA2ECE` | `4F` | +5 | -4 |
| 8 | `0x58BBB0BA` | `0x58CA2ED3` | `89` | +14 | 0 |
| 9 | `0x58D93158` | `0x58CA2EE1` | `19` | +5 | -4 |
| 10 | `0x58E0C9C5` | `0x58CA2EE6` | `62` | +5 | -4 |
| 11 | `0x58F81810` | `0x58CA2EEB` | `09` | +5 | -4 |
| 12 | `0x58C70A72` | `0x58CA2EF0` | `6E` | +5 | -4 |
| 13 | `0x58BF46BA` | `0x58CA2EF5` | `23` | +5 | -4 |
| 14 | `0x58C6463C` | `0x58CA2EFA` | `87` | +5 | -4 |
| 15 | `0x58BD01ED` | `0x58CA2EFF` | `0A` | — | — |

Every handler target and EBP cursor is inside the mapped `.vmp1` section. The
trace reads 32 bytes at each handler and 16 bytes at each EBP cursor; all 768
bytes of those live samples match the same addresses in the hash-pinned mapped
capture. It also samples the first 15 bytes at each executed instruction address
in the 59-step trace and verifies them against that capture. The first handler
repeats at dispatch 15. EBP advances through the
observed byte stream. At `0x58BD01ED`, the executed instructions read a byte
from `[EBP]`, increment EBP, later read a dword from `[EBP]`, and add four; EBP
is five bytes higher at the next dispatch. That path also decrements EDI by
four and stores a dword through `[EDI]`. These instructions support EBP as a VM
stream cursor and EDI as a VM value-stack pointer. They do not identify the
opcode's high-level meaning. ESP stayed constant across the 16 dispatches in
this run.

A second isolated run single-stepped from the first `JMP ESI` through the next
dispatch. It recorded 59 instruction addresses. The executed path enters
`0x58BD01ED`, passes through the opaque handler and trampolines at
`0x58D870E8`, `0x58C703DC`, `0x58C3402F`, and `0x58C886E8`, then reaches
`0x58E0A61E`, `0x58F8160D`, and `0x58C84F0B`. The conditional branch at
`0x58F8160D` therefore took its `JA` edge to the VM dispatcher in this run.
Each recorded instruction address decodes from the mapped image at that same
address. The first two handler targets and stream cursors agree with the
separate, non-single-stepped run.

## Validation and limits

The first five handlers' executed basic blocks are recorded separately from
the function inventory. The first extent is `[0x58BD01ED, 0x58BD026A)` (125
bytes), terminated by a direct jump to `0x58D870E8`. The second extent is
`[0x58BEB131, 0x58BEB13A)` (9 bytes): it loads a dword from `[EBP]` into EDX,
then jumps directly to `0x58BCA099`. The third extent is
`[0x58DAFF71, 0x58DAFF80)` (15 bytes): it loads from `[EBP]`, adds four to EBP,
and jumps to `0x58D5FED9`. The fourth extent is
`[0x58C85B6B, 0x58C85BFE)` (147 bytes): 46 sequential instructions on the
observed path end in a direct jump to `0x58C9884B`. The fifth extent is
`[0x58C0E4F5, 0x58C0E53A)` (69 bytes): 24 sequential instructions end in a
direct jump to `0x58D8AF3E`. Two separate six-dispatch runs reproduced the first
six handler targets, stream cursors, and 515 executed instruction addresses.
The byte-emitted sources live in
`src/client-current/vm-blocks/`; `tools/verify_current_vmp_blocks.py` checks
them with the same compiler/object-diff process as ordinary matches. These are
traced block matches, not recovered functions or VM opcode implementations,
and receive zero function-progress credit.

The trace is local and repeatable when the installed client and ignored capture
are present:

```powershell
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-runtime-dispatch.txt
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-first-handler-trace.txt -TraceInstructionPath
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-two-handler-trace.txt -TraceInstructionPath -TraceDispatchCount 3
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-two-handler-trace-repeat.txt -TraceInstructionPath -TraceDispatchCount 3
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-three-handler-trace.txt -TraceInstructionPath -TraceDispatchCount 4
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-three-handler-trace-repeat.txt -TraceInstructionPath -TraceDispatchCount 4
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-four-handler-trace.txt -TraceInstructionPath -TraceDispatchCount 5
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-four-handler-trace-repeat.txt -TraceInstructionPath -TraceDispatchCount 5
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-five-handler-trace.txt -TraceInstructionPath -TraceDispatchCount 6
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools\trace_current_main_dispatch.ps1 -ModulePath D:\FleetMission\Main.dll -OutputPath var\current-vmp-five-handler-trace-repeat.txt -TraceInstructionPath -TraceDispatchCount 6
rtk python tools/verify_current_vmp_dispatch.py
rtk python tools/verify_current_vmp_dispatch.py --extended-trace var/current-vmp-two-handler-trace.txt --repeat-extended-trace var/current-vmp-two-handler-trace-repeat.txt
rtk python tools/verify_current_vmp_dispatch.py --four-dispatch-trace var/current-vmp-three-handler-trace.txt --repeat-four-dispatch-trace var/current-vmp-three-handler-trace-repeat.txt
rtk python tools/verify_current_vmp_dispatch.py --five-dispatch-trace var/current-vmp-four-handler-trace.txt --repeat-five-dispatch-trace var/current-vmp-four-handler-trace-repeat.txt
rtk python tools/verify_current_vmp_dispatch.py --six-dispatch-trace var/current-vmp-five-handler-trace.txt --repeat-six-dispatch-trace var/current-vmp-five-handler-trace-repeat.txt
rtk python tools/verify_current_vmp_blocks.py
```

The verifiers check the original and mapped-image hashes, handler and cursor
section bounds, all live code/data samples against the mapped capture, the
single-step addresses, and repeatability of the traced dispatches. The captures
remain local under the Git-ignored `var/` and `reports/` directories.

This recovers a concrete initialization-time dispatch path, not VMProtect as a
whole. The 16 observations are only the first 16 dispatches on this DLL-load
path; they are not the complete handler table or gameplay path. The handler
semantics, bytecode format, state transitions after initialization, and
protected gameplay routines remain unresolved. Some instructions in the first
handler are opaque arithmetic and flag manipulation, so their values' meanings
are not inferred from their decompiler appearance.

All instruction-path traces set EFLAGS.TF. This is a material data-integrity
limitation for handler `0x58C0E4F5`, whose 69-byte block contains `PUSHFD`
followed by `POP [EDI]`: the pushed flags include the instrumentation trap bit,
so the traced memory side effect differs from a run without single-stepping.
The repeated trace verifies executed addresses and bytes under instrumentation,
not equivalence of the handler's uninstrumented state effects. A DBI trace that
preserves guest-visible flags is needed before assigning semantics to this
handler.
