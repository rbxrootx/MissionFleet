"""Stage the shared 16-byte local-time record builder."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004cf450","Recovered004CF400",155),("save-server","004a2664","Recovered004A2614",155))
BODY=("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-8], ecx","push 0","mov ecx, dword ptr [ebp-8]","call GETTM","mov dword ptr [ebp-4], eax","cmp dword ptr [ebp-4], 0","jne build","xor eax, eax","jmp done","build:","mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax+14h]","add ecx, 76ch","mov edx, dword ptr [ebp+8]","mov word ptr [edx], cx","mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax+10h]","add ecx, 1","mov edx, dword ptr [ebp+8]","mov word ptr [edx+2], cx","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp-4]","mov dx, word ptr [ecx+18h]","mov word ptr [eax+4], dx","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp-4]","mov dx, word ptr [ecx+0ch]","mov word ptr [eax+6], dx","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp-4]","mov dx, word ptr [ecx+8]","mov word ptr [eax+8], dx","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp-4]","mov dx, word ptr [ecx+4]","mov word ptr [eax+0ah], dx","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp-4]","mov dx, word ptr [ecx]","mov word ptr [eax+0ch], dx","mov eax, dword ptr [ebp+8]","mov word ptr [eax+0eh], 0","mov eax, 1","done:","mov esp, ebp","pop ebp","ret 4")
def render(a,h):
 lines="\n".join(f"    __asm {x.replace('GETTM',h)}" for x in BODY)
 return f'extern "C" void {h}();\n// Exact recovered local-time output record builder.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,h,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredLocalTimeRecord{a.upper()}.cpp";(ROOT/s).write_text(render(a,h),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[{"offset":15,"symbol":f"_{h}"}]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
