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

The first render subsystem traced through that recovered native code is the
ship sprite path. It establishes the exact animation-record stride, timed frame
selection, node anchoring, clipping and final screen-vtable call. See the
[current client ship sprite render path](client-render-path.md).
