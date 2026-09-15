"""Stage the shared encoded-record extent calculator."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(
("game-server","0048d8f9","Recovered0048D9F9","?Recovered0048D9F9@@YAHPAX@Z",256),
("save-server","00449ee9","Recovered00449FE9","?Recovered00449FE9@@YAHPAX@Z",256))
BODY=(
"push ebp","mov ebp, esp","sub esp, 0ch","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax]","mov dword ptr [ebp-0ch], ecx",
"mov edx, dword ptr [ebp+8]","push edx","call HELPER","add esp, 4","mov dword ptr [ebp-4], eax","cmp dword ptr [ebp-4], 0","je compact",
"mov eax, dword ptr [ebp+8]","add eax, 1ah","mov dword ptr [ebp-8], eax","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx+0ch]","mov dword ptr [ebp-0ch], edx","jmp first",
"compact:","mov eax, dword ptr [ebp+8]","add eax, 12h","mov dword ptr [ebp-8], eax","first:",
"mov ecx, dword ptr [ebp-8]","xor edx, edx","mov dx, word ptr [ecx]","cmp edx, 0ffffh","jne first_scan",
"mov eax, dword ptr [ebp-8]","add eax, 4","mov dword ptr [ebp-8], eax","jmp second","first_scan:",
"mov ecx, dword ptr [ebp-8]","xor edx, edx","mov dx, word ptr [ecx]","mov eax, dword ptr [ebp-8]","add eax, 2","mov dword ptr [ebp-8], eax","test edx, edx","je second","jmp first_scan",
"second:","mov ecx, dword ptr [ebp-8]","xor edx, edx","mov dx, word ptr [ecx]","cmp edx, 0ffffh","jne second_scan",
"mov eax, dword ptr [ebp-8]","add eax, 4","mov dword ptr [ebp-8], eax","jmp third","second_scan:",
"mov ecx, dword ptr [ebp-8]","xor edx, edx","mov dx, word ptr [ecx]","mov eax, dword ptr [ebp-8]","add eax, 2","mov dword ptr [ebp-8], eax","test edx, edx","je third","jmp second_scan",
"third:","mov ecx, dword ptr [ebp-8]","xor edx, edx","mov dx, word ptr [ecx]","mov eax, dword ptr [ebp-8]","add eax, 2","mov dword ptr [ebp-8], eax","test edx, edx","je optional","jmp third",
"optional:","mov ecx, dword ptr [ebp-0ch]","and ecx, 40h","test ecx, ecx","je aligned_end",
"mov edx, dword ptr [ebp-4]","neg edx","sbb edx, edx","and edx, 2","add edx, 1","mov eax, dword ptr [ebp-8]","lea ecx, [eax+edx*2]","mov dword ptr [ebp-8], ecx",
"optional_scan:","mov edx, dword ptr [ebp-8]","xor eax, eax","mov ax, word ptr [edx]","mov ecx, dword ptr [ebp-8]","add ecx, 2","mov dword ptr [ebp-8], ecx","test eax, eax","je aligned_end","jmp optional_scan",
"aligned_end:","mov eax, dword ptr [ebp-8]","add eax, 3","and al, 0fch","mov esp, ebp","pop ebp","ret 4")
def render(a,h):
 lines="\n".join(f"    __asm {x.replace('HELPER',h)}" for x in BODY)
 return f'int __cdecl {h}(void *);\n// Exact recovered encoded-record extent calculator.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,h,sym,n in TARGETS:
  if (c,a) in old:continue
  src=f"src/{c}/matches/RecoveredEncodedExtent{a.upper()}.cpp";(ROOT/src).write_text(render(a,h),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[{"offset":19,"symbol":sym}]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
