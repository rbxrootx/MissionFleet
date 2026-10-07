# Current Main CPannelOption interaction and settings subsystem

The RTTI-backed `CPannelOption` vtable starts at `0x589A0200`. Its seven
entries are `FUN_5889f030`, `FUN_588a30b0`, `FUN_5889f050`, `FUN_58874260`,
`FUN_588a34d0`, the already matched `FUN_58902fe0`, and `FUN_588a3200`.
The CompleteObjectLocator pointer at `0x589A01FC` resolves to
`0x589A9424`, whose type descriptor names `.?AVCPannelOption@@`. This corrects
an earlier catalog claim: `FUN_588a0450` is the key-settings loader called by
the `+0x18` event handler `FUN_588a3200` at `0x588A324D`; it is not a vtable
entry.

The current byte-match batch covers the six previously open vtable entries
and their still-open direct-call closure: 24 functions totaling 8,244 bytes.
ObjDiff 3.8.0 reports 100.0% identity across every function. The destructor
thunk `FUN_5889f030` consists of exact ranges `0x5889F030..0x5889F044` and
`0x5889F048..0x5889F04D`, with a three-byte gap. The focused verifier also
checks the vtable/RTTI bytes, 28 Ghidra-derived direct-call edges, and closure
of 160 direct CALL/JMP transfers.

Ghidra shows the vtable methods switching panel state, dispatching to child
controls, responding to click and keyboard messages, assigning and validating
31 key bindings, and updating three option sliders. The settings path reads
the key bindings from `SOFTWARE\FleetMission\FleetMissionCN\CONFIGURATION_KEY`
through the existing matched loader. A separate path reads 27 graphics,
audio, and gameplay preferences below
`SOFTWARE\FleetMission\FleetMissionCN\OPTION`; the child-control state
transfer helper copies those settings to and from observed renderer/audio
globals. The subsystem also includes the key-label formatter and the open
runtime thunks it directly uses.

## Uncertainty and validation

The exact meaning of some control fields and several host registry/runtime
function pointers remain unknown; child virtual-call targets are indirect and
not resolved by the direct-call audit. No original-client interaction, visual
check, emulator launch, or server test was performed. The reconstructed
sources preserve the installed mapped `Main.dll` instructions and establish
byte identity, but they do not recover the original high-level C++ source.

This batch moves the repository inventory from 7,738 to 7,762 matched
functions and from 2,454,439 to 2,462,683 matched bytes out of 10,470,295.
The current Main.dll component moves from 1,605 to 1,629 matched functions
and from 1,481,021 to 1,489,265 matched bytes.
