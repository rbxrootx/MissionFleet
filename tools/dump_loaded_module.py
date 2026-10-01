"""Dump a loaded 32-bit PE module and rebuild its mapped sections as a PE file.

This is intended for locally supplied VMProtect-packed NavyFIELD modules whose
original sections have zero raw size on disk but are materialized by the loader.
"""
import argparse
import ctypes
import hashlib
from ctypes import wintypes
import json
import os
from pathlib import Path
import struct
import subprocess
import time


TH32CS_SNAPMODULE = 0x00000008
TH32CS_SNAPMODULE32 = 0x00000010
PROCESS_QUERY_INFORMATION = 0x0400
PROCESS_VM_READ = 0x0010
INVALID_HANDLE_VALUE = ctypes.c_void_p(-1).value


class MODULEENTRY32W(ctypes.Structure):
    _fields_ = [
        ("dwSize", wintypes.DWORD), ("th32ModuleID", wintypes.DWORD),
        ("th32ProcessID", wintypes.DWORD), ("GlblcntUsage", wintypes.DWORD),
        ("ProccntUsage", wintypes.DWORD), ("modBaseAddr", ctypes.POINTER(ctypes.c_ubyte)),
        ("modBaseSize", wintypes.DWORD), ("hModule", wintypes.HMODULE),
        ("szModule", wintypes.WCHAR * 256), ("szExePath", wintypes.WCHAR * 260),
    ]


kernel32 = ctypes.WinDLL("kernel32", use_last_error=True)
kernel32.CreateToolhelp32Snapshot.argtypes = (wintypes.DWORD, wintypes.DWORD)
kernel32.CreateToolhelp32Snapshot.restype = wintypes.HANDLE
kernel32.Module32FirstW.argtypes = (wintypes.HANDLE, ctypes.POINTER(MODULEENTRY32W))
kernel32.Module32NextW.argtypes = (wintypes.HANDLE, ctypes.POINTER(MODULEENTRY32W))
kernel32.OpenProcess.argtypes = (wintypes.DWORD, wintypes.BOOL, wintypes.DWORD)
kernel32.OpenProcess.restype = wintypes.HANDLE
kernel32.ReadProcessMemory.argtypes = (
    wintypes.HANDLE, wintypes.LPCVOID, wintypes.LPVOID, ctypes.c_size_t,
    ctypes.POINTER(ctypes.c_size_t),
)
kernel32.CloseHandle.argtypes = (wintypes.HANDLE,)


def modules(pid):
    snapshot = kernel32.CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid)
    if snapshot == INVALID_HANDLE_VALUE:
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        entry = MODULEENTRY32W()
        entry.dwSize = ctypes.sizeof(entry)
        if not kernel32.Module32FirstW(snapshot, ctypes.byref(entry)):
            raise ctypes.WinError(ctypes.get_last_error())
        while True:
            yield {
                "name": entry.szModule,
                "path": entry.szExePath,
                "base": ctypes.cast(entry.modBaseAddr, ctypes.c_void_p).value,
                "size": entry.modBaseSize,
            }
            if not kernel32.Module32NextW(snapshot, ctypes.byref(entry)):
                break
    finally:
        kernel32.CloseHandle(snapshot)


def read_image(pid, module):
    process = kernel32.OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, False, pid)
    if not process:
        raise ctypes.WinError(ctypes.get_last_error())
    image = bytearray(module["size"])
    failed_pages = []
    try:
        for offset in range(0, module["size"], 0x1000):
            size = min(0x1000, module["size"] - offset)
            buffer = (ctypes.c_ubyte * size)()
            read = ctypes.c_size_t()
            ok = kernel32.ReadProcessMemory(
                process, module["base"] + offset, buffer, size, ctypes.byref(read)
            )
            if ok and read.value:
                image[offset:offset + read.value] = bytes(buffer[:read.value])
            if not ok or read.value != size:
                failed_pages.append(offset)
    finally:
        kernel32.CloseHandle(process)
    return bytes(image), failed_pages


def align(value, boundary):
    return (value + boundary - 1) & ~(boundary - 1)


def pe_optional_offset(image):
    if image[:2] != b"MZ":
        raise ValueError("image has no DOS header")
    pe_offset = struct.unpack_from("<I", image, 0x3C)[0]
    if image[pe_offset:pe_offset + 4] != b"PE\0\0":
        raise ValueError("image has no PE header")
    return pe_offset + 24


def normalize_image_base(image, preferred_base):
    data = bytearray(image)
    optional = pe_optional_offset(data)
    current_base = struct.unpack_from("<I", data, optional + 28)[0]
    delta = (current_base - preferred_base) & 0xFFFFFFFF
    if not delta:
        return bytes(data), 0, current_base
    directories = optional + 96
    reloc_rva, reloc_size = struct.unpack_from("<II", data, directories + 5 * 8)
    cursor, end, adjusted = reloc_rva, reloc_rva + reloc_size, 0
    while cursor + 8 <= end and cursor + 8 <= len(data):
        page, block_size = struct.unpack_from("<II", data, cursor)
        if block_size < 8 or cursor + block_size > end:
            break
        for entry_offset in range(cursor + 8, cursor + block_size, 2):
            entry = struct.unpack_from("<H", data, entry_offset)[0]
            if entry >> 12 != 3:  # IMAGE_REL_BASED_HIGHLOW
                continue
            target = page + (entry & 0xFFF)
            if target + 4 > len(data):
                raise ValueError("relocation target lies outside mapped image")
            value = struct.unpack_from("<I", data, target)[0]
            struct.pack_into("<I", data, target, (value - delta) & 0xFFFFFFFF)
            adjusted += 1
        cursor += block_size
    struct.pack_into("<I", data, optional + 28, preferred_base)
    return bytes(data), adjusted, current_base


def rebuild_pe(image):
    optional = pe_optional_offset(image)
    coff = optional - 20
    section_count = struct.unpack_from("<H", image, coff + 2)[0]
    optional_size = struct.unpack_from("<H", image, coff + 16)[0]
    if struct.unpack_from("<H", image, optional)[0] != 0x10B:
        raise ValueError("only PE32 images are supported")
    file_alignment = struct.unpack_from("<I", image, optional + 36)[0]
    header_size = struct.unpack_from("<I", image, optional + 60)[0]
    section_table = optional + optional_size
    output = bytearray(image[:header_size])
    cursor = align(header_size, file_alignment)
    if len(output) < cursor:
        output.extend(b"\0" * (cursor - len(output)))
    rebuilt = []
    for index in range(section_count):
        entry = section_table + index * 40
        name = image[entry:entry + 8].rstrip(b"\0").decode("ascii", "replace")
        virtual_size, virtual_address = struct.unpack_from("<II", image, entry + 8)
        raw_size = align(virtual_size, file_alignment) if virtual_size else 0
        struct.pack_into("<II", output, entry + 16, raw_size, cursor if raw_size else 0)
        if raw_size:
            data = image[virtual_address:virtual_address + virtual_size]
            output.extend(data)
            output.extend(b"\0" * (raw_size - len(data)))
        rebuilt.append({
            "name": name, "virtual_address": virtual_address,
            "virtual_size": virtual_size, "raw_offset": cursor if raw_size else 0,
            "raw_size": raw_size,
        })
        cursor += raw_size
    return bytes(output), rebuilt


def merge_manifest(manifest, pid, records):
    """Keep earlier module captures when multiple runs share one output folder."""
    result = dict(manifest or {})
    result["schema"] = 1
    result["pid"] = pid
    modules = list(result.get("modules", []))
    for record in records:
        key = (record["name"].casefold(), record["path"], record["base"])
        modules = [
            item for item in modules
            if (item["name"].casefold(), item["path"], item["base"]) != key
        ]
        modules.append(record)
    result["modules"] = modules
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    target = parser.add_mutually_exclusive_group(required=True)
    target.add_argument("--pid", type=int)
    target.add_argument("--launch", type=Path)
    parser.add_argument("--module", action="append", required=True)
    parser.add_argument("--output", type=Path, default=Path("reports/unpacked-client"))
    parser.add_argument("--wait", type=float, default=15.0)
    parser.add_argument("--settle", type=float, default=0.0,
                        help="Wait after target modules load before reading their mapped pages")
    parser.add_argument("--terminate", action="store_true")
    parser.add_argument("--normalize-base", action="store_true",
                        help="Apply standard HIGHLOW relocations back to the preferred base")
    args = parser.parse_args()

    child = None
    pid = args.pid
    if args.launch:
        executable = args.launch.resolve(strict=True)
        environment = os.environ.copy()
        environment["__COMPAT_LAYER"] = "RunAsInvoker"
        child = subprocess.Popen([str(executable)], cwd=executable.parent, env=environment)
        pid = child.pid
    wanted = {name.casefold() for name in args.module}
    deadline = time.monotonic() + args.wait
    found = {}
    try:
        while time.monotonic() < deadline and set(found) != wanted:
            if child and child.poll() is not None:
                raise RuntimeError(f"client exited with code {child.returncode}")
            try:
                found = {item["name"].casefold(): item for item in modules(pid) if item["name"].casefold() in wanted}
            except OSError as exc:
                if exc.winerror not in {18, 299}:
                    raise
            if set(found) != wanted:
                time.sleep(0.25)
        missing = sorted(wanted - set(found))
        if missing:
            raise RuntimeError(f"modules did not load: {', '.join(missing)}")
        if args.settle > 0:
            time.sleep(args.settle)
            if child and child.poll() is not None:
                raise RuntimeError(f"client exited during settle interval with code {child.returncode}")
            found = {
                item["name"].casefold(): item
                for item in modules(pid)
                if item["name"].casefold() in wanted
            }
            missing = sorted(wanted - set(found))
            if missing:
                raise RuntimeError(f"modules unloaded during settle interval: {', '.join(missing)}")
        args.output.mkdir(parents=True, exist_ok=True)
        manifest_path = args.output / "manifest.json"
        previous_manifest = json.loads(manifest_path.read_text(encoding="utf-8")) \
            if manifest_path.exists() else None
        new_records = []
        for key in sorted(wanted):
            module = found[key]
            image, failed = read_image(pid, module)
            original = Path(module["path"]).read_bytes()
            original_optional = pe_optional_offset(original)
            preferred_base = struct.unpack_from("<I", original, original_optional + 28)[0]
            loaded_optional = pe_optional_offset(image)
            loaded_base = struct.unpack_from("<I", image, loaded_optional + 28)[0]
            relocation_count = 0
            analysis_image = image
            if args.normalize_base:
                analysis_image, relocation_count, loaded_base = normalize_image_base(image, preferred_base)
            rebuilt, sections = rebuild_pe(analysis_image)
            stem = Path(module["name"]).stem
            memory_path = args.output / f"{stem}.mapped.bin"
            rebuilt_path = args.output / f"{stem}.unpacked{Path(module['name']).suffix}"
            memory_path.write_bytes(image)
            rebuilt_path.write_bytes(rebuilt)
            new_records.append({
                **module, "failed_page_offsets": failed, "sections": sections,
                "capture_pid": pid,
                "original_sha256": hashlib.sha256(original).hexdigest(),
                "loaded_image_base": loaded_base, "preferred_image_base": preferred_base,
                "analysis_image_base": preferred_base if args.normalize_base else loaded_base,
                "normalized_highlow_relocations": relocation_count,
                "mapped_image": str(memory_path), "rebuilt_pe": str(rebuilt_path),
            })
        manifest = merge_manifest(previous_manifest, pid, new_records)
        manifest_path.write_text(json.dumps(manifest, indent=2), encoding="utf-8")
        print(json.dumps({"pid": pid, "dumped": [item["name"] for item in manifest["modules"]]}))
    finally:
        if child and args.terminate and child.poll() is None:
            child.terminate()
            child.wait(timeout=10)


if __name__ == "__main__":
    main()
