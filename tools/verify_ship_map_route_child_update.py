"""Build and run the evidence-backed FUN_588DBF10 semantic model tests."""

import os
from pathlib import Path
import shutil
import subprocess


ROOT = Path(__file__).resolve().parents[1]


def main():
    compiler = shutil.which("clang++")
    if compiler is None:
        raise FileNotFoundError("clang++ is required")
    output_dir = ROOT / "build" / "ship-map-route-child-update"
    output_dir.mkdir(parents=True, exist_ok=True)
    executable = output_dir / ("ship_map_route_child_update_test.exe" if os.name == "nt"
                               else "ship_map_route_child_update_test")
    environment = os.environ.copy()
    for name in ("TMP", "TEMP", "TMPDIR"):
        environment[name] = str(output_dir)
    subprocess.run([
        compiler, "-std=c++17", "-O2",
        str(ROOT / "src/client-current/semantic/ShipMapRouteChildUpdate.cpp"),
        str(ROOT / "tests/native/ship_map_route_child_update_test.cpp"),
        "-o", str(executable),
    ], check=True, cwd=ROOT, env=environment)
    subprocess.run([str(executable)], check=True, cwd=ROOT, env=environment)
    print("ship-map route-child semantic tests passed")


if __name__ == "__main__":
    main()
