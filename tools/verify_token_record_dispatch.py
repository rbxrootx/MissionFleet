"""Build and run normal-path models for two Main.dll token-record dispatchers."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "token-record-dispatch"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("token_record_dispatch_test.exe" if os.name == "nt"
                               else "token_record_dispatch_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/LinkedNameLookup.cpp"),
        str(ROOT / "src/client-current/semantic/TokenRecordDispatch.cpp"),
        str(ROOT / "tests/native/token_record_dispatch_test.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("token-record dispatch normal-path tests passed")


if __name__ == "__main__":
    main()
