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
before the startup functions. The
existing `dump_loaded_module.py` tool now accepts `--settle` to wait after a
module appears before reading its mapped pages. A six-second settled capture
produced a 655,360-byte mapped image with no unreadable pages; the rebuilt PE
and memory image are preserved locally under the ignored
`reports/unpacked-2062-client/` directory.

Ghidra analysis of that mapped snapshot recovered the startup transfer
`0x0048D689 -> 0x0046CF8F -> 0x00401000`. The first function performs loader
fixups and invokes the runtime startup routine; the latter initializes the
window/display path. This analysis does not establish that the entire protected
image is devirtualized. During the observed 20-second executable run,
`Main.dll` and `ITNTL.dll` did not load, so their game-specific initialization
is still beyond this startup trace. The archived `Main.dll` has zero raw bytes
for its `CODE` and `DATA` sections and no TLS directory; its module entry point
is at RVA `0x1E2B70`. The next capture needs a state that actually activates the
game DLLs, or a separately validated in-process loader path. No authentication
was attempted.

The first render subsystem traced through that recovered native code is the
ship sprite path. It establishes the exact animation-record stride, timed frame
selection, node anchoring, clipping and final screen-vtable call. See the
[current client ship sprite render path](client-render-path.md).
