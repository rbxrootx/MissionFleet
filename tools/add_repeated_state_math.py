"""Stage repeated state, math, and debug-object leaf functions."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = []
def add(c, a, k, s): TARGETS.append((c, a, k, s))
def pair(g, s, k, z): add("game-server", g, k, z); add("save-server", s, k, z)

pair("0052873f", "0051b12f", "rect_copy", 42)
pair("004bd280", "00479ed0", "copy_sign", 42)
add("save-server", "004056e0", "debug_plus4", 42)
add("save-server", "00412630", "debug_plus4", 42)
pair("0052a625", "00511d44", "help_hit", 43)
pair("00499800", "00455e20", "init_zero", 43)
pair("00529eb0", "0051c880", "init_check", 43)
add("save-server", "00405b10", "debug_byte", 43)
add("save-server", "00413890", "debug_byte", 43)
pair("004bd2b0", "00479f00", "change_sign", 44)
add("save-server", "00420a80", "debug_deref_plus4", 44)
add("save-server", "00420d60", "debug_deref_plus4", 44)
pair("004fe720", "004dd820", "dir_sep", 45)
pair("0053df09", "0052d969", "map_flag", 45)

def body(kind):
    local=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], ecx")
    debug=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0cccccccch","mov dword ptr [ebp-4], ecx")
    fill=("push ebp","mov ebp, esp","sub esp, 44h","push ebx","push esi","push edi","push ecx",
          "lea edi, dword ptr [ebp-44h]","mov ecx, 11h","mov eax, 0cccccccch","rep stosd","pop ecx",
          "mov dword ptr [ebp-4], ecx")
    restore=("pop edi","pop esi","pop ebx","mov esp, ebp","pop ebp","ret")
    end=("mov esp, ebp","pop ebp","ret")
    if kind=="rect_copy":
        return local+("mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp+28]","mov dword ptr [eax], ecx",
          "mov edx, dword ptr [ebp+32]","mov dword ptr [eax+4], edx","mov ecx, dword ptr [ebp+36]",
          "mov dword ptr [eax+8], ecx","mov edx, dword ptr [ebp+40]","mov dword ptr [eax+12], edx",
          "mov eax, dword ptr [ebp+8]")+end[:-1]+("ret 36",)
    if kind=="copy_sign":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-8], eax",
          "mov ecx, dword ptr [ebp+12]","and ecx, 7fffffffh","mov edx, dword ptr [ebp+20]","and edx, 80000000h",
          "or ecx, edx","mov dword ptr [ebp-4], ecx","fld qword ptr [ebp-8]")+end
    if kind=="debug_plus4": return fill+("mov eax, dword ptr [ebp-4]","add eax, 4")+restore
    if kind=="help_hit":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+140], 0","je empty",
          "mov ecx, dword ptr [ebp-4]","mov eax, dword ptr [ecx+140]","add eax, 20000h","jmp done",
          "empty:","xor eax, eax","done:")+end[:-1]+("ret 8",)
    if kind=="init_zero":
        return local+("mov eax, dword ptr [ebp-4]","mov dword ptr [eax], 0","mov ecx, dword ptr [ebp-4]",
          "mov dword ptr [ecx+4], 0","mov edx, dword ptr [ebp-4]","mov dword ptr [edx+8], 0",
          "mov eax, dword ptr [ebp-4]")+end
    if kind=="init_check":
        return local+("mov eax, dword ptr [ebp-4]","mov dword ptr [eax], 0","mov ecx, dword ptr [ebp-4]",
          "mov dword ptr [ecx+4], 1","mov edx, dword ptr [ebp-4]","mov dword ptr [edx+8], 0",
          "mov eax, dword ptr [ebp-4]")+end
    if kind=="debug_byte": return fill+("mov eax, dword ptr [ebp-4]","mov byte ptr [eax+16], 0")+restore
    if kind=="change_sign":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-8], eax",
          "mov ecx, dword ptr [ebp+12]","and ecx, 7fffffffh","mov edx, dword ptr [ebp+12]","not edx",
          "and edx, 80000000h","or ecx, edx","mov dword ptr [ebp-4], ecx","fld qword ptr [ebp-8]")+end
    if kind=="debug_deref_plus4": return fill+("mov eax, dword ptr [ebp-4]","mov eax, dword ptr [eax]","add eax, 4")+restore
    if kind=="dir_sep":
        return ("push ebp","mov ebp, esp","push ecx","movsx eax, byte ptr [ebp+8]","cmp eax, 92","je yes",
          "movsx ecx, byte ptr [ebp+8]","cmp ecx, 47","je yes","mov dword ptr [ebp-4], 0","jmp done",
          "yes:","mov dword ptr [ebp-4], 1","done:","mov eax, dword ptr [ebp-4]")+end
    if kind=="map_flag":
        return local+("mov eax, dword ptr [ebp+8]","neg eax","sbb eax, eax","and eax, 4","or al, 8",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ecx+184]","or edx, eax",
          "mov eax, dword ptr [ebp-4]","mov dword ptr [eax+184], edx")+end[:-1]+("ret 4",)
    raise ValueError(kind)

def render(a,k):
    lines="\n".join(f"    __asm {x}" for x in body(k))
    return f'// Exact recovered repeated state/math helper.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'

def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8"))
    old={(m["component"],m["address"]) for m in d["matches"]}; records=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredStateMath{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        records.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if records: append_records(p,records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")
if __name__=="__main__": main()
