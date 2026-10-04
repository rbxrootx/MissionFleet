"""Build and run the portable two-key record update with both batch wrappers."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "two-key-record-update"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("two_key_record_update_test.exe" if os.name == "nt"
                               else "two_key_record_update_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/SixFieldRecordIngestion.cpp"),
        str(ROOT / "src/client-current/semantic/TwoKeyRecordUpdate.cpp"),
        str(ROOT / "tests/native/two_key_record_update_test.cpp"),
        "-o", str(executable),
    ], cwd=ROOT, env=environment, check=True)
    subprocess.run([str(executable)], cwd=ROOT, env=environment, check=True)


if __name__ == "__main__":
    main()
