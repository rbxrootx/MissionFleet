# MissionFleet native decompilation project

The supplied historical NavyFIELD package contains actual native login, game
and persistence servers. Their recovered memory regions, Ghidra project and
C pseudocode are available locally. **Start with [the decompilation project](decomp/README.md)
and [current status](STATUS.md).** A buildable 1:1 recreation is not complete.

The matching project has a deterministic [decomp.dev progress pipeline](docs/decomp-dev.md).
Its public-safe inventory covers 42,461 functions across the login, game,
persistence, archived 2062 client, and installed-client modules. Functions are
credited only after reconstructed C/C++ produces byte-identical object code.
The current 7,151 matches cover 2,264,220 bytes (21.6261%) and are verified
individually at 100.0% by objdiff.
Recent Main.dll evidence includes the tag/selector dispatchers, selected-object
update amount handling, resource-state selection, vector direction lookup,
room-message formatting, linked-record
text walk, control-menu layout refresh, stateful record refresh, stateful update
and initializer functions, message handlers, and `CForce` child setup in [the subsystem docs](docs/).
The latest runtime-error entry slice is documented in
[the current Core.dll status notes](docs/current-core-runtime-error-entry.md).
The latest current Main.dll fixed-record copy path is documented in
[the Main record-copy notes](docs/current-main-record-copy.md).
The latest installed-client startup child branch is documented in
[the startup child notes](docs/current-main-startup-child-path.md).
The latest shared linked-chain traversal helper is documented in
[the linked-chain notes](docs/current-main-linked-chain-distance.md).
The latest bounded client record insertion helper is documented in
[the record insertion notes](docs/current-main-bounded-record-insertion.md).
The latest shared option-selection helper is documented in
[the option-selection notes](docs/current-main-option-selection.md).
The latest bounded screen-state update helper is documented in
[the screen-state notes](docs/current-main-screen-state-update.md).
The latest six-field delta dispatcher is documented in
[the delta-dispatch notes](docs/current-main-six-field-delta-dispatch.md).
The latest fixed-step grid lookup is documented in
[the grid-lookup notes](docs/current-main-grid-record-lookup.md).
The latest child-parameter helper is documented in
[the child-parameter notes](docs/current-main-child-parameter-update.md).
The latest five-argument constructor wrapper is documented in
[the constructor notes](docs/current-main-unknown-vtable-constructor.md).
The latest conditional child-constructor path is documented in
[the child-constructor notes](docs/current-main-unknown-child-constructor.md).
The latest fleet-join proposal record update path is documented in
[the fleet-join notes](docs/current-main-fleet-join-proposal-record-update.md).
The latest ranged selector update helper is documented in
[the selector notes](docs/current-main-ranged-selector-update.md).
The latest message `0x80020F0C` record path is documented in
[the proposal notes](docs/current-main-squadron-fleet-join-proposal.md).
The proposal identity lookup and fallback event forwarding are documented in
[the lookup notes](docs/current-main-proposal-identity-lookup-fallback.md).
The corrected `0x80020F12` child-list update extent and observed state changes
are documented in
[the state-update notes](docs/current-main-message-80020f12-child-list-state-update.md).
The localized member squad-join proposal path is documented in
[the proposal helper notes](docs/current-main-member-squad-join-proposal.md).
The communication battle-record route is documented in
[the battle-record notes](docs/current-main-comm-battle-record-route.md).
The companion state-2/3 branch is documented in
[the state-transition notes](docs/current-main-comm-battle-record-state-2-3-route.md).
The shared bounded record-pointer lookup is documented in
[the accessor notes](docs/current-main-bounded-indexed-record-accessor.md).
The joined-fleet event's receiver-owned record append is documented in
[the record-append notes](docs/current-main-squadron-joined-fleet-record-append.md).
The selector-driven child rebuild shared by two state methods is documented in
[the child-rebuild notes](docs/current-main-selector-state-child-rebuild.md).
The registry-backed Main socket setup and parser handoff are documented in
[the connection notes](docs/current-main-socket-connect.md).
The shared communicator-configuration payload ordering helper is documented in
[the ordering notes](docs/current-main-linked-payload-ordering.md).
The latest linked-text update path is documented in
[the linked-text notes](docs/current-main-linked-text-update.md).
The latest progress-grid state update is documented in
[the progress-grid notes](docs/current-main-progress-grid-state-update.md).
The latest resource-backed child construction path is documented in
[the child-control notes](docs/current-main-resource-child-control.md).
The latest linked-entry hit dispatch path is documented in
[the hit-dispatch notes](docs/current-main-linked-entry-hit-dispatch.md).
The latest clipped buffer compositor is documented in
[the buffer-compositor notes](docs/current-main-clipped-buffer-or.md).
The latest linked-row hit selection is documented in
[the row-selection notes](docs/current-main-linked-row-hit-selection.md).
The latest encoded-field predicate is documented in
[the predicate notes](docs/current-main-encoded-threshold-predicate.md).
The linked state-reset continuation is documented in
[the state-reset notes](docs/current-main-predicate-state-reset.md).
The latest packed-record lookup is documented in
[the record-lookup notes](docs/current-main-packed-record-lookup.md).
The latest intrusive-list removal helper is documented in
[the list-removal notes](docs/current-main-intrusive-list-removal.md).
The latest linked-cursor advance helper is documented in
[the cursor-advance notes](docs/current-main-linked-cursor-advance.md).
The latest nested-state transition helper is documented in
[the nested-state notes](docs/current-main-nested-state-transition.md).
The latest linked-key update helper is documented in
[the linked-key notes](docs/current-main-linked-key-update.md).
The latest child-state clear helper is documented in
[the child-state clear notes](docs/current-main-child-state-clear.md).
The paired encoded-accumulator update is documented in
[the accumulator notes](docs/current-main-encoded-accumulator.md).
The text-buffer update helper is documented in
[the text-buffer notes](docs/current-main-text-buffer-update.md).
The linked-list end-position helper is documented in
[the end-position notes](docs/current-main-linked-list-end-position.md).
The selector wrapper is documented in
[the selector-wrapper notes](docs/current-main-selector-wrapper.md).
The latest shared state-bit setter is documented in
[the state-bit notes](docs/current-main-state-bit-setter.md).
The latest record-comparison path is documented in
[the record-comparison notes](docs/current-main-record-comparison.md).
The latest startup range-update helper is documented in
[the range-update notes](docs/current-main-startup-range-update.md).
The child state and division helper is documented in
[the child-state notes](docs/current-main-child-state-division.md).
The startup map-entry loop and its tree helpers are documented in
[the map-entry notes](docs/current-main-map-entry-loop.md).
The four sibling object constructors and shared callback path are documented in
[the shared object-hook notes](docs/current-main-shared-object-hook.md).
The high-fan-in low-nibble field setter is documented in
[the field-update notes](docs/current-main-low-nibble-field.md).
The 66-byte startup object initializer is documented in
[the initializer notes](docs/current-main-startup-object-initializer.md).
The startup record-processing subtree is documented in
[the record-processing notes](docs/current-main-startup-record-processing.md).
The screen's child-control constructors are documented in
[the child-control notes](docs/current-main-startup-child-controls.md).
The next screen child constructor is documented in
[the screen-child notes](docs/current-main-startup-screen-child.md).
The `FUN_58868B40` child-construction path is documented in
[the sibling-control notes](docs/current-main-sibling-controls.md).
The `FUN_5890C1D0` constructor subtree is documented in
[the nested-constructor notes](docs/current-main-nested-constructor.md).
The `FUN_5884F210` record-initialization path is documented in
[the record-initializer notes](docs/current-main-record-initializer.md).

```powershell
python tools/generate_progress.py
python tools/verify_matches.py
python tools/verify_matches.py --only game-server:00533743
python tools/verify_client_matches.py
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

The supplied 2.062 client's `ITNTL.dll` contains one hardcoded
`shgame3.nf2.com.cn:8001` target. Create a hash-checked local copy and listen on
that client-facing port:

```powershell
python tools/patch_stock_client_endpoint.py `
  "private-inputs/navyfield-2062/CJN大海战2062_客户端/CJN大海战2062 客户端/ITNTL.dll" `
  "build/stock-client/ITNTL.dll"
python -m emulator.login_server --stock-client
```

Use the generated DLL in a separate client copy. The patcher refuses to modify
the evidence file in place and accepts only its recorded SHA-256. See
[the client bootstrap evidence](docs/stock-client-bootstrap.md).

The inspected installation is `D:\FleetMission`. Its files are never modified
in place. The client is launched only by the documented local capture tools.
The original game, assets and third-party server code are not included or
relicensed here.

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
python tools/sprite_gallery.py 'D:\FleetMission'
python tools/dump_loaded_module.py --launch 'D:\FleetMission\FleetMission.exe' --module Core.dll --output reports/unpacked-client --terminate
```

Generated reports are local and ignored by Git:

- `reports/inventory.json`: SHA-256 hashes, sizes, PE imports/exports, sections,
  version metadata and product URL evidence with file offsets.
- `reports/inventory.md`: readable inventory summary.
- `reports/sprites.json`: image metadata and payload offsets; this is large.
- `reports/ship-preview.png` and `reports/ship-top-preview.png`: experimental
  decoded previews from the user's local assets.

The sprite index supports observed v3.2/v3.3 image headers and rejects embedded
audio. The PNG preview supports the compressed two-byte pixel branch in format
`(2, 2)`, tied to the current recovered client loader.
Other pixel formats, animation metadata, maps, missions and encoded data tables
are not decoded. The module dumper reconstructs mapped VMProtect sections for
static analysis; it does not claim to lift functions that remain virtualized.

See [findings](docs/findings.md), [client unpacking](docs/client-unpacking.md),
[client render path](docs/client-render-path.md), [asset format notes](docs/asset-format.md),
[the current Core cleanup path](docs/current-core-cleanup-release.md),
[the Core pointer registry](docs/current-core-pointer-registry.md),
[the Core byte-stream handlers](docs/current-core-byte-stream-io.md),
[the Core buffered stream subsystem](docs/current-core-buffered-stream-io.md),
[the Core scan-conversion dispatch subsystem](docs/current-core-scan-conversion-dispatch.md),
[the Core UTF-8 conversion path](docs/current-core-utf8-conversion.md),
[the Core locale-record cache path](docs/current-core-locale-record-cache.md),
[the Core locale-record lifetime path](docs/current-core-locale-record-lifetime.md),
[decomp.dev integration](docs/decomp-dev.md), and [remaining work](docs/roadmap.md).
