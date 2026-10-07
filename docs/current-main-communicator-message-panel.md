# Current Main.dll communicator message panel constructor

`FUN_5884CA60` is the RTTI-identified `CPannelCommunicatorMessage` constructor
in the installed client's mapped `Main.dll`. Fresh Ghidra 12.1.3 analysis
reports one exact body range, `[0x5884CA60, 0x5884CF72)`: 1,298 bytes across
397 instructions. The emitted instruction source matches all 1,298 bytes under
objdiff 3.8.0.

## Evidence from the original code

The byte-matched `CPannelCommunicatorIDPannel` constructor
`FUN_58849B70` calls this constructor at `0x5884A46D`. It first obtains a
`0xA8`-byte allocation, passes coordinates `(200, 200)`, zero values, and flag
`0x40`, then stores the returned pointer at receiver `+0x110`. The verifier
checks the call instruction and the following store inside the matched parent
body.

At `0x5884CAC3`, the constructor writes vtable pointer `0x5899E7F4`. Its
Microsoft RTTI complete-object locator points to the type descriptor named
`.?AVCPannelCommunicatorMessage@@`; the RTTI verifier checks both the name and
the original constructor store. After base initialization and vtable setup,
fresh Ghidra decompilation shows three conditional `0x54`-byte child
allocations, two `0x10C`-byte text-control allocations, and four `0xAC`-byte
control allocations. The constructor passes its coordinates into these
controls, uses observed global resource/data pointers and offsets, and
initializes parent pointer and flag fields. Each of its 31 direct calls targets
a function already verified byte-identical in the same mapped image.

The focused verifier checks the committed Ghidra body-range manifest, full
Capstone instruction coverage, every direct call site and verified target, the
matched parent call and child store, and the RTTI-backed constructor vtable.
Reproduce the checks with:

```powershell
rtk python tools\verify_current_main_communicator_message_panel.py
rtk python tools\verify_current_communicator_rtti.py
rtk python tools\verify_client_matches.py --config config\NF2_2026\client-verifications.json --only 5884CA60
```

## Uncertainties

The nested controls' labels and exact visible roles, resource meanings, field
types, and rendered appearance remain unresolved. The constructor and its
matched parent are byte-verified, but no emulator or live-client rendering
test was performed.
