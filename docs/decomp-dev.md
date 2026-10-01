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

This repository generates one report named `NF2_2062_report`, with Login,
Game, Persistence, and archived 2062 `Main.dll` categories.
`config/NF2_2062/functions.tsv` contains the server inventory;
`client-functions.tsv` contains public-safe Ghidra metadata for the mapped
client module. They contain names, addresses, and body sizes, but no original
machine code or game assets. Ghidra function boundaries, especially in the
protected client image, remain subject to review.

Regenerate the local report:

```powershell
python tools/generate_progress.py
python tools/generate_progress.py --check
```

Decompiled pseudocode does not count as matching source. The current local report
credits 5,702 functions totaling 639,997 bytes (15.5364% of indexed code), each
verified at 100.0% by objdiff 3.8.0. This includes 151 archived 2062 `Main.dll`
functions totaling 453,111 bytes; their local verifier is
`tools/verify_client_matches.py` and its hash-pinned input capture is not
committed. The newest client match is the
[application-event dispatcher](client-event-dispatch.md), whose table-backed
event routes are documented separately from the raw socket protocol.
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. `tools/verify_matches.py`
rebuilds recorded source and target objects locally without placing original
machine code in the repository.
Source integrity accepts Git's LF and CRLF checkout forms as equivalent; every
other byte change invalidates the recorded match.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json` for the registered decomp.dev project.
