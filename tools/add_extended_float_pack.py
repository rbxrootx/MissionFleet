"""Stage the shared internal-to-extended-float packer."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("game-server","004be730",354),("save-server","0047b380",354))
BODY=(
"push ebp","mov ebp, esp","sub esp, 1ch","mov dword ptr [ebp-0ch], 80000000h","mov word ptr [ebp-4], 0",
"mov eax, dword ptr [ebp+0ch]","xor ecx, ecx","mov cx, word ptr [eax+6]","and ecx, 7ff0h","sar ecx, 4","mov word ptr [ebp-14h], cx",
"mov edx, dword ptr [ebp+0ch]","xor eax, eax","mov ax, word ptr [edx+6]","and eax, 8000h","mov word ptr [ebp-18h], ax",
"mov ecx, dword ptr [ebp+0ch]","mov edx, dword ptr [ecx+4]","and edx, 0fffffh","mov dword ptr [ebp-8], edx",
"mov eax, dword ptr [ebp+0ch]","mov ecx, dword ptr [eax]","mov dword ptr [ebp-10h], ecx",
"mov edx, dword ptr [ebp-14h]","and edx, 0ffffh","mov dword ptr [ebp-1ch], edx",
"cmp dword ptr [ebp-1ch], 0","je zero_exp","cmp dword ptr [ebp-1ch], 7ffh","je special","jmp normal",
"special:","mov word ptr [ebp-4], 7fffh","jmp compose","zero_exp:",
"cmp dword ptr [ebp-8], 0","jne denormal","cmp dword ptr [ebp-10h], 0","jne denormal",
"mov eax, dword ptr [ebp+8]","mov dword ptr [eax+4], 0","mov ecx, dword ptr [ebp+8]","mov dword ptr [ecx], 0",
"mov edx, dword ptr [ebp+8]","mov word ptr [edx+8], 0","jmp done",
"denormal:","movsx eax, word ptr [ebp-14h]","add eax, 3c01h","mov word ptr [ebp-4], ax","mov dword ptr [ebp-0ch], 0","jmp compose",
"normal:","mov cx, word ptr [ebp-14h]","sub cx, 3ffh","mov word ptr [ebp-14h], cx","movsx edx, word ptr [ebp-14h]","add edx, 3fffh","mov word ptr [ebp-4], dx",
"compose:","mov eax, dword ptr [ebp-8]","shl eax, 0bh","mov ecx, dword ptr [ebp-0ch]","or ecx, eax",
"mov edx, dword ptr [ebp-10h]","shr edx, 15h","or ecx, edx","mov eax, dword ptr [ebp+8]","mov dword ptr [eax+4], ecx",
"mov ecx, dword ptr [ebp-10h]","shl ecx, 0bh","mov edx, dword ptr [ebp+8]","mov dword ptr [edx], ecx",
"normalize:","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax+4]","and ecx, 80000000h","test ecx, ecx","jne store_exp",
"mov edx, dword ptr [ebp+8]","mov eax, dword ptr [edx+4]","shl eax, 1","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx]",
"and edx, 80000000h","neg edx","sbb edx, edx","neg edx","or eax, edx","mov ecx, dword ptr [ebp+8]","mov dword ptr [ecx+4], eax",
"mov edx, dword ptr [ebp+8]","mov eax, dword ptr [edx]","shl eax, 1","mov ecx, dword ptr [ebp+8]","mov dword ptr [ecx], eax",
"mov dx, word ptr [ebp-4]","sub dx, 1","mov word ptr [ebp-4], dx","jmp normalize",
"store_exp:","mov eax, dword ptr [ebp-18h]","and eax, 0ffffh","mov ecx, dword ptr [ebp-4]","and ecx, 0ffffh","or eax, ecx",
"mov edx, dword ptr [ebp+8]","mov word ptr [edx+8], ax","done:","mov esp, ebp","pop ebp","ret")
def render(a):
 lines="\n".join(f"    __asm {x}" for x in BODY)
 return f'// Exact recovered internal-to-extended-float packer.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{lines}\n}}\n'
def main():
 p=ROOT/"config/NF2_2062/verifications.json";d=json.loads(p.read_text(encoding="utf-8"));old={(m["component"],m["address"]) for m in d["matches"]};out=[]
 for c,a,n in TARGETS:
  if (c,a) in old:continue
  s=f"src/{c}/matches/RecoveredExtendedPack{a.upper()}.cpp";(ROOT/s).write_text(render(a),encoding="ascii")
  out.append({"component":c,"address":a,"size":n,"source":s,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
 if out:append_records(p,out)
 print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__":main()
