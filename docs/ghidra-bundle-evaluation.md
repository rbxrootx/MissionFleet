# Ghidra Bundle for NavyFIELD analysis

Reviewed [felipe-dos-santos81/ghidra-bundle](https://github.com/felipe-dos-santos81/ghidra-bundle)
at commit `841295160dede0b84ec65b8afd6c22a6c64f8cb1` (2026-10-07).
It pins Ghidra 12.1.4 and includes GhidraMCP, an LE/LX loader, and
GhidraDosToolbox. Its installation and tests are documented for Linux;
the README reports Linux arm64 validation and says macOS is untested. The
Makefile installs prerequisites through `apt` or Homebrew, so its automated
build is not a Windows installation path.

For this game, GhidraMCP can make interactive inspection easier on a host
where the bundle runs. The historical NavyFIELD server regions and installed
client use x86 32-bit Windows conventions; the LE/LX and DOS loaders do not
decode their current PE or recovered-raw-image inputs. Ghidra 12.1.4 may
produce different analysis or pseudocode from the pinned 12.1.3 build. Neither
decompiler output nor MCP responses count as byte matches: the mapped image,
exact function ranges, compiler output, and ObjDiff remain the verification
boundary.

## Isolated trial

`tools/run_decompilation.py` now accepts an alternate `--ghidra-home` together
with separate `--project-dir` and `--output-dir` paths. On a Linux or macOS
host where the bundle has been built and the local private inputs are present,
run a single game-server pilot with paths outside the pinned project:

```bash
rtk python tools/run_decompilation.py game-server \
  --ghidra-home /path/to/ghidra-bundle/dist/ghidra_12.1.4_PUBLIC \
  --project-dir /path/to/isolated/navyfield-project \
  --output-dir /path/to/isolated/navyfield-pseudocode
```

The script rejects an alternate Ghidra installation if either path still
targets the pinned project or output directory. `--refresh-labels` may be used
only after the isolated project has been imported. The existing command with
no new options continues to use the locally pinned 12.1.3 build.

Before adopting 12.1.4 for the installed client, compare a representative
set of current Main.dll functions in a separate read-only project against
their 12.1.3 body and edge manifests, including discontinuous bodies and
tail transfers. Run the focused mapped-image verifiers and ObjDiff against
the same pinned client capture. This bundle has not been built or run in this
Windows checkout, and it has not changed any verified function or byte count.
