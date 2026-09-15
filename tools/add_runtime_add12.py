"""Stage the shared VC6 96-bit addition primitive."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004c50b0","Recovered004C5070",173),("save-server","00480940","Recovered00480900",173))
BODY=(
"push ebp","mov ebp, esp","sub esp, 0ch","mov eax, dword ptr [ebp+8]","push eax","mov ecx, dword ptr [ebp+0ch]","mov edx, dword ptr [ecx]","push edx","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax]","push ecx","call ADDL","add esp, 0ch","mov dword ptr [ebp-4], eax","cmp dword ptr [ebp-4], 0","je add_mid","mov edx, dword ptr [ebp+8]","add edx, 4","push edx","push 1","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax+4]","push ecx","call ADDL","add esp, 0ch","mov dword ptr [ebp-8], eax","cmp dword ptr [ebp-8], 0","je add_mid","mov edx, dword ptr [ebp+8]","mov eax, dword ptr [edx+8]","add eax, 1","mov ecx, dword ptr [ebp+8]","mov dword ptr [ecx+8], eax","add_mid:","mov edx, dword ptr [ebp+8]","add edx, 4","push edx","mov eax, dword ptr [ebp+0ch]","mov ecx, dword ptr [eax+4]","push ecx","mov edx, dword ptr [ebp+8]","mov eax, dword ptr [edx+4]","push eax","call ADDL","add esp, 0ch","mov dword ptr [ebp-0ch], eax","cmp dword ptr [ebp-0ch], 0","je add_high","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx+8]","add edx, 1","mov eax, dword ptr [ebp+8]","mov dword ptr [eax+8], edx","add_high:","mov ecx, dword ptr [ebp+8]","add ecx, 8","push ecx","mov edx, dword ptr [ebp+0ch]","mov eax, dword ptr [edx+8]","push eax","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx+8]","push edx","call ADDL","add esp, 0ch","mov esp, ebp","pop ebp","ret")
def render(a,h):
 lines="\n".join(f"    __asm {x.replace('ADDL',h)}" for x in BODY)
 return f'extern "C" void {h}();\n// Exact recovered VC6 96-bit addition.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,h,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredRuntimeAdd12{a.upper()}.cpp";(ROOT/s).write_text(render(a,h),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[{"offset":23,"symbol":f"_{h}"},{"offset":56,"symbol":f"_{h}"},{"offset":109,"symbol":f"_{h}"},{"offset":162,"symbol":f"_{h}"}]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
