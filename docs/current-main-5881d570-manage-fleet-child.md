# Manage Fleet tab child initialization

`FUN_5881D570` is a 915-byte routine in the installed `Main.dll`. Both fresh
Ghidra projects agree on its contiguous 284-instruction range
`0x5881D570..0x5881D903`, and the mapped image decodes that full range. The
instruction-level reconstruction is in
[`FUN_5881d570.cpp`](../src/client-current/Main/FUN_5881d570.cpp).

The only incoming call in either full Ghidra edge export is from the
byte-matched constructor `FUN_58836B90` at `0x58837EDB`. That constructor is
identified by Ghidra as `CPannelCommunicatorConfigManageFleetTab`. At the call,
it requests `0x7C` bytes, passes `[parent+0x30]`, four zeros, and `0x40`, and
stores the returned pointer at `parent+0x1D0`. The parent decompilation records
the call as `FUN_5881D570(param_1[0xC],0,0,0,0,0x40)`.

The body calls matched `FUN_589031A0`, writes observed vtable and receiver
fields, allocates and initializes child records under null and bounds checks,
and calls other matched helpers on its branches. All 17 direct calls target
byte-matched functions: `FUN_589031A0` three times, `FUN_5897CC4E` five times,
`FUN_588F3D70` once, `FUN_58902CE0` once, `FUN_58902D20` five times, and
`FUN_5875DDA0` twice. There are no indirect call instructions.

The matched parent establishes this object's place in the Manage Fleet tab,
but its specific class name, labels, resource mapping, field meanings, and
runtime interactions remain unresolved. This source preserves the mapped x86
stream for byte matching; no emulator runtime or visual test was performed. A
focused verifier checks both Ghidra exports, mapped coverage, direct-call
closure, and the parent's allocation and argument setup:
[`verify_current_main_5881d570.py`](../tools/verify_current_main_5881d570.py).
