"""Stage small unresolved registration targets from the reconstructed link map."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (
    ("game-server", "0054a78a", "ole", "?Target0054A780@@YAXXZ", 15,
     "OleData0054A78A", "Construct0054A799"),
    ("save-server", "00545aaa", "ole", "?Target00545AA0@@YAXXZ", 15,
     "OleData00545AAA", "Construct00545AB9"),
    ("login-server", "0041ea02", "exit", "_Register0041EA02", 18,
     None, "RegisterTarget0041E984"),
)


def render(address, kind, public_symbol, state_symbol, target_symbol):
    if kind == "ole":
        public_name = public_symbol.split("@@", 1)[0][1:]
        return f'''// Exact recovered OLE global registration target.
extern "C" unsigned char {state_symbol};
extern "C" void {target_symbol}();
void {public_name}();
__declspec(naked) void {public_name}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset {state_symbol}
    __asm call {target_symbol}
    __asm pop ebp
    __asm ret
}}
'''
    return f'''// Exact recovered CRT exit-registration result adapter.
extern "C" void {target_symbol}();
extern "C" __declspec(naked) void Register0041EA02()
{{
    __asm push dword ptr [esp+4]
    __asm call {target_symbol}
    __asm neg eax
    __asm sbb eax, eax
    __asm pop ecx
    __asm neg eax
    __asm dec eax
    __asm ret
}}
'''


def main():
    path = ROOT / "config/NF2_2062/verifications.json"
    document = json.loads(path.read_text(encoding="utf-8"))
    existing = {(item["component"], item["address"]) for item in document["matches"]}
    records = []
    for component, address, kind, symbol, size, state_symbol, target_symbol in TARGETS:
        if (component, address) in existing:
            continue
        source = f"src/{component}/matches/RecoveredRegistrationTarget{address.upper()}.cpp"
        (ROOT / source).write_text(
            render(address, kind, symbol, state_symbol, target_symbol), encoding="ascii")
        relocations = [{"offset": 9 if kind == "ole" else 5, "symbol": f"_{target_symbol}"}]
        if kind == "ole":
            relocations.insert(0, {"offset": 4, "symbol": f"_{state_symbol}", "kind": "absolute"})
        records.append({"component": component, "address": address, "size": size,
                        "source": source, "symbol": symbol, "flags": ["/Od", "/GX-"],
                        "relocations": relocations})
    if records:
        append_records(path, records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")


if __name__ == "__main__":
    main()
