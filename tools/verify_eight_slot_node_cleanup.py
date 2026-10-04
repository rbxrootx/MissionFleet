"""Build and run the portable behavior model for Main.dll FUN_588DE5C0."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "eight-slot-node-cleanup"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("eight_slot_node_cleanup_test.exe" if os.name == "nt"
                               else "eight_slot_node_cleanup_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/EightSlotNodeCleanup.cpp"),
        str(ROOT / "tests/native/eight_slot_node_cleanup_test.cpp"),
        "-o", str(executable),
    ], cwd=ROOT, env=environment, check=True)
    subprocess.run([str(executable)], cwd=ROOT, env=environment, check=True)


if __name__ == "__main__":
    main()
