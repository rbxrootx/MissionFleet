"""Stage the embedded list initialization chain; verify before progress credit."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]
WRAPPER = '''
push ebp
mov ebp, esp
push ecx
mov dword ptr [ebp-4], ecx
mov eax, dword ptr [ebp+8]
push eax
mov ecx, dword ptr [ebp-4]
call {Target}
mov eax, dword ptr [ebp-4]
mov esp, ebp
pop ebp
ret 4
'''
INIT = '''
push ebp
mov ebp, esp
push ecx
push ebx
push esi
push edi
mov dword ptr [ebp-4], ecx
check_empty:
mov eax, dword ptr [ebp-4]
cmp dword ptr [eax], 0
je assertion_done
push 3ch
push offset {File}
call {Assert}
test eax, eax
je assertion_done
int 3
assertion_done:
xor ecx, ecx
test ecx, ecx
jne check_empty
mov edx, dword ptr [ebp-4]
mov eax, dword ptr [ebp+8]
mov dword ptr [edx+4], eax
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
    for component, addresses in [
        ('game-server', ['0048ef20', '00548e70', '0048ef50']),
        ('save-server', ['0044b5b0', '00543f10', '0044b5e0'])]:
        image = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()
        for index, address in enumerate(addresses):
            if any(m['component'] == component and m['address'] == address for m in document['matches']):
                continue
            source = f'src/{component}/matches/RecoveredList{address.upper()}.cpp'
            size = [34, 28, 59][index]
            start = int(address, 16) - int(document['image_base'], 16)
            code = image[start:start+size]
            relocations = []
            if index == 0:
                name = 'RecoveredList'+address.upper()
                text = f'''// Embedded singly linked list: null head and caller-supplied link offset.
class {name} {{
    void *head;
    int linkOffset;
public:
    {name}(int offset);
}};
{name}::{name}(int offset)
{{
    head = 0;
    linkOffset = offset;
}}
'''
                symbol = f'??0{name}@@QAE@H@Z'
            else:
                specs = [(15, 'relative', 'Target')] if index == 1 else [
                    (21, 'absolute', 'File'), (26, 'relative', 'Assert')]
                names, declarations = {}, []
                for offset, kind, role in specs:
                    target = operand_target(code, int(address, 16), dict(offset=offset, kind=kind))
                    name = f'{role}{target:08X}'
                    names[role] = name
                    declarations.append(f'extern "C" void {name}();' if kind == 'relative'
                                        else f'extern "C" char {name};')
                    relocations.append(dict(offset=offset, kind=kind, symbol='_'+name))
                text = '// Original x86 member ABI: ECX is the list; RET 4 cleans the offset argument.\n'
                text += '\n'.join(declarations) + '\n'
                text += f'extern "C" __declspec(naked) void *Recovered{address.upper()}(int)\n{{\n'
                body = WRAPPER if index == 1 else INIT
                text += '\n'.join('    __asm '+line for line in body.format(**names).strip().splitlines()) + '\n}\n'
                symbol = '_Recovered'+address.upper()
            (ROOT / source).write_text(text, encoding='ascii')
            records.append(dict(component=component, address=address, size=size, source=source,
                                symbol=symbol, flags=['/Od', '/GX-'], relocations=relocations))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
