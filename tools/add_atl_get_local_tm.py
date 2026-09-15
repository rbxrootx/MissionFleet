"""Stage the shared ATL CTime::GetLocalTm wrapper with real CRT targets."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004cf400","Recovered004AC1A0",80),("save-server","004a2614","Recovered0046AE40",80))
BODY=("push ebp","mov ebp, esp","sub esp, 8","push esi","push edi","mov dword ptr [ebp-8], ecx","cmp dword ptr [ebp+8], 0","je direct","mov eax, dword ptr [ebp-8]","push eax","call LOCALTIME","add esp, 4","mov dword ptr [ebp-4], eax","cmp dword ptr [ebp-4], 0","jne copy","xor eax, eax","jmp done","copy:","mov esi, dword ptr [ebp-4]","mov ecx, 9","mov edi, dword ptr [ebp+8]","rep movsd","mov eax, dword ptr [ebp+8]","jmp done","direct:","mov ecx, dword ptr [ebp-8]","push ecx","call LOCALTIME","add esp, 4","done:","pop edi","pop esi","mov esp, ebp","pop ebp","ret 4")
def render(a,h):
 lines="\n".join(f"    __asm {x.replace('LOCALTIME',h)}" for x in BODY)
 return f'extern "C" void {h}();\n// Exact recovered ATL CTime local-time wrapper.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,h,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredATLGetLocalTm{a.upper()}.cpp";(ROOT/s).write_text(render(a,h),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[{"offset":22,"symbol":f"_{h}"},{"offset":65,"symbol":f"_{h}"}]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
