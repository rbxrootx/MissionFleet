"""Build and run the normal-path model for Main.dll FUN_587b9760."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "masked-word-message"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("masked_word_message_test.exe" if os.name == "nt"
                               else "masked_word_message_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/MaskedWordMessage.cpp"),
        str(ROOT / "tests/native/masked_word_message_test.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("masked-word message normal-path tests passed")


if __name__ == "__main__":
    main()
