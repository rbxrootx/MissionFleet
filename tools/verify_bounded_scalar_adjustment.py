"""Build and run the portable behavior model for Main.dll FUN_5873A300."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "bounded-scalar-adjustment"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("bounded_scalar_adjustment_test.exe" if os.name == "nt"
                               else "bounded_scalar_adjustment_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/BoundedScalarAdjustment.cpp"),
        str(ROOT / "tests/native/bounded_scalar_adjustment_test.cpp"),
        "-o", str(executable),
    ], cwd=ROOT, env=environment, check=True)
    subprocess.run([str(executable)], cwd=ROOT, env=environment, check=True)


if __name__ == "__main__":
    main()
