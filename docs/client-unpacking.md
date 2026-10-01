# Current client unpacking evidence

`FleetMission.exe` loads `Core.dll` and calls its exported `WinMain`. Static PE
inspection does not show a direct load reference to `Main.dll`; this does not
exclude a dynamic `LoadLibraryA`/`GetProcAddress` path. The installed-client
runtime evidence now identifies `Main.dll` as VMProtect-protected and
`ITNTL.dll` as readable native x86. Both export `AllocScreen` and related
lifecycle names. The export match is useful evidence for the renderer boundary,
but does not prove the protected and readable implementations are byte- or
behavior-identical. See [ITNTL sprite loader](itntl-sprite-loader.md).

The installed `Core.dll` has SHA-256
`75e3270f5636f9aa7292ea6dc0b4a0c79f2154bc9d5d31f75b11ac7081f128a4`.
Its `.text`, `.rdata`, `.data`, and `.fptable` sections have zero raw size in the
file. Their bytes are stored through VMProtect's `.vmp1` section and are
materialized after the DLL initializes.

`tools/dump_loaded_module.py` launches the supplied client with the Windows
`RunAsInvoker` compatibility layer, waits for named modules, reads their mapped
pages, and rebuilds every mapped section into a PE file. The first `Core.dll`
capture recovered 11,751,424 mapped bytes with no unreadable pages. The rebuilt
PE contains 4,268,228 bytes of native `.text` and disassembles from its first
instruction. Generated dumps and manifests are kept under
`reports/unpacked-client/` and are intentionally Git-ignored.

The analysis PE preserves its live image base. VMProtect's runtime writes many
absolute addresses that are not represented by the standard `.reloc` table;
normalizing only those table entries creates a mixed invalid image. The tool's
`--normalize-base` option exists for controlled experiments but is not used for
the authoritative dump.

Ghidra found five `ShipStructure` strings in the recovered module and traced the
current Sangduck loader to live addresses `0x587B6750` and `0x587B6D70` for the
recorded `0x58480000` image base. The loader's compressed two-byte branch reads
span fields at offsets `+0` and `+3`, advances by five bytes, and ignores byte
`+2`. This independently confirms the same behavior observed in the readable
comparison module and corrected a false run-mode assumption in the preview
decoder.

This is an unpacked mapped `Core.dll` image, not a claim that VMProtect
virtualization is fully removed from `Main.dll`. Native packed functions are
available for decompilation from the captured image. Functions translated into
VM bytecode still require separate identification and behavioral
reconstruction; the capture does not translate that bytecode into native
function bodies.

## Archived 2062 client startup capture

The archived 2062 package has a separate `NavyFIELD.exe` (SHA-256
`9aac73f0f460cac93eb6465cd35a6ca0a1b204e58c724b47dd30814361b7432c`) and
`Main.dll` (SHA-256
`dd53bd78d5a4eaae916a428f9086582bf8603be2e680c2a84459f21afe03e663`). The
executable's entry point is in the small on-disk `.nsp1` bootstrap; its
handoff enters `.nsp0`, whose raw size is zero, so static disassembly stops
before the startup functions. The existing `dump_loaded_module.py` tool accepts
`--settle` to wait after a module appears before reading its mapped pages. A
six-second settled capture
produced a 655,360-byte mapped image with no unreadable pages; the rebuilt PE
and memory image are preserved locally under the ignored
`reports/unpacked-2062-client/` directory.

Ghidra analysis of that mapped snapshot recovered the startup transfer
`0x0048D689 -> 0x0046CF8F -> 0x00401000`. The first function performs loader
fixups and invokes the runtime startup routine; the latter initializes the
window/display path. This analysis does not establish that the entire protected
image is devirtualized. During the observed 20-second executable run,
`Main.dll` and `ITNTL.dll` did not load. The archived `Main.dll` has zero raw
bytes for its `CODE` and `DATA` sections, no TLS directory, and a module entry
point at RVA `0x1E2B70`. A separate 32-bit PowerShell host, with the archived
`MSVCRTD.DLL` beside it, loaded `Main.dll` through the Windows loader without
starting the game or authenticating. Its DLL entrypoint expanded the protected
image in memory. `dump_loaded_module.py` captured 1,982,464 bytes at base
`0x10000000` with no unreadable pages; the `.CODE` section contains 1,093,152
nonzero bytes. The mapped capture SHA-256 is
`929af9b902a107f9e1d4b5e291a56551f88e882a201249b3bb89d17706a5cd00` and stays
under the ignored `reports/unpacked-2062-client/` directory.

The repeatable isolated-host sequence is:

```
rtk proxy C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -NoProfile -ExecutionPolicy Bypass -File tools/load_module_host.ps1 -ModulePath var\navyfield2062\Main.dll -HoldSeconds 120
rtk python tools/dump_loaded_module.py --pid <printed-pid> --module Main.dll --output reports/unpacked-2062-client
```

Ghidra recovered the DLL entrypoint at `0x101E2B70`, which expands the code
stream from `0x10135000` to `0x10001000` and applies import/relocation fixups.
The exported `AllocScreen` at `0x100348B0` allocates `0x7C` bytes through an
initialized function pointer, then calls constructor `0x1004DB50` with the
caller-supplied configuration. The pointer at `0x1017515C` resolves in the
captured process to `MSVCRTD.DLL+0xE2C0`, whose export is `operator new(unsigned
int)`. `InitCGCDLL` at `0x10033A70` delegates to `0x10102C40`, which copies the
host's callback table into renderer globals.

The archived readable `ITNTL.dll` independently uses the same `0x7C` allocation
in its `AllocScreen` at `0x1002F8E0`, but calls constructor `0x10046C20` and
stores the object in different globals. This confirms the allocation size and
export boundary, not equivalence of the protected constructor or the full
renderer. No original game login or network connection was attempted.

`InitCGCDLL` at `0x10033A70` is a 16-byte host boundary: it forwards its first
argument to `0x10102C40` and returns zero. The callee's recovered 562-byte body
copies host-provided callback values into renderer globals, reading fields
through index `0x73` (byte offset `0x1CC`) and returning one. This establishes
that the table must be readable through at least byte `0x1CF`; the candidate
layout models it as `0x1D0` bytes, but no host-side length argument was found.
The callback table's semantic field names remain unknown.

`InitCGCDLL`, `FUN_10102c40`, `AllocScreen`, `FUN_10038130`, the shared control
initializer/list helpers at `0x100FE9B0`, `0x100FEF00`, and `0x100FEFA0`, the
row initializer `0x10015B80`, the allocator callback thunk `0x1016C7A0`, the
screen constructor `0x1004DB50`, and its full-screen, logo, and overlay
constructors at `0x1002C3D0`, `0x100FD890`, and `0x100F34A0` are reconstructed
in `src/client-2062/Main/`. Visual C++ 6.0 SP5 `/O2 /GX-` and objdiff 3.8.0
reproduce all 5,959 bytes exactly. Relative call targets and
`AllocScreen`'s four absolute global addresses are checked against the captured
operands. The callback copier's absolute renderer-global operands remain literal
machine addresses in its object code and therefore compare directly without
relocation normalization.

This work verifies against the local mapped-image snapshot; it does not remove
VMProtect from the shipping module or produce a standalone runnable DLL.

The public-safe function index for this mapped `Main.dll` contains 2,016
Ghidra-recognized functions totaling 1,253,481 body bytes. Function boundaries
are analysis metadata and still need review. The thirteen verified client byte
matches include `InitCGCDLL`, `FUN_10102c40`, `AllocScreen`, `FUN_10038130`,
`FUN_10015b80`, the allocator thunk, the screen constructor, all three screen
child constructors, and the three common control initialization/list functions.
`FUN_10015b80` is called seven times by the screen constructor to configure its
label rows. The three common control functions are
byte-level reconstructions grounded in the captured instruction sequence; the
neutral helper names describe their observed list roles, while the owner-list
field semantics are still inferred from offsets and insertion behavior.
The logo constructor's configured position, 256x0 extent, and list membership
are directly supported by its fields and call sequence; higher-level meaning of
those fields is still inferred. Ghidra's pseudocode for the 2,751-byte full-screen
constructor shows nine randomly positioned children with spacing checks, plus
resource and control arrays; the RNG callback's contract and several child-field
meanings remain unknown. The 375-byte overlay constructor initializes a 256-slot
child-control table and delegates more setup to `0x100F3F40`, whose behavior is
not yet reconstructed. The full-screen constructor also calls unmatched helpers
at `0x100FFAC0`, `0x10032360`, `0x100FF160`, `0x100FF120`, `0x10018950`,
`0x101047F0`, `0x10018600`, `0x100188E0`, `0x10103B80`, and `0x10022F80`.
Re-run client verification with `python tools/verify_client_matches.py`; the tool checks the
original module hash, mapped-image hash, compiler hash, call destinations,
absolute global addresses, and objdiff scores. Captures and compiler binaries
remain local and ignored.

The first render subsystem traced through that recovered native code is the
ship sprite path. It establishes the exact animation-record stride, timed frame
selection, node anchoring, clipping and final screen-vtable call. See the
[current client ship sprite render path](client-render-path.md).
