"""Stage repeated OLE dispatch and floating construction helpers."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def pair(g,s,k,z): TARGETS.extend((("game-server",g,k,z),("save-server",s,k,z)))
pair("00493403","0044fa28","get_property",45)
pair("00572b36","0057b4e6","set_data",47)
pair("004a5339","00461949","release_owned",48)
pair("004bcf80","00479bd0","float_build",52)
pair("004933c9","0044f9ee","invoke_helper",58)
pair("004bced0","00479b20","float_exp_build",62)
pair("00514219","004fd449","splitter_down",64)

def body(k):
    local=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], ecx"); end=("mov esp, ebp","pop ebp","ret")
    if k=="get_property":
        return local+("push 0","mov eax, dword ptr [ebp+16]","push eax","mov cx, word ptr [ebp+12]","push ecx",
          "push 2","mov edx, dword ptr [ebp+8]","push edx","mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax]",
          "mov edx, dword ptr [ebp-4]","push edx","call dword ptr [ecx+104]","add esp, 24")+end[:-1]+("ret 12",)
    if k=="set_data":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","sub eax, 112","mov dword ptr [ebp-4], eax",
          "mov ecx, dword ptr [ebp+20]","push ecx","mov edx, dword ptr [ebp+16]","push edx","mov eax, dword ptr [ebp+12]","push eax",
          "mov ecx, dword ptr [ebp-4]","add ecx, 104","mov edx, dword ptr [ebp-4]","mov eax, dword ptr [edx+104]",
          "push ecx","call dword ptr [eax+28]")+end[:-1]+("ret 16",)
    if k=="release_owned":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+28], 0","je done","mov ecx, dword ptr [ebp-4]",
          "mov edx, dword ptr [ecx+28]","mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax+28]","mov eax, dword ptr [ecx]",
          "push edx","call dword ptr [eax+8]","mov ecx, dword ptr [ebp-4]","mov dword ptr [ecx+28], 0","done:")+end
    if k=="float_build":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-8], eax",
          "mov ecx, dword ptr [ebp+12]","mov dword ptr [ebp-4], ecx","mov edx, dword ptr [ebp+14]","and edx, 0ffffh",
          "and edx, 800fh","mov eax, dword ptr [ebp+16]","shl eax, 4","or edx, eax","mov word ptr [ebp-2], dx",
          "fld qword ptr [ebp-8]")+end
    if k=="invoke_helper":
        return ("push ebp","mov ebp, esp","push ecx","lea eax, dword ptr [ebp+32]","mov dword ptr [ebp-4], eax",
          "mov ecx, dword ptr [ebp-4]","push ecx","mov edx, dword ptr [ebp+28]","push edx","mov eax, dword ptr [ebp+24]","push eax",
          "mov cx, word ptr [ebp+20]","push ecx","mov dx, word ptr [ebp+16]","push edx","mov eax, dword ptr [ebp+12]","push eax",
          "mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ecx]","mov ecx, dword ptr [ebp+8]","call dword ptr [edx+96]",
          "mov dword ptr [ebp-4], 0")+end
    if k=="float_exp_build":
        return ("push ebp","mov ebp, esp","sub esp, 12","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-12], eax",
          "mov ecx, dword ptr [ebp+12]","mov dword ptr [ebp-8], ecx","mov edx, dword ptr [ebp+16]","add edx, 3feh",
          "mov dword ptr [ebp-4], edx","mov eax, dword ptr [ebp+14]","and eax, 0ffffh","and eax, 800fh",
          "mov ecx, dword ptr [ebp-4]","shl ecx, 4","or eax, ecx","mov word ptr [ebp-6], ax","fld qword ptr [ebp-12]")+end
    if k=="splitter_down":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+128], 0","je dispatch","jmp done","dispatch:",
          "mov ecx, dword ptr [ebp+16]","push ecx","mov edx, dword ptr [ebp+12]","push edx","mov eax, dword ptr [ebp-4]",
          "mov edx, dword ptr [eax]","mov ecx, dword ptr [ebp-4]","call dword ptr [edx+260]","push eax",
          "mov eax, dword ptr [ebp-4]","mov edx, dword ptr [eax]","mov ecx, dword ptr [ebp-4]","call dword ptr [edx+288]","done:")+end[:-1]+("ret 12",)
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered OLE/math dispatch helper.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredOleMathDispatch{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
