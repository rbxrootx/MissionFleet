"""Stage C++ assertion dispatchers; independently verify before crediting."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    for component, address in [('game-server', '00534a00'), ('save-server', '00528d40')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+77]
        target = operand_target(code, int(address, 16), {'offset': 42})
        source = f'src/{component}/matches/RecoveredAssertDispatch.cpp'
        (ROOT / source).write_text(f'''// Preserve a pending WM_QUIT while the CRT assertion reporter runs.
// Explicit 32-bit MSG layout avoids dependence on host SDK headers.
struct RecoveredMessage {{
    unsigned window, message, wParam;
    long lParam;
    unsigned time;
    long x, y;
}};
extern "C" __declspec(dllimport) int __stdcall PeekMessageA(
    RecoveredMessage *, void *, unsigned, unsigned, unsigned);
extern "C" __declspec(dllimport) void __stdcall PostQuitMessage(int);
extern "C" int __cdecl Report{target:08X}(int, const char *, int, const char *, const char *, ...);
extern "C" int __stdcall Recovered{address.upper()}(const char *file, int line)
{{
    int result;
    int hadQuit;
    RecoveredMessage message;
    hadQuit = PeekMessageA(&message, 0, 0x12, 0x12, 1);
    result = Report{target:08X}(2, file, line, 0, 0);
    if (hadQuit != 0)
        PostQuitMessage(message.wParam);
    return result;
}}
''', encoding='ascii')
        records.append(dict(component=component, address=address, size=77, source=source,
                            symbol='_Recovered'+address.upper()+'@8', flags=['/Od', '/GX-'],
                            relocations=[dict(offset=20, kind='absolute', symbol='__imp__PeekMessageA@20'),
                                         dict(offset=42, symbol=f'_Report{target:08X}'),
                                         dict(offset=64, kind='absolute', symbol='__imp__PostQuitMessage@4')]))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
