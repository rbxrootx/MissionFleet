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

The report begins at 0%. Decompiled pseudocode does not count as matching source.
`config/NF2_2062/matches.json` accepts only records tied to an unchanged source
file and marked as byte-identical under objdiff 3.8.0. The promotion tool that
creates those records will be added with the first verified matching function.

The workflow at `.github/workflows/progress.yml` uploads
`build/progress/report.json`. After the repository is published and that workflow
succeeds on its default branch, a repository administrator can register it at
`https://decomp.dev/manage/new`.
