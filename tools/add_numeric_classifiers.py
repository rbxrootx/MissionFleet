"""Stage repeated hexadecimal, IEEE, and runtime status classifiers."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def pair(g,s,k,z): TARGETS.extend((("game-server",g,k,z),("save-server",s,k,z)))
pair("004c42e0","0047f210","parse_hex",118)
pair("004bcfc0","00479c10","classify_ieee",124)
pair("004bed40","0047c600","map_status",167)

def body(k):
    end=("mov esp, ebp","pop ebp","ret")
    if k=="parse_hex":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-4], 0","next:",
          "mov eax, dword ptr [ebp+8]","mov cl, byte ptr [eax]","mov byte ptr [ebp-8], cl",
          "movsx edx, byte ptr [ebp-8]","mov eax, dword ptr [ebp+8]","add eax, 1","mov dword ptr [ebp+8], eax",
          "test edx, edx","je done","movsx ecx, byte ptr [ebp-8]","cmp ecx, 97","jl uppercase",
          "movsx edx, byte ptr [ebp-8]","cmp edx, 102","jg uppercase","mov al, byte ptr [ebp-8]","add al, 0d9h",
          "mov byte ptr [ebp-8], al","jmp accumulate","uppercase:","movsx ecx, byte ptr [ebp-8]","cmp ecx, 65","jl accumulate",
          "movsx edx, byte ptr [ebp-8]","cmp edx, 70","jg accumulate","mov al, byte ptr [ebp-8]","add al, 0f9h",
          "mov byte ptr [ebp-8], al","accumulate:","mov ecx, dword ptr [ebp-4]","shl ecx, 4",
          "movsx edx, byte ptr [ebp-8]","lea eax, dword ptr [ecx+edx-48]","mov dword ptr [ebp-4], eax","jmp next",
          "done:","mov eax, dword ptr [ebp-4]")+end
    if k=="classify_ieee":
        return ("push ebp","mov ebp, esp","cmp dword ptr [ebp+12], 7ff00000h","jne negative_inf",
          "cmp dword ptr [ebp+8], 0","jne negative_inf","mov eax, 1","jmp done","negative_inf:",
          "cmp dword ptr [ebp+12], 0fff00000h","jne quiet_nan","cmp dword ptr [ebp+8], 0","jne quiet_nan",
          "mov eax, 2","jmp done","quiet_nan:","mov eax, dword ptr [ebp+14]","and eax, 0ffffh","and eax, 7ff8h",
          "cmp eax, 7ff8h","jne signaling","mov eax, 3","jmp done","signaling:","mov ecx, dword ptr [ebp+14]",
          "and ecx, 0ffffh","and ecx, 7ff8h","cmp ecx, 7ff0h","jne normal","mov edx, dword ptr [ebp+12]",
          "shl edx, 13","test edx, edx","jne nan","cmp dword ptr [ebp+8], 0","je normal","nan:",
          "mov eax, 4","jmp done","normal:","xor eax, eax","done:","pop ebp","ret")
    if k=="map_status":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0",
          "mov eax, dword ptr [ebp+8]","and eax, 0ffffh","and eax, 1","test eax, eax","je flag4",
          "mov ecx, dword ptr [ebp-4]","or ecx, 10h","mov dword ptr [ebp-4], ecx","flag4:",
          "mov edx, dword ptr [ebp+8]","and edx, 0ffffh","and edx, 4","test edx, edx","je flag8",
          "mov eax, dword ptr [ebp-4]","or al, 8","mov dword ptr [ebp-4], eax","flag8:",
          "mov ecx, dword ptr [ebp+8]","and ecx, 0ffffh","and ecx, 8","test ecx, ecx","je flag16",
          "mov edx, dword ptr [ebp-4]","or edx, 4","mov dword ptr [ebp-4], edx","flag16:",
          "mov eax, dword ptr [ebp+8]","and eax, 0ffffh","and eax, 10h","test eax, eax","je flag32",
          "mov ecx, dword ptr [ebp-4]","or ecx, 2","mov dword ptr [ebp-4], ecx","flag32:",
          "mov edx, dword ptr [ebp+8]","and edx, 0ffffh","and edx, 20h","test edx, edx","je flag2",
          "mov eax, dword ptr [ebp-4]","or al, 1","mov dword ptr [ebp-4], eax","flag2:",
          "mov ecx, dword ptr [ebp+8]","and ecx, 0ffffh","and ecx, 2","test ecx, ecx","je done",
          "mov edx, dword ptr [ebp-4]","or edx, 80000h","mov dword ptr [ebp-4], edx","done:",
          "mov eax, dword ptr [ebp-4]")+end
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered numeric classifier.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredNumericClass{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
