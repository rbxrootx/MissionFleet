"""Stage the shared VC6 96-bit left-shift primitive."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004c5160",96),("save-server","004809f0",96))
BODY=("push ebp","mov ebp, esp","sub esp, 8","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax]","and ecx, 80000000h","neg ecx","sbb ecx, ecx","neg ecx","mov dword ptr [ebp-4], ecx","mov edx, dword ptr [ebp+8]","mov eax, dword ptr [edx+4]","and eax, 80000000h","neg eax","sbb eax, eax","neg eax","mov dword ptr [ebp-8], eax","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx]","shl edx, 1","mov eax, dword ptr [ebp+8]","mov dword ptr [eax], edx","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx+4]","shl edx, 1","or edx, dword ptr [ebp-4]","mov eax, dword ptr [ebp+8]","mov dword ptr [eax+4], edx","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx+8]","shl edx, 1","or edx, dword ptr [ebp-8]","mov eax, dword ptr [ebp+8]","mov dword ptr [eax+8], edx","mov esp, ebp","pop ebp","ret")
def render(a):
 lines="\n".join(f"    __asm {x}" for x in BODY)
 return f'// Exact recovered VC6 96-bit left shift.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredRuntimeShl12{a.upper()}.cpp";(ROOT/s).write_text(render(a),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
