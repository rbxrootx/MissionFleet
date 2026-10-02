# decomp.dev integration

Run `python tools/audit_thunk_targets.py` to independently check address-named
jump, import, and call-stub relocation destinations against original operands.
Objdiff normalizes these operands into symbols, so its score alone does not
prove their original addresses. This audit covers those three source families;
other symbolic relocations and final executable linking still require validation.
The normal `verify_matches.py` command runs this destination audit before
compilation, including when selecting individual functions with `--only`.

Run `python tools/export_link_targets.py` to export every configured relocation's
original destination to `build/matches/link-targets.json`. The exporter rejects
symbols assigned multiple destinations within one server. This local map records
linking requirements; it does not assert that destination implementations exist.
The report also resolves relative references at exact reconstructed entry points
and ranks unresolved relative targets by reference count. Absolute data/IAT
operands are excluded from function-definition resolution. A resolved definition
still requires symbol binding and final linked-image verification.
The `link_plan` section groups candidate symbol bindings and explicit blockers
by server. Missing functions, conflicting destinations, and unresolved data/import
operands are not replaced with stubs. This is a planning artifact: object symbols,
calling conventions, imports/data, section layout, and final image bytes still
need verification before any server can be marked ready to link.

decomp.dev is the whole-project progress dashboard. It reads an objdiff v2
report from a GitHub Actions artifact; it does not host or perform the actual
decompilation. The per-function compiler experiment site is decomp.me.

The GitHub project [Rebrew](https://github.com/maci0/rebrew/tree/dc77b2c14d797d8d2b1daaae8b73f54cb8a55468)
includes genetic source matching and compiler-flag sweeps, and its toolchain
catalog lists MSVC 6.0 SP5 for 32-bit PE. Its matcher was not run here: the
local Docker CLI is installed, but its Docker Desktop engine is unavailable.
Until a pilot passes this project’s pinned compiler and objdiff checks, the
Rebrew search is not counted as a match or included in the build workflow.

This repository generates one report named `NF2_2062_report`, with Login,
Game, Persistence, archived 2062 `Main.dll`, and installed FleetMission
`Main.dll` categories. The two client inventories are separate builds and use
their own capture hashes and function-address bases.
`config/NF2_2062/functions.tsv` contains the server inventory;
`client-functions.tsv` contains public-safe Ghidra metadata for the archived
client module; `config/NF2_2026/client-functions.tsv` records the installed
client build. These inventories contain names, addresses, and body sizes, but
no original machine code or game assets. Ghidra function boundaries,
especially in protected client images, remain subject to review.

Regenerate the local report:

```powershell
python tools/generate_progress.py
python tools/generate_progress.py --check
```

Decompiled pseudocode does not count as matching source. The current local report
credits 6,003 functions totaling 1,346,588 bytes (12.8629% of indexed code),
each verified at 100.0% by objdiff 3.8.0. This includes 151 archived 2062
`Main.dll` functions totaling 453,111 bytes; their local verifier is
`tools/verify_client_matches.py` and its hash-pinned input capture is not
committed. The installed 2026 `Main.dll` inventory has 107 exact function
matches totaling 405,190 bytes. Its latest class slice covers the three
parser-selected `CType2MMXAlphaSpriteData` virtual methods. The sibling
[`CType0MMXAlphaSpriteData`](current-client-alpha-type0-methods.md) and
[`CType1MMXAlphaSpriteData`](current-client-alpha-type1-methods.md) and
[`CType2MMXAlphaSpriteData`](current-client-alpha-type2-methods.md) reports
record parser/vtable evidence, uncertainties, and byte checks.
Earlier documented
slices cover the renderer/authentication exports and screen lifecycle, the
`InitCGCDLL` callback-table copier, screen child-list and static-text helpers,
the CSH sprite loader/parser, sprite-data constructors and methods, VM entry
trampolines, and logo/control screen construction. The three
export bodies have independent evidence: the `InitCGCDLL` call target is
audited at its relocation, and `GetUserId` is recorded as returning a pointer
to `0x58A0B450`. A separate
capture-specific profile indexes 13,030 functions / 3,996,319
bytes from installed `Core.dll`; 194 functions match 301,401 bytes, including
122 ship-path functions matching 280,539
bytes, covering the dispatcher, eight sprite classes, ship animation and draw
path, the render-node constructors and ordered child lists, and the cache/loader/parser.
The separate CRT floating-point error-path slice adds 17 byte-matched functions
totaling 3,292 bytes. The child-field accessor at `0x584869C0` adds 17 bytes;
Ghidra establishes a DWORD read at receiver `+4`, while its likely coordinate
role is inferred from callers; see
[`current-core-child-offset-accessor.md`](current-core-child-offset-accessor.md).
The scene phase-setup handler and its bounded child-table accessor add two
exact matches / 488 bytes; see
[`current-core-scene-phase-setup-handler.md`](current-core-scene-phase-setup-handler.md).
The phase-8 scene layout constructor at `0x586E8270` adds another 3,336-byte
match; see
[`current-core-scene-layout-constructor.md`](current-core-scene-layout-constructor.md).
Its post-construction resource loader adds two matches for the mapped
`Announcement.txt`, `Patch.txt`, and `Eula.sdt` paths; see
[`current-core-scene-text-resource-loader.md`](current-core-scene-text-resource-loader.md).
The parser for those three line-based resources adds five byte-matched functions
/ 1,039 bytes and records the LF delimiter, CR trimming, empty-line handling,
and indexed record accessors; see
[`current-core-scene-record-parser.md`](current-core-scene-record-parser.md).
The three per-resource line-string vectors add 25 matches / 2,618 bytes; see
[`current-core-scene-resource-vectors.md`](current-core-scene-resource-vectors.md).
The scene's deleting wrapper and per-resource string-vector cleanup add four
matches / 1,121 bytes; see
[`current-core-scene-resource-vector-cleanup.md`](current-core-scene-resource-vector-cleanup.md).
The scene resource row population, scroll dispatch, text-render callback, and
Core-side text backend dispatch add 18 verified functions / 8,619 bytes; the
scene constructor and its 3,926-byte resource setup routine add 2 more matches /
4,156 bytes. See
[`current-core-scene-resource-row-view.md`](current-core-scene-resource-row-view.md)
and
[`current-core-scene-resource-text-renderer.md`](current-core-scene-resource-text-renderer.md)
and
[`current-core-text-render-backend.md`](current-core-text-render-backend.md)
and
[`current-core-resource-screen-construction.md`](current-core-resource-screen-construction.md).
The inventory spans at `0x586EA6E0` and `0x5884C890` now include their complete
epilogues; Ghidra's prior extents ended mid-instruction. The expanded function
at `0x5884C890` was rechecked at objdiff 100%.
[`current-core-floating-point-error-path.md`](current-core-floating-point-error-path.md).
These matches use the mapped runtime image;
the on-disk `.text` bytes are absent, and the source preserves the captured
instruction stream rather than claiming high-level source recovery. Slot-2
callers and framebuffer output remain unverified. See the
[screen lifecycle](current-client-screen-lifecycle.md),
[installed-client child-list evidence](current-client-child-lists.md),
[installed-client static-text evidence](current-client-static-text.md),
[installed-client sprite-loader evidence](current-client-sprite-loader.md),
[installed-client sprite-data constructor evidence](current-client-sprite-data-formats.md),
[installed-client High555 sprite-method evidence](current-client-high555-sprite-methods.md),
[installed-client logo/control screen evidence](current-client-logo-screen.md),
[VM entry/trampoline evidence](client-vm-entry-trampolines.md), and
[Core.dll RGB16 compositor evidence](current-core-rgb16-compositors.md) and
[Core.dll ship sprite-loader evidence](current-core-ship-sprite-loader.md),
[Core.dll scene resource-vector evidence](current-core-scene-resource-vectors.md), and
[Core.dll scene resource-vector cleanup evidence](current-core-scene-resource-vector-cleanup.md),
[three-byte-target class evidence](current-core-three-byte-sprite-class.md) and
[its selector-1 sibling](current-core-three-byte-sprite-class1.md) and
[its selector-2 sibling](current-core-three-byte-sprite-class2.md) and
[four-byte-target class evidence](current-core-four-byte-sprite-class0.md).
The current ship render-node construction and ordered parent-child list evidence
is recorded in [the node construction slice](current-core-ship-node-construction.md).
The flag, ordering-key, and `+0x68` property setters are documented in
[the ship-node property setter slice](current-core-ship-node-properties.md).
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. `tools/verify_matches.py`
rebuilds recorded source and target objects locally without placing original
machine code in the repository.
Source integrity accepts Git's LF and CRLF checkout forms as equivalent; every
other byte change invalidates the recorded match.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json` for the registered decomp.dev project.
