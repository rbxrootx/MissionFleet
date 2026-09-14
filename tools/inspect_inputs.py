"""List, validate and extract supplied archives for static analysis only."""
import hashlib
import json
from pathlib import Path, PureWindowsPath
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[1]
DOWNLOADS = Path("C:/Users/Elisha Trice/Downloads")
INPUTS = [("大海战.rar", "navyfield-2062"),
          ("最新版自动混超级V20150325.rar", "utility-20150325"),
          ("大海战客户端.doc", "client-document-streams")]


def archive_entries(source):
    result = subprocess.run([shutil.which("7z"), "l", "-slt", "-sccUTF-8", str(source)],
                            capture_output=True, encoding="utf-8", errors="replace", check=True)
    body = result.stdout.split("----------", 1)[1]
    entries = []
    for block in body.strip().split("\n\n"):
        entry = dict(line.split(" = ", 1) for line in block.splitlines() if " = " in line)
        if "Path" not in entry:
            continue
        path = PureWindowsPath(entry["Path"])
        if path.is_absolute() or path.drive or ".." in path.parts or ":" in str(path):
            raise ValueError(f"Unsafe member path: {path}")
        if any("link" in key.lower() and value for key, value in entry.items()):
            raise ValueError(f"Archive link requires separate review: {path}")
        entries.append(entry)
    return entries


def main():
    reports = ROOT / "reports" / "supplied"
    reports.mkdir(parents=True, exist_ok=True)
    manifest = []
    for name, target_name in INPUTS:
        source = DOWNLOADS / name
        entries = archive_entries(source)
        destination = ROOT / "private-inputs" / target_name
        destination.mkdir(parents=True, exist_ok=True)
        # Archive password is stated in the user-supplied client document.
        password_args = ["-pwww.mcncc.com"] if name == "大海战.rar" else ["-p"]
        result = subprocess.run([shutil.which("7z"), "x", "-y", "-aos", "-sccUTF-8", *password_args, str(source),
                                 "-o" + str(destination)], capture_output=True, encoding="utf-8", errors="replace")
        if result.returncode != 0:
            raise RuntimeError(result.stdout + result.stderr)
        digest = hashlib.sha256()
        with source.open("rb") as stream:
            while chunk := stream.read(1024 * 1024):
                digest.update(chunk)
        item = {"source": str(source), "sha256": digest.hexdigest(), "destination": str(destination), "entries": entries}
        manifest.append(item)
        interesting = [e["Path"] for e in entries if PureWindowsPath(e["Path"]).suffix.lower() in
                       {".exe", ".dll", ".sql", ".bak", ".mdf", ".pdb", ".c", ".cpp", ".h", ".bat", ".txt", ".ini"}]
        print(json.dumps({"source": name, "entries": len(entries), "interesting": interesting}, ensure_ascii=True))
    (reports / "input-manifest.json").write_text(json.dumps(manifest, ensure_ascii=True, indent=2), encoding="utf-8")
    installers = list((ROOT / "private-inputs/navyfield-2062").rglob("大海战服务端一键安装版.exe"))
    if len(installers) != 1:
        raise ValueError("Expected one server self-extracting archive")
    installer = installers[0]
    archive_entries(installer)
    # 7-Zip reads the embedded archive; the self-extracting program never runs.
    subprocess.run([shutil.which("7z"), "x", "-y", "-aos", "-pwww.mcncc.com", str(installer),
                    "-o" + str(ROOT / "private-inputs/server-package")], check=True, capture_output=True)


if __name__ == "__main__":
    main()
