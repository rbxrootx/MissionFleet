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
Game, and Persistence categories. `config/NF2_2062/functions.tsv` is a reviewed,
public-safe snapshot of the local Ghidra function inventory. It contains names,
addresses, and body sizes, but no original machine code or game assets.

Regenerate the local report:

```powershell
python tools/generate_progress.py
python tools/generate_progress.py --check
```

Decompiled pseudocode does not count as matching source. The report currently
credits 5,551 functions totaling 186,886 bytes, each verified at 100.0% by objdiff
3.8.0.
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. `tools/verify_matches.py`
rebuilds recorded source and target objects locally without placing original
machine code in the repository.
Source integrity accepts Git's LF and CRLF checkout forms as equivalent; every
other byte change invalidates the recorded match.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json` for the registered decomp.dev project.
