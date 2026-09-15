"""Stage C++ intrusive-list insertion routines; verify before credit."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
from tools.audit_thunk_targets import operand_target

ROOT = Path(__file__).resolve().parents[1]


def main():
    config = ROOT / 'config/NF2_2062/verifications.json'
    document = json.loads(config.read_text())
    records = []
    for component, address in [('game-server', '00547ee0'), ('save-server', '00542f80')]:
        if any(m['component'] == component and m['address'] == address for m in document['matches']):
            continue
        start = int(address, 16) - int(document['image_base'], 16)
        code = (ROOT / f'private-inputs/decompilation/regions/{component}.bin').read_bytes()[start:start+115]
        name = 'RecoveredListPush'+address.upper()
        file = operand_target(code, int(address, 16), dict(offset=19, kind='absolute'))
        assertion = operand_target(code, int(address, 16), dict(offset=24))
        source = f'src/{component}/matches/RecoveredListPush.cpp'
        (ROOT / source).write_text(f'''// Intrusive list insertion: the link field is located by the list's offset.
// Preserve assertions and their do/while form from the original debug build.
extern "C" char File{file:08X};
extern "C" int __stdcall Assert{assertion:08X}(const char *, int);
class {name} {{
    void *head;
    int linkOffset;
public:
    void *&Next(void *node);
    void Push(void *node);
}};
void {name}::Push(void *node)
{{
    do {{
        if (node == 0 && Assert{assertion:08X}(&File{file:08X}, 0x1c))
            __asm int 3
    }} while (0);
    do {{
        if (Next(node) != 0 && Assert{assertion:08X}(&File{file:08X}, 0x1d))
            __asm int 3
    }} while (0);
    Next(node) = head;
    head = node;
}}
''', encoding='ascii')
        relocations = [
            dict(offset=19, kind='absolute', symbol=f'_File{file:08X}'),
            dict(offset=24, symbol=f'_Assert{assertion:08X}@8'),
            dict(offset=47, symbol=f'?Next@{name}@@QAEAAPAXPAX@Z'),
            dict(offset=59, kind='absolute', symbol=f'_File{file:08X}'),
            dict(offset=64, symbol=f'_Assert{assertion:08X}@8'),
            dict(offset=87, symbol=f'?Next@{name}@@QAEAAPAXPAX@Z')]
        records.append(dict(component=component, address=address, size=115, source=source,
                            symbol=f'?Push@{name}@@QAEXPAX@Z', flags=['/Od', '/GX-'],
                            relocations=relocations))
    if records:
        append_records(config, records)
    print(f'Staged {len(records)} functions; no progress credited until verification.')


if __name__ == '__main__':
    main()
