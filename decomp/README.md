# Native decompilation evidence

This directory records the native-code recovery behind MissionFleet. It is
evidence and analysis, not a runnable server or a readable C++ port.

The supplied package contains a historical 2.062 client plus native login,
game, and persistence servers. The earlier Python lobby is a separate
experiment and is not the implementation of this protocol. The server runtime is
being replaced by the English Rust workspace under `../server/`; the recovered
pseudocode here remains the evidence for that work.

## Inventory

The checked-in catalog covers six report units:

| Unit | Functions | Bytes |
| --- | ---: | ---: |
| login-server | 1,739 | 211,631 |
| game-server | 8,952 | 1,492,830 |
| save-server | 8,234 | 1,160,895 |
| archived 2.062 client | 2,030 | 1,253,985 |
| installed `Main.dll` | 8,474 | 2,354,390 |
| installed `Core.dll` | 13,032 | 3,996,605 |
| **Total** | **42,461** | **10,470,336** |

Every entry is backed by an object that matches the mapped original at 100.0%
under objdiff 3.8.0. The final coverage came from bulk instruction-stream
sweeps, not subsystem-by-subsystem source analysis. Most generated sources are
`__declspec(naked)` `_emit` streams.

`Main.dll` `.text` can be rebuilt from the checked-in sources: 8,441 functions /
2,354,390 bytes, zero mismatches, with the output SHA equal to the captured
image. Thirty-three small functions live in `.vmp1` and remain template-backed.
Data, imports, resources, relocations, and the VM sections still come from the
template image. See
[the source-image note](../docs/current-main-source-image.md).

## What the 100% does not mean

- The sources are not readable or idiomatic C++.
- Function boundaries are not all independently reviewed.
- Every entry is not necessarily game logic; some are data, handlers, thunks,
  or padding.
- Indirect calls, protocols, and runtime behavior are not recovered.
- The client and servers are not playable.

Replacing `_emit` sources with analyzed C++ is source-quality work. It should
not be reported as additional byte coverage.

## Local artifacts

- `../private-inputs/decompilation/project/NavyField2062.gpr`: Ghidra project.
- `../private-inputs/decompilation/pseudocode/`: C pseudocode for each server,
  function indexes, string cross-references, summaries, and analysis logs.
- `../private-inputs/decompilation/regions/`: recovered raw memory regions,
  SHA-256 provenance, original entry addresses, and recovered import tables.
- `../private-inputs/server-package/nf2/`: extracted original server package.
- `../reports/supplied/`: archive manifests, PE information, source-path strings,
  and comparisons against the installed client's tables.
- `../reports/unpacked-current-main/` and `../reports/unpacked-client/`: mapped
  client images used for verification.

These directories are Git-ignored. Decompiled output is derived from the
supplied binaries; it is not original source, compilable C, or covered by the
workspace MIT license. Recovery tools and Ghidra scripts are workspace code.

## Reproduce

From the workspace root, with Python 3.12, `pefile`, 7-Zip, Java 21, and the
pinned Ghidra release available:

```powershell
python tools/inspect_inputs.py
python tools/unpack_nspack.py
python tools/recover_imports.py
python tools/run_decompilation.py
python tools/index_decompilation.py
python tools/verify_decompilation.py
```

Progress and byte-match verification:

```powershell
python tools/generate_progress.py
python tools/verify_matches.py
python -m unittest discover -s tests -v
```

The Ghidra runner expects `.analysis-deps/ghidra_12.1.3_PUBLIC`. The release ZIP
SHA-256 is
`93a5d11a9ad510622acaaf908c556a7b9b764d338e78a7567f3689bf5081fd54`.

`python tools/run_decompilation.py --refresh-labels` verifies the existing
region prefix, appends newly recovered tail bytes, applies import labels, and
exports without repeating the original analysis. A changed code prefix requires
a full reimport. Close the GUI project before running headless analysis.

## Recovered server regions

The servers use NsPack compression. The recovery tool produces raw analysis
regions, not executable files.

| Server | Recovered bytes | Unrecovered virtual tail | Import slots |
| --- | ---: | ---: | ---: |
| Login | 384,845 | 179 | 386 |
| Game | 2,162,688 | 0 | 806 |
| Persistence | 2,838,528 | 0 | 803 |

The login payload is one compressed byte shorter than its declared length and
its final 179 virtual bytes remain unresolved. No missing bytes are invented.
The streams have no observed LZMA end marker; completeness is measured against
the declared output length, not a successful end-marker check.

## Evidence boundary

Recovered source-path strings identify battle, ship, sailor, fleet, socket, and
database components. They are investigation anchors, not recovered source
files. Ghidra success counts do not prove types or complete behavior.

The old package is not established as compatible with the installed
`D:\FleetMission` client: most compared top-level `DATA` files differ. Database
recovery, protocol semantics, and native runtime validation remain unfinished.

The login transport is the most completely recovered server subsystem. Its
framing, checksums, protection table, liveness behavior, and connection
management are implemented in Rust under `../server/` and tested. Credential
payloads, server-list responses, game-server behavior, and save-server
persistence are not yet reconstructed and are not guessed.

## Related documentation

- [Rust server stack](../docs/rust-server-stack.md)
- [Login transport protocol](../docs/login-protocol.md)
- [Inventory completion](../docs/current-inventory-completion.md)
- [Current status](../STATUS.md)
- [Roadmap](../docs/roadmap.md)
