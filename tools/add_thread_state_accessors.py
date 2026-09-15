"""Stage paired thread-state accessors; credit only after independent verification."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    for component, address in [('game-server', '00542440'), ('save-server', '0053d630')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+70]
        relocations = []
        names = []
        for offset, kind, prefix in [(13, 'absolute', 'Factory'), (21, 'relative', 'Target'),
                                     (40, 'absolute', 'Data'), (45, 'relative', 'Assert')]:
            target = operand_target(code, int(address, 16), dict(offset=offset, kind=kind))
            name = f'{prefix}{target:08X}'
            names.append(name)
            relocations.append(dict(offset=offset, kind=kind, symbol='_'+name))
        factory, target, data, assertion = names
        source = f'src/{component}/matches/RecoveredThreadStateAccessor.cpp'
        (ROOT / source).write_text(f'''// ECX supplies the thread-local storage wrapper. EAX returns its state pointer.
// Preserve the original debug assertion and breakpoint path, including its loop.
extern "C" void {factory}();
extern "C" void {target}();
extern "C" char {data};
extern "C" void {assertion}();
extern "C" __declspec(naked) void *Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm push offset {factory}
    __asm mov ecx, dword ptr [ebp-8]
    __asm call {target}
    __asm mov dword ptr [ebp-4], eax
    __asm check_state:
    __asm cmp dword ptr [ebp-4], 0
    __asm jne assertion_done
    __asm push 0aeh
    __asm push offset {data}
    __asm call {assertion}
    __asm test eax, eax
    __asm je assertion_done
    __asm int 3
    __asm assertion_done:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne check_state
    __asm mov eax, dword ptr [ebp-4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}}
''', encoding='ascii')
        records.append(dict(component=component, address=address, size=70, source=source,
                            symbol='_Recovered'+address.upper(), flags=['/Od', '/GZ', '/GX-'],
                            relocations=relocations))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
