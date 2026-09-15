"""Stage reviewed x86 owning-wrapper cleanup for independent byte verification."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    for component, address in [('game-server', '00548bf8'), ('save-server', '00543c98')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        source = f'src/{component}/matches/RecoveredOwnedObjectCleanup.cpp'
        (ROOT / source).write_text(f'''// Original x86 ABI: ECX is an owning wrapper whose first member is a pointer.
// Call the pointee's first virtual slot with deletion flag 1 if it is non-null.
// Preserve both original null checks; the stored pointer is not cleared.
extern "C" __declspec(naked) void Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 14h
    __asm mov dword ptr [ebp-0ch], ecx
    __asm mov eax, dword ptr [ebp-0ch]
    __asm cmp dword ptr [eax], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp-8], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je null_object
    __asm push 1
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ebp-10h], ecx
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-10h]
    __asm call dword ptr [eax]
    __asm mov dword ptr [ebp-14h], eax
    __asm jmp done
    __asm null_object:
    __asm mov dword ptr [ebp-14h], 0
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}}
''', encoding='ascii')
        records.append(dict(component=component, address=address, size=71, source=source,
                            symbol='_Recovered'+address.upper(), flags=['/Od', '/GX-'], relocations=[]))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
