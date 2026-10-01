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
credits 5,758 functions totaling 736,504 bytes (7.0353% of indexed code), each
verified at 100.0% by objdiff 3.8.0. This includes 151 archived 2062 `Main.dll`
functions totaling 453,111 bytes; their local verifier is
`tools/verify_client_matches.py` and its hash-pinned input capture is not
committed. The newest client match is the
[application-event dispatcher](client-event-dispatch.md), whose table-backed
event routes are documented separately from the raw socket protocol.
Fifty-three matches cover 22,348 bytes in the installed client's `Main.dll`:
1,792 bytes across the renderer/authentication exports and screen lifecycle,
586 bytes in the `InitCGCDLL` callback-table copier, 603 bytes in the screen
child-list initializer/insert/remove helpers, 344 bytes in the static-text
control constructor and direct helper path, 13,311 bytes in the CSH sprite-file
loader/parser path, 381 bytes in the VM entry/trampoline slice, and 5,331 bytes
in the logo/control screen constructor and directly constructed controls. The three
export bodies have independent evidence: the `InitCGCDLL` call target is
audited at its relocation, and `GetUserId` is recorded as returning a pointer
to `0x58A0B450`. A separate
capture-specific profile indexes 13,030 functions / 3,996,277
bytes from installed `Core.dll`; two RGB16 span compositors and their 272-byte
screen dispatcher match 74,159 bytes. See the
[screen lifecycle](current-client-screen-lifecycle.md),
[installed-client child-list evidence](current-client-child-lists.md),
[installed-client static-text evidence](current-client-static-text.md),
[installed-client sprite-loader evidence](current-client-sprite-loader.md),
[installed-client logo/control screen evidence](current-client-logo-screen.md),
[VM entry/trampoline evidence](client-vm-entry-trampolines.md), and
[Core.dll RGB16 compositor evidence](current-core-rgb16-compositors.md).
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. `tools/verify_matches.py`
rebuilds recorded source and target objects locally without placing original
machine code in the repository.
Source integrity accepts Git's LF and CRLF checkout forms as equivalent; every
other byte change invalidates the recorded match.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json` for the registered decomp.dev project.
