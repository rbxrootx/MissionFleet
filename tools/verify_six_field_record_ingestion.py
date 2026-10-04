"""Build and run portable batch-record ingestion behavior cases."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "six-field-record-ingestion"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("six_field_record_ingestion_test.exe" if os.name == "nt"
                               else "six_field_record_ingestion_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/SixFieldRecordIngestion.cpp"),
        str(ROOT / "tests/native/six_field_record_ingestion_test.cpp"),
        "-o", str(executable),
    ], cwd=ROOT, env=environment, check=True)
    subprocess.run([str(executable)], cwd=ROOT, env=environment, check=True)


if __name__ == "__main__":
    main()
