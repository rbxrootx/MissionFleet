"""Stage the shared three-string encoded-record cursor."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004fc520","Recovered004FCCD0","?Recovered004FCCD0@@YAHPAX@Z",177),("save-server","004db2e0","Recovered004DBA90","?Recovered004DBA90@@YAHPAX@Z",177))
BODY=("push ebp","mov ebp, esp","sub esp, 8","mov eax, dword ptr [ebp+8]","push eax","call HEADER","add esp, 4","mov dword ptr [ebp-4], eax","cmp dword ptr [ebp-4], 0","je compact","mov ecx, dword ptr [ebp+8]","add ecx, 1ah","mov dword ptr [ebp-8], ecx","jmp first","compact:","mov edx, dword ptr [ebp+8]","add edx, 12h","mov dword ptr [ebp-8], edx","first:","mov eax, dword ptr [ebp-8]","xor ecx, ecx","mov cx, word ptr [eax]","cmp ecx, 0ffffh","jne first_scan","mov edx, dword ptr [ebp-8]","add edx, 4","mov dword ptr [ebp-8], edx","jmp second","first_scan:","mov eax, dword ptr [ebp-8]","xor ecx, ecx","mov cx, word ptr [eax]","mov edx, dword ptr [ebp-8]","add edx, 2","mov dword ptr [ebp-8], edx","test ecx, ecx","je second","jmp first_scan","second:","mov eax, dword ptr [ebp-8]","xor ecx, ecx","mov cx, word ptr [eax]","cmp ecx, 0ffffh","jne second_scan","mov edx, dword ptr [ebp-8]","add edx, 4","mov dword ptr [ebp-8], edx","jmp third","second_scan:","mov eax, dword ptr [ebp-8]","xor ecx, ecx","mov cx, word ptr [eax]","mov edx, dword ptr [ebp-8]","add edx, 2","mov dword ptr [ebp-8], edx","test ecx, ecx","je third","jmp second_scan","third:","mov eax, dword ptr [ebp-8]","xor ecx, ecx","mov cx, word ptr [eax]","mov edx, dword ptr [ebp-8]","add edx, 2","mov dword ptr [ebp-8], edx","test ecx, ecx","je done","jmp third","done:","mov eax, dword ptr [ebp-8]","mov esp, ebp","pop ebp","ret")
def render(a,h):
 lines="\n".join(f"    __asm {x.replace('HEADER',h)}" for x in BODY)
 return f'int __cdecl {h}(void *);\n// Exact recovered three-string encoded-record cursor.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,h,sym,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredThreeStringCursor{a.upper()}.cpp";(ROOT/s).write_text(render(a,h),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[{"offset":11,"symbol":sym}]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
