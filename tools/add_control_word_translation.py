"""Stage the shared control-word-to-runtime-flag translator."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004bea60",377),("save-server","0047c320",377))
BODY=(
"push ebp","mov ebp, esp","sub esp, 0ch","mov dword ptr [ebp-4], 0",
"mov eax, dword ptr [ebp+8]","and eax, 0ffffh","and eax, 1","test eax, eax","je b4",
"mov ecx, dword ptr [ebp-4]","or ecx, 10h","mov dword ptr [ebp-4], ecx","b4:",
"mov edx, dword ptr [ebp+8]","and edx, 0ffffh","and edx, 4","test edx, edx","je b8",
"mov eax, dword ptr [ebp-4]","or al, 8","mov dword ptr [ebp-4], eax","b8:",
"mov ecx, dword ptr [ebp+8]","and ecx, 0ffffh","and ecx, 8","test ecx, ecx","je b10",
"mov edx, dword ptr [ebp-4]","or edx, 4","mov dword ptr [ebp-4], edx","b10:",
"mov eax, dword ptr [ebp+8]","and eax, 0ffffh","and eax, 10h","test eax, eax","je b20",
"mov ecx, dword ptr [ebp-4]","or ecx, 2","mov dword ptr [ebp-4], ecx","b20:",
"mov edx, dword ptr [ebp+8]","and edx, 0ffffh","and edx, 20h","test edx, edx","je b2",
"mov eax, dword ptr [ebp-4]","or al, 1","mov dword ptr [ebp-4], eax","b2:",
"mov ecx, dword ptr [ebp+8]","and ecx, 0ffffh","and ecx, 2","test ecx, ecx","je groupc",
"mov edx, dword ptr [ebp-4]","or edx, 80000h","mov dword ptr [ebp-4], edx","groupc:",
"mov eax, dword ptr [ebp+8]","and eax, 0ffffh","and eax, 0c00h","mov dword ptr [ebp-8], eax",
"cmp dword ptr [ebp-8], 800h","jg gh","cmp dword ptr [ebp-8], 800h","je g800",
"cmp dword ptr [ebp-8], 0","je g0","cmp dword ptr [ebp-8], 400h","je g400","jmp gd",
"gh:","cmp dword ptr [ebp-8], 0c00h","je gc00","jmp gd",
"g0:","mov ecx, dword ptr [ebp-4]","mov dword ptr [ebp-4], ecx","jmp gd",
"g800:","mov edx, dword ptr [ebp-4]","or dh, 2","mov dword ptr [ebp-4], edx","jmp gd",
"g400:","mov eax, dword ptr [ebp-4]","or ah, 1","mov dword ptr [ebp-4], eax","jmp gd",
"gc00:","mov ecx, dword ptr [ebp-4]","or ch, 3","mov dword ptr [ebp-4], ecx","gd:",
"mov edx, dword ptr [ebp+8]","and edx, 0ffffh","and edx, 300h","mov dword ptr [ebp-0ch], edx",
"cmp dword ptr [ebp-0ch], 0","je m0","cmp dword ptr [ebp-0ch], 200h","je m2",
"cmp dword ptr [ebp-0ch], 300h","je m3","jmp md",
"m3:","mov eax, dword ptr [ebp-4]","mov dword ptr [ebp-4], eax","jmp md",
"m2:","mov ecx, dword ptr [ebp-4]","or ecx, 10000h","mov dword ptr [ebp-4], ecx","jmp md",
"m0:","mov edx, dword ptr [ebp-4]","or edx, 20000h","mov dword ptr [ebp-4], edx","md:",
"mov eax, dword ptr [ebp+8]","and eax, 0ffffh","and eax, 1000h","test eax, eax","je done",
"mov ecx, dword ptr [ebp-4]","or ecx, 40000h","mov dword ptr [ebp-4], ecx","done:",
"mov eax, dword ptr [ebp-4]","mov esp, ebp","pop ebp","ret")
def render(a):
 lines="\n".join(f"    __asm {x}" for x in BODY)
 return f'// Exact recovered control-word translator.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,n in TARGETS:
  if (c,a) in old: continue
  s=f"src/{c}/matches/RecoveredControlTranslate{a.upper()}.cpp";(ROOT/s).write_text(render(a),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
 if out: append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
