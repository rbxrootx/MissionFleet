"""Run verified local Ghidra against recovered static server code regions."""
import argparse
import json
import os
from pathlib import Path
import subprocess

ROOT = Path(__file__).resolve().parents[1]
PINNED_GHIDRA = ROOT / ".analysis-deps/ghidra_12.1.3_PUBLIC"
DEFAULT_PROJECT = ROOT / "private-inputs/decompilation/project"
DEFAULT_OUTPUT = ROOT / "private-inputs/decompilation/pseudocode"


def launcher_for(ghidra_home, *, windows=None):
    if windows is None:
        windows = os.name == "nt"
    name = "analyzeHeadless.bat" if windows else "analyzeHeadless"
    launcher = ghidra_home / "support" / name
    if not launcher.is_file():
        raise ValueError(f"Missing Ghidra headless launcher: {launcher}")
    return launcher


def analysis_paths(args):
    ghidra_home = Path(args.ghidra_home).resolve() if args.ghidra_home else PINNED_GHIDRA
    project = Path(args.project_dir).resolve() if args.project_dir else DEFAULT_PROJECT
    output = Path(args.output_dir).resolve() if args.output_dir else DEFAULT_OUTPUT
    def overlaps(left, right):
        return left == right or left in right.parents or right in left.parents

    if ghidra_home != PINNED_GHIDRA and (
            overlaps(project, DEFAULT_PROJECT) or overlaps(output, DEFAULT_OUTPUT)):
        raise ValueError("An alternate Ghidra build requires separate --project-dir and --output-dir")
    return launcher_for(ghidra_home), project, output


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("names", nargs="*", default=["login-server", "game-server", "save-server"])
    parser.add_argument("--refresh-labels", action="store_true", help="Apply recovered imports and export an existing project")
    parser.add_argument("--ghidra-home", help="Optional alternate Ghidra installation for an isolated analysis run")
    parser.add_argument("--project-dir", help="Analysis project directory (required with alternate Ghidra)")
    parser.add_argument("--output-dir", help="Pseudocode output directory (required with alternate Ghidra)")
    args = parser.parse_args()
    try:
        launcher, project, output = analysis_paths(args)
    except ValueError as error:
        parser.error(str(error))
    project.mkdir(parents=True, exist_ok=True)
    output.mkdir(parents=True, exist_ok=True)
    for name in args.names:
        if name not in {"login-server", "game-server", "save-server"}:
            parser.error("Unknown server region")
        metadata = json.loads((ROOT / f"private-inputs/decompilation/regions/{name}.json").read_text())
        command = [str(launcher), str(project), "NavyField2062",
                   "-import", f"private-inputs/decompilation/regions/{name}.bin", "-overwrite",
                   "-loader", "BinaryLoader", "-processor", "x86:LE:32:default", "-cspec", "windows",
                   "-loader-baseAddr", metadata["memory_base"], "-scriptPath", "decomp/ghidra",
                   "-preScript", "SeedNativeEntry.java", metadata["original_entry"],
                   "-preScript", "LabelNativeImports.java",
                   "-postScript", "ExportNativeDecompilation.java", str(output),
                   "-analysisTimeoutPerFile", "180", "-max-cpu", "2"]
        print(f"Analyzing {name}", flush=True)
        summary = output / f"{name}-summary.txt"
        summary.unlink(missing_ok=True)
        if args.refresh_labels:
            command = [str(launcher), str(project), "NavyField2062",
                       "-process", name + ".bin", "-noanalysis", "-scriptPath", "decomp/ghidra",
                       "-postScript", "SyncRecoveredTail.java",
                       "-postScript", "LabelNativeImports.java",
                       "-postScript", "ExportNativeDecompilation.java", str(output),
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
