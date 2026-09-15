"""Stage the reviewed lazy thread-state lookup in the two server builds.

This preserves x86 instructions and ABI; it is not portable C++ reconstruction.
Only destination operands are read from the private images during staging.
"""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
OPERANDS = [
    (0x1a, 'absolute', 'Slots'), (0x22, 'absolute', 'Storage'),
    (0x29, 'relative', 'Allocate'), (0x3a, 'relative', 'Construct'),
    (0x4f, 'absolute', 'Slots'), (0x55, 'absolute', 'Slots'),
    (0x62, 'absolute', 'File'), (0x67, 'relative', 'Assert'),
    (0x78, 'absolute', 'Slots'), (0x7d, 'relative', 'AllocateSlot'),
    (0x94, 'absolute', 'File'), (0x99, 'relative', 'Assert'),
    (0xb0, 'absolute', 'Slots'), (0xb5, 'relative', 'Get'),
    (0xd4, 'absolute', 'Slots'), (0xd9, 'relative', 'Set'),
    (0xe5, 'absolute', 'Slots'), (0xea, 'relative', 'Get'),
    (0xf9, 'absolute', 'File'), (0xfe, 'relative', 'Assert')]

BODY = '''
push ebp
mov ebp, esp
sub esp, 10h
push ebx
push esi
push edi
mov dword ptr [ebp-0ch], ecx
mov eax, dword ptr [ebp-0ch]
cmp dword ptr [eax], 0
jne slot_ready
cmp dword ptr [{Slots}], 0
jne manager_ready
push offset {Storage}
push 34h
call {Allocate}
mov dword ptr [ebp-8], eax
cmp dword ptr [ebp-8], 0
je allocation_failed
mov ecx, dword ptr [ebp-8]
call {Construct}
mov dword ptr [ebp-10h], eax
jmp publish_manager
allocation_failed:
mov dword ptr [ebp-10h], 0
publish_manager:
mov ecx, dword ptr [ebp-10h]
mov dword ptr [{Slots}], ecx
check_manager:
cmp dword ptr [{Slots}], 0
jne manager_asserted
push 18ah
push offset {File}
call {Assert}
test eax, eax
je manager_asserted
int 3
manager_asserted:
xor edx, edx
test edx, edx
jne check_manager
manager_ready:
mov ecx, dword ptr [{Slots}]
call {AllocateSlot}
mov ecx, dword ptr [ebp-0ch]
mov dword ptr [ecx], eax
check_slot:
mov edx, dword ptr [ebp-0ch]
cmp dword ptr [edx], 0
jne slot_asserted
push 18dh
push offset {File}
call {Assert}
test eax, eax
je slot_asserted
int 3
slot_asserted:
xor eax, eax
test eax, eax
jne check_slot
slot_ready:
mov ecx, dword ptr [ebp-0ch]
mov edx, dword ptr [ecx]
push edx
mov ecx, dword ptr [{Slots}]
call {Get}
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
jne done
call dword ptr [ebp+8]
mov dword ptr [ebp-4], eax
mov eax, dword ptr [ebp-4]
push eax
mov ecx, dword ptr [ebp-0ch]
mov edx, dword ptr [ecx]
push edx
mov ecx, dword ptr [{Slots}]
call {Set}
check_value:
mov eax, dword ptr [ebp-0ch]
mov ecx, dword ptr [eax]
push ecx
mov ecx, dword ptr [{Slots}]
call {Get}
cmp eax, dword ptr [ebp-4]
je value_asserted
push 198h
push offset {File}
call {Assert}
test eax, eax
je value_asserted
int 3
value_asserted:
xor edx, edx
test edx, edx
jne check_value
done:
mov eax, dword ptr [ebp-4]
pop edi
pop esi
pop ebx
mov esp, ebp
pop ebp
ret 4
'''


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    for component, address in [('game-server', '005489bc'), ('save-server', '00543a5c')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+281]
        names, declarations, relocations = {}, {}, []
        for offset, kind, role in OPERANDS:
            target = operand_target(code, int(address, 16), dict(offset=offset, kind=kind))
            name = f'{role}{target:08X}'
            if role in names and names[role] != name:
                raise ValueError(f'Inconsistent {role} target in {component}')
            names[role] = name
            declarations[name] = f'extern "C" void {name}();' if kind == 'relative' else f'extern "C" char {name};'
            relocations.append(dict(offset=offset, kind=kind, symbol='_'+name))
        source = f'src/{component}/matches/RecoveredThreadStateLookup.cpp'
        text = '// Lazy thread-slot allocation and per-thread factory initialization.\n'
        text += '// x86 ABI: ECX is the wrapper; [ESP+4] is the factory; RET 4 cleans it.\n'
        text += '// Preserves original debug assertions; dependency implementations remain external.\n'
        text += '\n'.join(declarations.values()) + '\n'
        text += f'extern "C" __declspec(naked) void *Recovered{address.upper()}(void *)\n{{\n'
        text += '\n'.join('    __asm ' + line for line in BODY.format(**names).strip().splitlines())
        text += '\n}\n'
        (ROOT / source).write_text(text, encoding='ascii')
        records.append(dict(component=component, address=address, size=281, source=source,
                            symbol='_Recovered'+address.upper(), flags=['/Od', '/GZ', '/GX-'],
                            relocations=relocations))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
