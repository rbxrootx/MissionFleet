# MissionFleet

MissionFleet is an independent reconstruction of the historical NavyFIELD 2.062
client and server stack. It combines byte-level decompilation evidence with an
English Rust server implementation.

**Status: not playable end to end.** The supplied client boots through a rehost
harness, the login transport is reconstructed in Rust, and the decompilation
inventory is byte-complete. Account authentication, server-list handoff, and the
game/save protocols are still being reconstructed.

## Current state

| Area | State |
| --- | --- |
| Decompilation inventory | 42,461 / 42,461 functions and 10,470,336 / 10,470,336 code bytes at 100.0% under objdiff 3.8.0. Most sources are exact `_emit` streams, not readable C++. |
| `Main.dll` source image | `.text` rebuilt from checked-in sources: 8,441 functions / 2,354,390 bytes, zero mismatches, matching the captured image SHA. 33 `.vmp1` functions remain template-backed. |
| Rust login transport | Framing, stateless/table checksums, protection negotiation, announcement, liveness probes, idle timeout, English console. Tests pass. |
| Rust login authentication | **Not reconstructed.** Credential and server-list frames are logged with payload hex but not answered. |
| Rust game server | Scaffold. Refuses to bind until room/harbor/movement/combat messages are recovered. |
| Rust save server | Scaffold. Refuses to bind until CDB layouts and persistence semantics are recovered. |
| Client runtime | Boots through the rehost harness with a source-built `Main.dll` `.text`; real CRT/VMProtect initialization and a playable client remain open. |

## What "100%" means

The 42,461-function result is a **byte-identity milestone**. Every catalog entry
has an object that matches the recovered original at 100.0% under objdiff. It
does not mean:

- the sources are readable or idiomatic C++;
- every function boundary is correct;
- indirect calls, protocol semantics, or runtime behavior are recovered;
- the client or servers are playable.

The source-quality pass is separate work. See
[the inventory completion note](docs/current-inventory-completion.md).

## Repository layout

```text
config/          progress catalog and verification records
decomp/          native decompilation evidence and Ghidra workflow
docs/            protocol, subsystem, and status notes
emulator/        Python login capture endpoint
server/          Rust server workspace
src/             byte-matched source catalog
tests/           Python test suite
tools/           analysis, verification, asset, and capture tools
private-inputs/  supplied binaries and derived artifacts (Git-ignored)
reports/         generated analysis output (Git-ignored)
```

## Quick start

### Rust login transport

```powershell
cd server
cargo run -p nf-login -- --bind 127.0.0.1:8010
```

Useful options:

```text
--protection             enable the recovered table negotiation
--timeout-ms N           idle timeout
--max-connections N      accepted-connection limit
--accounts FILE          id<TAB>password[<TAB>rank<TAB>is_flag]
```

Without `--accounts`, the test account is `admin` / `admin`.

The stock client dials port 8001. Bind the Rust server to 8001 directly, keep a
TCP relay from 8001 to 8010, or patch the client endpoint with the existing
tools.

### Python capture endpoint

```powershell
python -m emulator.login_server
```

This listens on the recovered login port, records raw and decoded frames in
`captures/login-handshake.jsonl`, and answers the verified liveness probe. It
does not complete authentication.

### Verification

```powershell
python -m unittest discover -s tests -v
cd server
cargo fmt --all -- --check
cargo test --workspace
cargo build --workspace
```

## Evidence and recovery

The native pipeline extracts the supplied NsPack server programs, recovers each
compressed region, restores import and branch metadata, and exports Ghidra
pseudocode and indexes:

```powershell
python tools/inspect_inputs.py
python tools/unpack_nspack.py
python tools/recover_imports.py
python tools/run_decompilation.py
python tools/index_decompilation.py
python tools/verify_decompilation.py
```

Private binaries, derived pseudocode, and captured images stay under
`private-inputs/` and `reports/` and are not committed. See
[the native decompilation notes](decomp/README.md).

## Documentation

- [Rust server stack](docs/rust-server-stack.md)
- [Login transport protocol](docs/login-protocol.md)
- [Inventory completion](docs/current-inventory-completion.md)
- [Main source image](docs/current-main-source-image.md)
- [Client unpacking](docs/client-unpacking.md)
- [Roadmap](docs/roadmap.md)
- [Native decompilation evidence](decomp/README.md)

`STATUS.md` preserves the long-form subsystem history. The sections above are
the current project-level summary.

## Legal

The workspace MIT license covers original tools, documentation, and the Rust
server code. It does not cover the supplied game client, server binaries,
assets, or derived decompiled output. Those remain the property of their
respective owners and are not included or re-licensed by this repository.

Do not use this project to distribute game assets or to bypass authentication
on systems you do not own. The runtime work here is for analysis and
reconstruction of the supplied historical package.
