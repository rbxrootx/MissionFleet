"""Stage the shared decimal-digit to 96-bit mantissa builder."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(
("game-server","004c5230","Recovered004C5160","Recovered004C50B0",315),
("save-server","00480ac0","Recovered004809F0","Recovered00480940",315))
BODY=(
"push ebp","mov ebp, esp","sub esp, 10h","mov word ptr [ebp-10h], 404eh",
"mov eax, dword ptr [ebp+10h]","mov dword ptr [eax], 0","mov ecx, dword ptr [ebp+10h]","mov dword ptr [ecx+4], 0","mov edx, dword ptr [ebp+10h]","mov dword ptr [edx+8], 0","jmp digit_test",
"digit_next:","mov eax, dword ptr [ebp+0ch]","sub eax, 1","mov dword ptr [ebp+0ch], eax","mov ecx, dword ptr [ebp+8]","add ecx, 1","mov dword ptr [ebp+8], ecx",
"digit_test:","cmp dword ptr [ebp+0ch], 0","jbe normalize16","mov edx, dword ptr [ebp+10h]","mov eax, dword ptr [edx]","mov dword ptr [ebp-0ch], eax","mov ecx, dword ptr [edx+4]","mov dword ptr [ebp-8], ecx","mov edx, dword ptr [edx+8]","mov dword ptr [ebp-4], edx",
"mov eax, dword ptr [ebp+10h]","push eax","call SHL","add esp, 4","mov ecx, dword ptr [ebp+10h]","push ecx","call SHL","add esp, 4","lea edx, [ebp-0ch]","push edx","mov eax, dword ptr [ebp+10h]","push eax","call ADD","add esp, 8","mov ecx, dword ptr [ebp+10h]","push ecx","call SHL","add esp, 4",
"mov edx, dword ptr [ebp+8]","movsx eax, byte ptr [edx]","mov dword ptr [ebp-0ch], eax","mov dword ptr [ebp-8], 0","mov dword ptr [ebp-4], 0","lea ecx, [ebp-0ch]","push ecx","mov edx, dword ptr [ebp+10h]","push edx","call ADD","add esp, 8","jmp digit_next",
"normalize16:","mov eax, dword ptr [ebp+10h]","cmp dword ptr [eax+8], 0","jne normalize1","mov ecx, dword ptr [ebp+10h]","mov edx, dword ptr [ecx+4]","shr edx, 10h","mov eax, dword ptr [ebp+10h]","mov dword ptr [eax+8], edx","mov ecx, dword ptr [ebp+10h]","mov edx, dword ptr [ecx+4]","shl edx, 10h","mov eax, dword ptr [ebp+10h]","mov ecx, dword ptr [eax]","shr ecx, 10h","or edx, ecx","mov eax, dword ptr [ebp+10h]","mov dword ptr [eax+4], edx","mov ecx, dword ptr [ebp+10h]","mov edx, dword ptr [ecx]","shl edx, 10h","mov eax, dword ptr [ebp+10h]","mov dword ptr [eax], edx","mov cx, word ptr [ebp-10h]","sub cx, 10h","mov word ptr [ebp-10h], cx","jmp normalize16",
"normalize1:","mov edx, dword ptr [ebp+10h]","mov eax, dword ptr [edx+8]","and eax, 8000h","test eax, eax","jne store","mov ecx, dword ptr [ebp+10h]","push ecx","call SHL","add esp, 4","mov dx, word ptr [ebp-10h]","sub dx, 1","mov word ptr [ebp-10h], dx","jmp normalize1",
"store:","mov eax, dword ptr [ebp+10h]","mov cx, word ptr [ebp-10h]","mov word ptr [eax+0ah], cx","mov esp, ebp","pop ebp","ret")
def render(a,shl,add):
 lines="\n".join(f"    __asm {x.replace('SHL',shl).replace('ADD',add)}" for x in BODY)
 return f'extern "C" void {shl}();\nextern "C" void {add}();\n// Exact recovered decimal mantissa builder.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,shl,add,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredDecimalMantissa{a.upper()}.cpp";(ROOT/s).write_text(render(a,shl,add),encoding="ascii")
  rel=[{"offset":o,"symbol":f"_{shl if o in (92,104,132,279) else add}"} for o in (92,104,120,132,171,279)]
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":rel})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
