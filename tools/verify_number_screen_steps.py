"""Build and run the portable CNumberScreen bounded-step behavior cases.

The model is separate from the original byte-matched x86 functions.
"""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "number-screen-semantics"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("number_screen_steps_test.exe" if os.name == "nt"
                               else "number_screen_steps_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/CNumberScreenDigits.cpp"),
        str(ROOT / "src/client-current/semantic/CNumberScreenSteps.cpp"),
        str(ROOT / "tests/native/number_screen_steps_test.cpp"),
        "-o", str(executable),
    ], cwd=ROOT, env=environment, check=True)
    subprocess.run([str(executable)], cwd=ROOT, env=environment, check=True)


if __name__ == "__main__":
    main()
