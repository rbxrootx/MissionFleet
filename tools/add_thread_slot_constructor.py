"""Stage the reviewed x86 slot-manager constructor without crediting matches."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
BODY = '''
push ebp
mov ebp, esp
push ecx
mov dword ptr [ebp-4], ecx
push 0
mov ecx, dword ptr [ebp-4]
add ecx, 14h
call {ListConstruct}
push 4
mov ecx, dword ptr [ebp-4]
add ecx, 14h
call {ListInit}
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+4], 0
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx+8], 1
mov edx, dword ptr [ebp-4]
mov dword ptr [edx+0ch], 0
mov eax, dword ptr [ebp-4]
mov dword ptr [eax+10h], 0
call dword ptr [{TlsAlloc}]
mov ecx, dword ptr [ebp-4]
mov dword ptr [ecx], eax
mov edx, dword ptr [ebp-4]
cmp dword ptr [edx], -1
jne initialize_lock
call {AllocationFailure}
initialize_lock:
mov eax, dword ptr [ebp-4]
add eax, 1ch
push eax
call dword ptr [{InitializeCriticalSection}]
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret
'''


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    operands = [(0x10, 'relative', 'ListConstruct'), (0x1d, 'relative', 'ListInit'),
                (0x4b, 'absolute', 'TlsAlloc'), (0x5d, 'relative', 'AllocationFailure'),
                (0x6a, 'absolute', 'InitializeCriticalSection')]
    for component, address in [('game-server', '005480ac'), ('save-server', '0054314c')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+117]
        names, declarations, relocations = {}, [], []
        for offset, kind, role in operands:
            target = operand_target(code, int(address, 16), dict(offset=offset, kind=kind))
            name = f'{role}{target:08X}'
            names[role] = name
            declarations.append(f'extern "C" void {name}();' if kind == 'relative'
                                else f'extern "C" void *{name}; // Win32 import address slot.')
            relocations.append(dict(offset=offset, kind=kind, symbol='_'+name))
        source = f'src/{component}/matches/RecoveredThreadSlotConstructor.cpp'
        text = '// x86 ABI: ECX supplies storage; EAX returns the initialized manager.\n'
        text += '// Initialize the embedded list, slot fields, TLS index, then critical section.\n'
        text += '// Preserve the original TLS-allocation failure call and initialization order.\n'
        text += '\n'.join(declarations) + '\n'
        text += f'extern "C" __declspec(naked) void *Recovered{address.upper()}()\n{{\n'
        text += '\n'.join('    __asm ' + line for line in BODY.format(**names).strip().splitlines()) + '\n}\n'
        (ROOT / source).write_text(text, encoding='ascii')
        records.append(dict(component=component, address=address, size=117, source=source,
                            symbol='_Recovered'+address.upper(), flags=['/Od', '/GZ', '/GX-'],
                            relocations=relocations))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
