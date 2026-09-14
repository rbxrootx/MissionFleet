# NavyFIELD native decompilation

The user-supplied `大海战.rar` contains a historical 2062 client and a server
self-extracting archive. The latter contains native login, game and persistence
servers, SQL Server database files and an ASP registration site. This project
now analyzes those actual binaries. The earlier Python lobby is a separate
experiment and is not the implementation of this protocol.

## Local artifacts

- `../private-inputs/decompilation/project/NavyField2062.gpr`: Ghidra project.
- `../private-inputs/decompilation/pseudocode/`: C pseudocode for each server,
  function indexes, string cross-references, summaries and analysis logs.
- `../private-inputs/decompilation/regions/`: recovered raw memory regions,
  SHA-256 provenance, original entry addresses and recovered import tables.
- `../private-inputs/server-package/nf2/`: extracted original server package.
- `../reports/supplied/`: archive manifests, PE information, source-path strings
  and comparison with the installed modern client's tables.

These directories are local and Git-ignored. Decompiled output is derived from
the supplied binaries; it is not original source, compilable C, or covered by
the workspace MIT license. Recovery tools and Ghidra scripts are workspace code.

## Reproduce

From the workspace root, with Python 3.12, `pefile`, 7-Zip and Java 21 available:

```powershell
python tools/inspect_inputs.py
python tools/unpack_nspack.py
python tools/recover_imports.py
python tools/run_decompilation.py
python tools/index_decompilation.py
python tools/verify_decompilation.py
```

The extraction script uses the three supplied files in the user's Downloads
directory and reads the embedded SFX archive through 7-Zip. Document content
was treated as evidence, not instructions to execute. The archive password is
the one stated in the supplied document. None of the extracted game programs,
installers, registry scripts or bundled database engines has been executed.

The Ghidra runner expects `.analysis-deps/ghidra_12.1.3_PUBLIC`, downloaded from
the [official Ghidra release](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.3_build).
The release ZIP SHA-256 was verified as
`93a5d11a9ad510622acaaf908c556a7b9b764d338e78a7567f3689bf5081fd54`.
The analysis project uses x86 little-endian 32-bit Windows conventions.

`python tools/run_decompilation.py --refresh-labels` verifies the existing
region prefix, appends newly recovered tail bytes, applies import labels and
exports without repeating the original analysis. A changed code prefix requires
a full reimport. Close the GUI project before running headless analysis.

## Recovery evidence and limits

The servers use NsPack compression. The static tool recovers LZMA bytes and
restores normalized branch operands using loader metadata. It creates raw
analysis regions, not executable files. Public format evidence was consulted
in [ClamAV](https://github.com/Cisco-Talos/clamav/blob/main/libclamav/unsp.c);
decompression uses Python's standard-library LZMA implementation.

| Server | Recovered bytes | Unrecovered virtual tail | Import slots |
| --- | ---: | ---: | ---: |
| Login | 384,845 | 179 | 386 |
| Game | 2,162,688 | 0 | 806 |
| Persistence | 2,838,528 | 0 | 803 |

The game and persistence payloads reach their declared virtual lengths. The
login payload is one compressed byte shorter than declared and its final 179
virtual bytes remain unresolved. No missing bytes are invented. These streams
have no observed LZMA end marker; completeness is measured against declared
output length, not a successful end-marker check.

Recovered source-path strings include battle, ship, sailor, fleet, socket and
database components. They identify useful investigation anchors, not recovered
source files. Ghidra success counts indicate that pseudocode was emitted for
identified functions; they do not prove accurate types or complete behavior.

The old package is not established as compatible with `D:\FleetMission`:
10 of 11 compared top-level DATA files differ. Types, structures, message
semantics, database recovery and native runtime validation remain unfinished.
No original-client login, harbor entry or battle has been demonstrated.

## Project progress

Whole-project progress is prepared for [decomp.dev](../docs/decomp-dev.md).
The initial report contains all 18,925 identified native functions and starts at
an honest 0%; Ghidra pseudocode is evidence, not a byte-identical source match.
decomp.me remains useful for testing Visual C++ 6 variants on individual
functions while the exact service pack and compiler flags are established.
