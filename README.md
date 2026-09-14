# MissionFleet native decompilation project

The supplied historical NavyFIELD package contains actual native login, game
and persistence servers. Their recovered memory regions, Ghidra project and
C pseudocode are available locally. **Start with [the decompilation project](decomp/README.md)
and [current status](STATUS.md).** A buildable 1:1 recreation is not complete.

The matching project has a deterministic [decomp.dev progress pipeline](docs/decomp-dev.md).
Its public-safe inventory covers 18,925 recovered functions across the login,
game, and persistence servers. Functions are credited only after reconstructed
C/C++ produces byte-identical object code. The current 2,160 reconstructed
functions are verified individually at 100.0% by objdiff.

```powershell
python tools/generate_progress.py
python tools/verify_matches.py
python tools/verify_matches.py --only game-server:00533743
python tools/find_repeated_functions.py --min-count 4 --limit 20
python -m unittest discover -s tests -v
```

The generated `NF2_2062_report` is validated against objdiff 3.8.0 locally and
uploaded by GitHub Actions to the active [decomp.dev dashboard](https://decomp.dev/rbxrootx/MissionFleet).

## First stock-client connection test

The recovered login transport framing and default port are implemented in a
local capture endpoint. Start it before launching the client:

```powershell
python -m emulator.login_server
```

It listens on `127.0.0.1:8010` and records raw and decoded client frames in
`captures/login-handshake.jsonl`. It also answers the verified initial protocol
probe, allowing the client to advance to its next request. See
[the recovered protocol notes](docs/login-protocol.md).

The inspected installation is `D:\FleetMission`. It was read without modifying
or executing its files. The original game, assets and third-party server code
are not included or relicensed here.

## Native recovery pipeline

The supplied server programs use NsPack. The local pipeline extracts the
archives, recovers each compressed memory region, restores normalized branch
operands and import labels, then exports Ghidra pseudocode and indexes.

```powershell
python tools/inspect_inputs.py
python tools/unpack_nspack.py
python tools/recover_imports.py
python tools/run_decompilation.py
python tools/index_decompilation.py
python tools/verify_decompilation.py
```

Private binaries and derived pseudocode remain Git-ignored. See
[decomp/README.md](decomp/README.md) for exact local artifact locations,
recovery hashes, limits, and reproducibility details.

## Matching workflow

The recovered code is 32-bit x86. Visual C++ 6.0 SP5 with `/Od /GZ /GX-` is
confirmed for the first matched game function; see [compiler evidence](config/NF2_2062/COMPILER.md).
Decompiled functions move
into `src/login-server`, `src/game-server`, or `src/save-server`. A function is
promoted in `config/NF2_2062/matches.json` only after objdiff verifies a
byte-identical object-code match.

`tools/find_repeated_functions.py` ranks byte-identical unmatched bodies across
all three recovered server regions. Use its output to select a source pattern,
then add a match only after `tools/verify_matches.py` reports objdiff 100.0%.

## Client inspection and experimental asset preview

The PE inventory uses `pefile`; version 2023.2.7 is already installed here.
On another machine, install `requirements-analysis.txt` for PE metadata.

```powershell
python tools/inventory.py 'D:\FleetMission'
python tools/sprite_index.py 'D:\FleetMission'
python tools/sprite_preview.py 'D:\FleetMission\SPR\ShipStructureF000.spr' --frame 0 --output reports/ship-preview.png
python tools/sprite_preview.py 'D:\FleetMission\SPR\ShipStructureF000.spr' --frame 1 --output reports/ship-top-preview.png
```

Generated reports are local and ignored by Git:

- `reports/inventory.json`: SHA-256 hashes, sizes, PE imports/exports, sections,
  version metadata and product URL evidence with file offsets.
- `reports/inventory.md`: readable inventory summary.
- `reports/sprites.json`: image metadata and payload offsets; this is large.
- `reports/ship-preview.png` and `reports/ship-top-preview.png`: experimental
  decoded previews from the user's local assets.

The sprite index supports observed v3.2/v3.3 image headers and rejects embedded
audio. The PNG preview supports observed RGB565 literal runs in format `(2, 2)`.
Other pixel formats, animation metadata, maps, missions and encoded data tables
are not decoded. No stock client behavior or gameplay parity was tested.

See [findings](docs/findings.md), [asset format notes](docs/asset-format.md),
[decomp.dev integration](docs/decomp-dev.md), and [remaining work](docs/roadmap.md).
