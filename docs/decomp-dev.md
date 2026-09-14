# decomp.dev integration

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
credits 1,497 functions totaling 30,144 bytes, each verified at 100.0% by objdiff
3.8.0.
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. `tools/verify_matches.py`
rebuilds recorded source and target objects locally without placing original
machine code in the repository.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json`. After the repository is published and that workflow
succeeds on its default branch, a repository administrator can register it at
`https://decomp.dev/manage/new`.
