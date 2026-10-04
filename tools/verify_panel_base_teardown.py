"""Build and run the normal-path model for Main.dll FUN_587B5F50."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "panel-base-teardown"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("panel_base_teardown_test.exe" if os.name == "nt"
                               else "panel_base_teardown_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/PanelBaseTeardown.cpp"),
        str(ROOT / "tests/native/panel_base_teardown_test.cpp"),
        "-o", str(executable),
    ], cwd=ROOT, env=environment, check=True)
    subprocess.run([str(executable)], cwd=ROOT, env=environment, check=True)


if __name__ == "__main__":
    main()
