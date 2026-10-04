"""Build and run normal-path models of two Main.dll paired-text helpers."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "paired-record-text"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("paired_record_text_test.exe" if os.name == "nt"
                               else "paired_record_text_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/PairedRecordText.cpp"),
        str(ROOT / "tests/native/paired_record_text_test.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("paired record-text normal-path tests passed")


if __name__ == "__main__":
    main()
