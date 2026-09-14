# decomp.me scratch workflow

[decomp.me](https://www.decomp.me/) is used for one function at a time. The
whole-project inventory and progress meter remain on
[decomp.dev](https://decomp.dev/rbxrootx/MissionFleet).

Export a function directly from the recovered private component region:

```powershell
python tools/export_decompme_scratch.py game-server 00533743
```

The ignored `build/decompme/game-server-00533743` directory contains:

- `target.s`: the exact function boundary rendered as GAS-compatible assembly;
- `scratch.json`: component identity, compiler, flags, and diff label;
- `context.cpp` and `source.cpp`: starting files for the scratch editors.

Use the Windows (9x/NT) x86 platform, Microsoft Visual C/C++ 6.0 SP5, and the
recorded `/Od /GX- /TP` flags. A decorated C++ symbol can be supplied explicitly:

```powershell
python tools/export_decompme_scratch.py game-server 00533743 `
  --symbol "?HasValue@Recovered00533743@@QBEHXZ"
```

decomp.me is collaborative scratch space. A candidate is credited to this
repository only after `tools/verify_matches.py` rebuilds it locally with the
pinned compiler and objdiff reports 100.0% for the complete function body.
Use `--only COMPONENT:ADDRESS` for rapid iteration, then run the unfiltered
verifier before committing a batch.
