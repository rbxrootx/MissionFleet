"""Stage repeated runtime math and indirect interface helpers."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def pair(g,s,k,z): TARGETS.extend((("game-server",g,k,z),("save-server",s,k,z)))
pair("004bd1c0","00479e10","control_word",50)
pair("0057619b","0058287b","guarded_release",53)
pair("0050df04","004f7134","member_call",56)
pair("0049aaf0","00457110","link_pointer",60)
pair("004c5070","00480900","add_with_carry",62)
pair("0056dc81","00576631","window_result",63)
pair("004bae00","00478170","store_digits",64)

def body(k):
    local=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], ecx"); end=("mov esp, ebp","pop ebp","ret")
    if k=="control_word":
        return ("push ebp","mov ebp, esp","sub esp, 8","push ebx","push esi","push edi","wait","fnstcw word ptr [ebp-8]",
          "mov eax, dword ptr [ebp+8]","and eax, dword ptr [ebp+12]","movsx ecx, word ptr [ebp-8]",
          "mov edx, dword ptr [ebp+12]","not edx","and ecx, edx","or eax, ecx","mov word ptr [ebp-4], ax",
          "fldcw word ptr [ebp-4]","movsx eax, word ptr [ebp-8]","pop edi","pop esi","pop ebx","mov esp, ebp","pop ebp","ret")
    if k=="guarded_release":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax], 0","je done","mov ecx, dword ptr [ebp-4]",
          "cmp dword ptr [ecx+4], 0","je clear","mov edx, dword ptr [ebp-4]","mov eax, dword ptr [edx]",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ecx]","mov ecx, dword ptr [edx]",
          "push eax","call dword ptr [ecx+8]","clear:","mov edx, dword ptr [ebp-4]","mov dword ptr [edx], 0","done:")+end
    if k=="member_call":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+132], 0","je absent",
          "mov ecx, dword ptr [ebp+8]","push ecx","mov edx, dword ptr [ebp-4]","mov ecx, dword ptr [edx+132]",
          "mov eax, dword ptr [ebp-4]","mov edx, dword ptr [eax+132]","mov eax, dword ptr [edx]","call dword ptr [eax+56]",
          "jmp done","absent:","xor eax, eax","done:")+end[:-1]+("ret 4",)
    if k=="link_pointer":
        return ("push ebp","mov ebp, esp","cmp dword ptr [ebp+12], 0","je first",
          "mov eax, dword ptr [ebp+12]","mov ecx, dword ptr [eax]","mov edx, dword ptr [ebp+12]","push edx","call dword ptr [ecx+4]",
          "first:","mov eax, dword ptr [ebp+8]","cmp dword ptr [eax], 0","je store","mov ecx, dword ptr [ebp+8]",
          "mov edx, dword ptr [ecx]","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax]","mov eax, dword ptr [ecx]",
          "push edx","call dword ptr [eax+8]","store:","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ebp+12]",
          "mov dword ptr [ecx], edx","mov eax, dword ptr [ebp+12]","pop ebp","ret 8")
    if k=="add_with_carry":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-8], 0","mov eax, dword ptr [ebp+8]",
          "add eax, dword ptr [ebp+12]","mov dword ptr [ebp-4], eax","mov ecx, dword ptr [ebp-4]",
          "cmp ecx, dword ptr [ebp+8]","jb carry","mov edx, dword ptr [ebp-4]","cmp edx, dword ptr [ebp+12]",
          "jae store","carry:","mov eax, dword ptr [ebp-8]","add eax, 1","mov dword ptr [ebp-8], eax",
          "store:","mov ecx, dword ptr [ebp+16]","mov edx, dword ptr [ebp-4]","mov dword ptr [ecx], edx",
          "mov eax, dword ptr [ebp-8]")+end
    if k=="window_result":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","sub eax, 216",
          "mov dword ptr [ebp-4], eax","mov ecx, dword ptr [ebp+12]","push ecx","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [edx]","mov ecx, dword ptr [ebp-4]","call dword ptr [eax+216]",
          "mov ecx, dword ptr [ebp+20]","mov dword ptr [ecx], eax","mov edx, dword ptr [ebp+20]",
          "mov eax, dword ptr [edx]","neg eax","sbb eax, eax","and eax, 7fffbffbh","add eax, 80004005h")+end[:-1]+("ret 16",)
    if k=="store_digits":
        return ("push ebp","mov ebp, esp","mov eax, dword ptr [ebp+12]","cdq","mov ecx, 10","idiv ecx","add eax, 48",
          "mov edx, dword ptr [ebp+8]","mov byte ptr [edx], al","mov eax, dword ptr [ebp+8]","add eax, 1","mov dword ptr [ebp+8], eax",
          "mov eax, dword ptr [ebp+12]","cdq","mov ecx, 10","idiv ecx","add edx, 48","mov eax, dword ptr [ebp+8]",
          "mov byte ptr [eax], dl","mov ecx, dword ptr [ebp+8]","add ecx, 1","mov dword ptr [ebp+8], ecx","mov eax, dword ptr [ebp+8]","pop ebp","ret")
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered runtime/interface helper.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredRuntimeInterface{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
