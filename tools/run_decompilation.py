"""Run verified local Ghidra against recovered static server code regions."""
import argparse
import json
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("names", nargs="*", default=["login-server", "game-server", "save-server"])
    parser.add_argument("--refresh-labels", action="store_true", help="Apply recovered imports and export an existing project")
    args = parser.parse_args()
    project = ROOT / "private-inputs/decompilation/project"
    project.mkdir(parents=True, exist_ok=True)
    output = ROOT / "private-inputs/decompilation/pseudocode"
    output.mkdir(parents=True, exist_ok=True)
    launcher = Path(".analysis-deps/ghidra_12.1.3_PUBLIC/support/analyzeHeadless.bat")
    for name in args.names:
        if name not in {"login-server", "game-server", "save-server"}:
            parser.error("Unknown server region")
        metadata = json.loads((ROOT / f"private-inputs/decompilation/regions/{name}.json").read_text())
        command = [str(launcher), "private-inputs/decompilation/project", "NavyField2062",
                   "-import", f"private-inputs/decompilation/regions/{name}.bin", "-overwrite",
                   "-loader", "BinaryLoader", "-processor", "x86:LE:32:default", "-cspec", "windows",
                   "-loader-baseAddr", metadata["memory_base"], "-scriptPath", "decomp/ghidra",
                   "-preScript", "SeedNativeEntry.java", metadata["original_entry"],
                   "-preScript", "LabelNativeImports.java",
                   "-postScript", "ExportNativeDecompilation.java", "private-inputs/decompilation/pseudocode",
                   "-analysisTimeoutPerFile", "180", "-max-cpu", "2"]
        print(f"Analyzing {name}", flush=True)
        summary = output / f"{name}-summary.txt"
        summary.unlink(missing_ok=True)
        if args.refresh_labels:
            command = [str(launcher), "private-inputs/decompilation/project", "NavyField2062",
                       "-process", name + ".bin", "-noanalysis", "-scriptPath", "decomp/ghidra",
                       "-postScript", "SyncRecoveredTail.java",
                       "-postScript", "LabelNativeImports.java",
                       "-postScript", "ExportNativeDecompilation.java", "private-inputs/decompilation/pseudocode",
                       "-max-cpu", "2"]
        with (output / f"{name}-ghidra.log").open("w", encoding="utf-8") as log:
            result = subprocess.run(command, cwd=ROOT, stdout=log, stderr=subprocess.STDOUT)
        print(f"{name}: Ghidra exit={result.returncode}", flush=True)
        if result.returncode:
            print((output / f"{name}-ghidra.log").read_text(errors="replace")[-5000:], flush=True)
            raise SystemExit(result.returncode)
        log_text = (output / f"{name}-ghidra.log").read_text(errors="replace")
        if "recovered import slots" not in log_text or (args.refresh_labels and "Verified recovered region prefix" not in log_text):
            raise SystemExit("A required Ghidra preparation script did not complete; inspect the analysis log")
        if not summary.exists():
            print((output / f"{name}-ghidra.log").read_text(errors="replace")[-5000:], flush=True)
            raise SystemExit("Missing decompilation summary; check Ghidra script errors")
        print(summary.read_text(), flush=True)


if __name__ == "__main__":
    main()
