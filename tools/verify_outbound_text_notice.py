"""Build and run normal-path models for Main.dll outbound text helpers."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "outbound-text-notice"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("outbound_text_notice_test.exe" if os.name == "nt"
                               else "outbound_text_notice_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/OutboundTextNotice.cpp"),
        str(ROOT / "tests/native/outbound_text_notice_test.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("outbound text notice normal-path tests passed")


if __name__ == "__main__":
    main()
