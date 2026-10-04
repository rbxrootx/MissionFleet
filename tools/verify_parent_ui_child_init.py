"""Build and run the normal-path model of Main.dll FUN_5881DE10."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "parent-ui-child-init"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("parent_ui_child_init_test.exe" if os.name == "nt"
                               else "parent_ui_child_init_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/ParentUiChildInit.cpp"),
        str(ROOT / "tests/native/parent_ui_child_init_test.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("parent UI child normal-path tests passed")


if __name__ == "__main__":
    main()
