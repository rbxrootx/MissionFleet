"""Build a PE image from the compiled source objects in build/client-matches.

The catalog already records every function's address, size, symbol, and source.
This tool extracts each compiled function from its object file, places the bytes
at the recorded RVA in the template image, and writes a new PE.  The result is a
source-derived image: the function bodies come from the compiled sources, while
the template supplies headers, data, imports, resources, and VM sections.
"""
import argparse
import hashlib
import json
import os
import shutil
import struct
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
OBJECTS = ROOT / "build/client-matches"
REBUILD = ROOT / "build/rebuild/objects"
CLANG_CL = shutil.which("clang-cl")
CL_MSVC6 = ROOT / ".analysis-deps/msvc6.5/Bin/CL.EXE"

PROFILES = {
    "main": {
        "catalog": ROOT / "config/NF2_2026/client-verifications.json",
        "mapped": ROOT / "reports/unpacked-current-main/Main.mapped.bin",
        "template": ROOT / "reports/unpacked-current-main/Main.unpacked.dll",
        "output": ROOT / "build/rebuild/Main.rebuilt.dll",
        "base": 0x58730000,
        "overrides": ROOT / "src/client-current/Main/overrides",
    },
    "core": {
        "catalog": ROOT / "config/NF2_2026/core-verifications.json",
        "mapped": ROOT / "reports/unpacked-client/Core.mapped.bin",
        "template": ROOT / "reports/unpacked-client/Core.unpacked.dll",
        "output": ROOT / "build/rebuild/Core.rebuilt.dll",
        "base": 0x58480000,
        "overrides": ROOT / "src/client-current/Core/overrides",
    },
}


def coff_text(path):
    data = path.read_bytes()
    if len(data) < 20:
        raise ValueError(f"Short object: {path}")
    machine, nsections, timestamp, symptr, nsyms, optsize, chars = struct.unpack_from("<HHIIIHH", data, 0)
    sections = []
    offset = 20 + optsize
    for index in range(nsections):
        raw_name = data[offset:offset + 8]
        vsize, va, rawsize, rawptr = struct.unpack_from("<IIII", data, offset + 8)
        reloc_ptr, line_ptr, nreloc, nline = struct.unpack_from("<IIHH", data, offset + 24)
        sections.append({
            "name": raw_name.rstrip(b"\0").decode("latin1", "replace"),
            "vsize": vsize,
            "va": va,
            "rawsize": rawsize,
            "rawptr": rawptr,
            "relocptr": reloc_ptr,
            "nreloc": nreloc,
        })
        offset += 40
    string_base = symptr + 18 * nsyms
    string_size = struct.unpack_from("<I", data, string_base)[0] if string_base + 4 <= len(data) else 0
    strings = data[string_base + 4:string_base + string_size]

    def symbol_name(raw):
        if raw[:4] == b"\0\0\0\0":
            name_offset = struct.unpack_from("<I", raw, 4)[0]
            if name_offset >= 4 and name_offset - 4 < len(strings):
                end = strings.find(b"\0", name_offset - 4)
                return strings[name_offset - 4:end if end >= 0 else None].decode("latin1", "replace")
            return ""
        return raw.rstrip(b"\0").decode("latin1", "replace")

    symbols = {}
    symbol_names = []
    for index in range(nsyms):
        base = symptr + 18 * index
        raw_name = data[base:base + 8]
        value, section_number, sym_type, storage, aux = struct.unpack_from("<IhHBB", data, base + 8)
        name = symbol_name(raw_name)
        symbol_names.append(name)
        if storage == 2 and 0 < section_number <= len(sections):
            symbols[name] = (section_number - 1, value)

    relocations = {index: [] for index in range(len(sections))}
    for index, section in enumerate(sections):
        for reloc_index in range(section["nreloc"]):
            base = section["relocptr"] + 10 * reloc_index
            if base + 10 > len(data):
                break
            va, sym_index, rel_type = struct.unpack_from("<IIH", data, base)
            relocations[index].append((va, sym_index, rel_type))
    return data, sections, symbols, symbol_names, relocations


def target_address(name):
    if name.startswith("_FUN_") or name.startswith("FUN_"):
        value = name.rsplit("_", 1)[-1]
    elif name.startswith("_DAT_") or name.startswith("DAT_"):
        value = name.rsplit("_", 1)[-1]
    else:
        return None
    try:
        return int(value, 16)
    except ValueError:
        return None


def apply_record_relocations(code, current_address, relocations):
    for relocation in relocations:
        offset = int(relocation["offset"])
        if offset < 0 or offset + 4 > len(code):
            continue
        target = int(relocation["target_address"], 16)
        kind = relocation.get("kind", "relative")
        if kind == "relative":
            value = (target - (current_address + offset + 4)) & 0xFFFFFFFF
            struct.pack_into("<I", code, offset, value)
        else:
            struct.pack_into("<I", code, offset, target & 0xFFFFFFFF)
    return code


def relocate(code, section_index, symbol_value, current_address,
             relocations, symbol_names):
    for va, sym_index, rel_type in relocations.get(section_index, []):
        offset = va - symbol_value
        if offset < 0 or offset + 4 > len(code):
            continue
        if sym_index >= len(symbol_names):
            continue
        target = target_address(symbol_names[sym_index])
        if target is None:
            continue
        if rel_type == 0x14:  # IMAGE_REL_I386_REL32
            displacement = (target - (current_address + offset + 4)) & 0xFFFFFFFF
            struct.pack_into("<I", code, offset, displacement)
        elif rel_type == 0x06:  # IMAGE_REL_I386_DIR32
            struct.pack_into("<I", code, offset, target & 0xFFFFFFFF)
    return code


def extract(symbols, sections, data, symbol, size):
    if symbol not in symbols:
        raise ValueError(f"Missing symbol {symbol}")
    section_index, value = symbols[symbol]
    section = sections[section_index]
    start = section["rawptr"] + value
    end = start + size
    if value < 0 or end > section["rawptr"] + section["rawsize"]:
        raise ValueError(f"Symbol {symbol} lies outside its section")
    return bytearray(data[start:end]), section_index, value


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--component", choices=sorted(PROFILES), default="main")
    parser.add_argument("--output", type=Path)
    parser.add_argument("--workers", type=int, default=8)
    args = parser.parse_args()
    profile = PROFILES[args.component]
    catalog = json.loads(profile["catalog"].read_text(encoding="utf-8"))
    mapped = profile["mapped"].read_bytes()
    base = profile["base"]
    template = bytearray(profile["template"].read_bytes())

    # Parse the template PE to find .text.
    pe_offset = struct.unpack_from("<I", template, 0x3C)[0]
    nsections = struct.unpack_from("<H", template, pe_offset + 6)[0]
    opt_size = struct.unpack_from("<H", template, pe_offset + 20)[0]
    section_offset = pe_offset + 24 + opt_size
    text = None
    for index in range(nsections):
        offset = section_offset + 40 * index
        name = template[offset:offset + 8].rstrip(b"\0")
        vsize, va, rawsize, rawptr = struct.unpack_from("<IIII", template, offset + 8)
        if name == b".text":
            text = {"va": va, "vsize": vsize, "rawsize": rawsize, "rawptr": rawptr}
            break
    if text is None:
        raise SystemExit("Template has no .text section")
    blob = bytearray(template[text["rawptr"]:text["rawptr"] + text["rawsize"]])

    REBUILD.mkdir(parents=True, exist_ok=True)
    compiled = {}
    compile_errors = []

    def compile_match(match):
        source = ROOT / match["source"]
        address = int(match["address"], 16)
        override = profile["overrides"] / f"{address:08X}.cpp"
        if override.is_file():
            source = override
        digest = hashlib.sha1(str(source.relative_to(ROOT)).encode()).hexdigest()[:8]
        obj = REBUILD / f"{address:08X}-{digest}.obj"
        if obj.is_file() and obj.stat().st_mtime >= source.stat().st_mtime:
            return address, obj, None
        flags = list(match.get("flags", ["/O2", "/GX-", "/Zm200"]))
        if match.get("source_compiler"):
            if not CLANG_CL:
                return address, None, "clang-cl is not on PATH"
            cmd = [CLANG_CL, "--target=i686-pc-windows-msvc", "/nologo", "/c",
                   *flags, f"/Fo{obj}", str(source)]
            environment = None
        else:
            if not CL_MSVC6.is_file():
                return address, None, "MSVC6 CL.EXE is missing"
            cmd = [str(CL_MSVC6), "/nologo", "/c", *flags, f"/Fo{obj}", str(source)]
            environment = os.environ.copy()
            environment["PATH"] = str(CL_MSVC6.parent) + os.pathsep + environment.get("PATH", "")
        result = subprocess.run(cmd, cwd=ROOT, env=environment, text=True,
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        if result.returncode != 0:
            return address, None, result.stdout[-800:]
        return address, obj, None

    with ThreadPoolExecutor(max_workers=max(1, args.workers)) as pool:
        for address, obj, error in pool.map(compile_match, catalog["matches"]):
            if error:
                compile_errors.append((address, error))
            elif obj:
                compiled[address] = obj
    print(f"compiled {len(compiled)} objects; {len(compile_errors)} errors")
    for address, error in compile_errors[:5]:
        print(f"  compile error {address:08X}: {error}")

    total_functions = 0
    total_segments = 0
    total_bytes = 0
    outside_text = []
    mismatches = []
    missing = []
    cache = {}
    for match in catalog["matches"]:
        address = int(match["address"], 16)
        symbol = match["symbol"]
        object_path = compiled.get(address)
        if object_path is None:
            missing.append(match["address"])
            continue
        if object_path not in cache:
            cache[object_path] = coff_text(object_path)
        data, sections, symbols, symbol_names, relocations = cache[object_path]
        offset = address - base - text["va"]
        if "segments" in match:
            for segment in match["segments"]:
                segment_address = int(segment["address"], 16)
                segment_size = int(segment["size"])
                segment_offset = segment_address - base - text["va"]
                if segment_offset < 0 or segment_offset + segment_size > len(blob):
                    outside_text.append(segment["address"])
                    continue
                code, section_index, symbol_value = extract(
                    symbols, sections, data, segment["symbol"], segment_size)
                relocate(code, section_index, symbol_value, segment_address,
                         relocations, symbol_names)
                apply_record_relocations(code, segment_address,
                                         segment.get("relocations", []))
                blob[segment_offset:segment_offset + segment_size] = code
                target = mapped[segment_address - base:segment_address - base + segment_size]
                if bytes(code) != target:
                    mismatches.append(segment["address"])
                total_segments += 1
                total_bytes += segment_size
        else:
            size = int(match["size"])
            if offset < 0 or offset + size > len(blob):
                outside_text.append(match["address"])
                continue
            code, section_index, symbol_value = extract(symbols, sections, data, symbol, size)
            relocate(code, section_index, symbol_value, address, relocations, symbol_names)
            apply_record_relocations(code, address, match.get("relocations", []))
            blob[offset:offset + size] = code
            target = mapped[address - base:address - base + size]
            if bytes(code) != target:
                mismatches.append(match["address"])
            total_segments += 1
            total_bytes += size
        total_functions += 1

    output = args.output or profile["output"]
    output.parent.mkdir(parents=True, exist_ok=True)
    template[text["rawptr"]:text["rawptr"] + text["rawsize"]] = blob
    output.write_bytes(template)
    template_sha = hashlib.sha256(profile["template"].read_bytes()).hexdigest()
    output_sha = hashlib.sha256(template).hexdigest()
    print(f"{args.component}: {total_functions} functions, {total_segments} segments, {total_bytes} bytes")
    print(f"missing objects: {len(missing)}")
    print(f"outside .text: {len(outside_text)}")
    print(f"byte mismatches: {len(mismatches)}")
    print(f"template sha256: {template_sha}")
    print(f"output   sha256: {output_sha}")
    print(f"identical: {template_sha == output_sha}")
    report = output.with_suffix(".mismatches.txt")
    report.write_text("\n".join(mismatches) + ("\n" if mismatches else ""), encoding="ascii")
    print(f"wrote {output.relative_to(ROOT)}")
    print(f"wrote {report.relative_to(ROOT)}")
    if missing:
        print("missing addresses: " + ", ".join(missing[:20]))
    if mismatches:
        print("mismatch addresses: " + ", ".join(mismatches[:20]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
