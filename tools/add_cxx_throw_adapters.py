"""Stage the paired Visual C++ exception throw adapters."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(
 ("game-server","004b0320","AllocCall004B0320","ThrowTemplate004B0320","ThrowImport004B0320"),
 ("save-server","00465920","AllocCall00465920","ThrowTemplate00465920","ThrowImport00465920"),
)
def render(name,template,import_name):
    return f'''// Exact recovered Visual C++ exception throw adapter.
extern "C" unsigned char {template};
extern "C" void (*{import_name})();
extern "C" __declspec(naked) void {name}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 20h
    __asm push esi
    __asm push edi
    __asm mov ecx, 8
    __asm mov esi, offset {template}
    __asm lea edi, dword ptr [ebp-20h]
    __asm rep movsd
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov dword ptr [ebp-4], ecx
    __asm lea edx, dword ptr [ebp-12]
    __asm push edx
    __asm mov eax, dword ptr [ebp-16]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-28]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-32]
    __asm push edx
    __asm call dword ptr [{import_name}]
    __asm pop edi
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}}
'''
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,name,template,import_name in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredCxxThrow{a.upper()}.cpp"; (ROOT/src).write_text(render(name,template,import_name),encoding="ascii")
        out.append({"component":c,"address":a,"size":65,"source":src,"symbol":f"_{name}","flags":["/Od","/GX-"],
          "relocations":[{"offset":14,"symbol":f"_{template}","kind":"absolute"},{"offset":53,"symbol":f"_{import_name}","kind":"absolute"}]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
