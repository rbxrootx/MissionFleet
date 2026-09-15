"""Stage the shared VC6 three-word mantissa copy helper."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004bf1f0",76),("save-server","0047c8d0",76))
BODY=("push ebp","mov ebp, esp","sub esp, 0ch","mov eax, dword ptr [ebp+0ch]","mov dword ptr [ebp-4], eax","mov ecx, dword ptr [ebp+8]","mov dword ptr [ebp-8], ecx","mov dword ptr [ebp-0ch], 0","jmp test_index","next:","mov edx, dword ptr [ebp-0ch]","add edx, 1","mov dword ptr [ebp-0ch], edx","test_index:","cmp dword ptr [ebp-0ch], 3","jge done","mov eax, dword ptr [ebp-8]","mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ecx]","mov dword ptr [eax], edx","mov eax, dword ptr [ebp-8]","add eax, 4","mov dword ptr [ebp-8], eax","mov ecx, dword ptr [ebp-4]","add ecx, 4","mov dword ptr [ebp-4], ecx","jmp next","done:","mov esp, ebp","pop ebp","ret")
def render(a):
 lines="\n".join(f"    __asm {x}" for x in BODY)
 return f'// Exact recovered VC6 three-word mantissa copy.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredRuntimeCopyMan{a.upper()}.cpp";(ROOT/s).write_text(render(a),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
