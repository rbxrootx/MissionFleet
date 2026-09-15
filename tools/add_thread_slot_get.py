"""Stage reviewed x86 thread-slot retrieval; verification must precede credit."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
BODY = '''
push ebp
mov ebp, esp
sub esp, 8
push ebx
push esi
push edi
mov dword ptr [ebp-8], ecx
check_range:
cmp dword ptr [ebp+8], 0
je assert_range
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [ebp+8]
cmp ecx, dword ptr [eax+0ch]
jl range_done
assert_range:
push 0feh
push offset {File}
call {Assert}
test eax, eax
je range_done
int 3
range_done:
xor edx, edx
test edx, edx
jne check_range
check_table:
mov eax, dword ptr [ebp-8]
cmp dword ptr [eax+10h], 0
jne table_done
push 0ffh
push offset {File}
call {Assert}
test eax, eax
je table_done
int 3
table_done:
xor ecx, ecx
test ecx, ecx
jne check_table
check_allocated:
mov edx, dword ptr [ebp-8]
mov eax, dword ptr [edx+10h]
mov ecx, dword ptr [ebp+8]
mov edx, dword ptr [eax+ecx*8]
and edx, 1
test edx, edx
jne allocated_done
push 100h
push offset {File}
call {Assert}
test eax, eax
je allocated_done
int 3
allocated_done:
xor eax, eax
test eax, eax
jne check_allocated
check_tls:
mov ecx, dword ptr [ebp-8]
cmp dword ptr [ecx], -1
jne tls_done
push 101h
push offset {File}
call {Assert}
test eax, eax
je tls_done
int 3
tls_done:
xor edx, edx
test edx, edx
jne check_tls
mov eax, dword ptr [ebp-8]
mov ecx, dword ptr [eax]
push ecx
call dword ptr [{TlsGetValue}]
mov dword ptr [ebp-4], eax
cmp dword ptr [ebp-4], 0
je missing
mov edx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+8]
cmp eax, dword ptr [edx+8]
jl found
missing:
xor eax, eax
jmp done
found:
mov ecx, dword ptr [ebp-4]
mov edx, dword ptr [ecx+0ch]
mov eax, dword ptr [ebp+8]
mov eax, dword ptr [edx+eax*4]
done:
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
    operands = [(offset, 'absolute', 'File') for offset in (0x23, 0x46, 0x73, 0x95)]
    operands += [(offset, 'relative', 'Assert') for offset in (0x28, 0x4b, 0x78, 0x9a)]
    operands += [(0xb1, 'absolute', 'TlsGetValue')]
    for component, address in [('game-server', '00548d50'), ('save-server', '00543df0')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+226]
        names, relocations = {}, []
        for offset, kind, role in sorted(operands):
            target = operand_target(code, int(address, 16), dict(offset=offset, kind=kind))
            name = f'{role}{target:08X}'
            if role in names and names[role] != name:
                raise ValueError(f'Inconsistent {role} destination')
            names[role] = name
            relocations.append(dict(offset=offset, kind=kind, symbol='_'+name))
        source = f'src/{component}/matches/RecoveredThreadSlotGet.cpp'
        text = '// x86 ABI: ECX is the slot manager; stack argument is the signed slot index.\n'
        text += '// Validate allocation, fetch Win32 TLS, return zero for an absent per-thread entry.\n'
        text += '// Preserve debug assertions and signed comparisons exactly.\n'
        text += f'extern "C" char {names["File"]};\nextern "C" void {names["Assert"]}();\n'
        text += f'extern "C" void *{names["TlsGetValue"]}; // Import address slot, not function code.\n'
        text += f'extern "C" __declspec(naked) void *Recovered{address.upper()}(int)\n{{\n'
        text += '\n'.join('    __asm ' + line for line in BODY.format(**names).strip().splitlines()) + '\n}\n'
        (ROOT / source).write_text(text, encoding='ascii')
        records.append(dict(component=component, address=address, size=226, source=source,
                            symbol='_Recovered'+address.upper(), flags=['/Od', '/GZ', '/GX-'],
                            relocations=relocations))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
