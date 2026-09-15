"""Stage the paired window default dispatchers for local byte verification."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    for component, address in [('game-server', '004f1872'), ('save-server', '004cf7a2')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+61]
        data = operand_target(code, int(address, 16), {'offset': 10, 'kind': 'absolute'})
        target = operand_target(code, int(address, 16), {'offset': 15})
        source = f'src/{component}/matches/RecoveredWindowDefault.cpp'
        (ROOT / source).write_text('''// Original x86 ABI: ECX holds the window; EAX returns the virtual handler result.
// Retrieve thread state, then dispatch its current message through vtable slot 0xa8.
extern "C" char Data%08X;
extern "C" void Target%08X();
extern "C" __declspec(naked) long Recovered%s()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov ecx, offset Data%08X
    __asm call Target%08X
    __asm mov dword ptr [ebp-4], eax
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+40h]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+3ch]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+38h]
    __asm push edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-8]
    __asm call dword ptr [edx+0a8h]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
''' % (data, target, address.upper(), data, target), encoding='ascii')
        records.append(dict(component=component, address=address, size=61, source=source,
                            symbol='_Recovered'+address.upper(), flags=['/Od', '/GZ', '/GX-'],
                            relocations=[dict(offset=10, symbol=f'_Data{data:08X}', kind='absolute'),
                                         dict(offset=15, symbol=f'_Target{target:08X}')]))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
