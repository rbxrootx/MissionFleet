"""Stage repeated framework state, constructor, and mantissa helpers."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def pair(g,s,k,z): TARGETS.extend((("game-server",g,k,z),("save-server",s,k,z)))
pair("004bf240","0047c920","fill_zero",47)
pair("0053bba9","0052b609","set_owner",48)
pair("0049274a","0044ed6f","style_result",49)
pair("0055fd3f","00562dbf","get_window",49)
pair("00489290","0042c180","triple_init",49)
pair("0055971c","0055c79c","map_result",51)
pair("0050de7e","004f70ae","member_call",52)
pair("0050dd6b","004f6f9b","member_query",53)
pair("00563a80","00569980","data_object_init",53)
pair("0048ef90","0044b620","type_cache_init",54)
pair("004bf270","0047c950","is_zero",55)

def body(k):
    local=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], ecx"); end=("mov esp, ebp","pop ebp","ret")
    if k=="fill_zero":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0","jmp check","iterate:",
          "mov eax, dword ptr [ebp-4]","add eax, 1","mov dword ptr [ebp-4], eax","check:",
          "cmp dword ptr [ebp-4], 3","jge done","mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+8]",
          "mov dword ptr [edx+ecx*4], 0","jmp iterate","done:")+end
    if k=="set_owner":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-4], ecx","cmp dword ptr [ebp+8], 0",
          "je none","mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax+28]","mov dword ptr [ebp-8], ecx",
          "jmp store","none:","mov dword ptr [ebp-8], 0","store:","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [ebp-8]","mov dword ptr [edx+32], eax")+end[:-1]+("ret 4",)
    if k=="style_result":
        return local+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax+112]","and ecx, 1000h",
          "test ecx, ecx","je no","mov edx, dword ptr [ebp-4]","mov eax, dword ptr [edx+108]",
          "and eax, 1","neg eax","sbb eax, eax","and al, 0f0h","add eax, 32","jmp done",
          "no:","xor eax, eax","done:")+end
    if k=="get_window":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","sub eax, 64",
          "mov dword ptr [ebp-4], eax","mov ecx, dword ptr [ebp+12]","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [edx+40]","mov dword ptr [ecx], eax","mov ecx, dword ptr [ebp+12]",
          "mov eax, dword ptr [ecx]","neg eax","sbb eax, eax","and eax, 7fffbffbh","add eax, 80004005h")+end[:-1]+("ret 8",)
    if k=="triple_init":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0cccccccch","mov dword ptr [ebp-4], ecx",
          "mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax], ecx",
          "mov edx, dword ptr [ebp-4]","mov eax, dword ptr [ebp+12]","mov dword ptr [edx+4], eax",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+16]","mov dword ptr [ecx+8], edx",
          "mov eax, dword ptr [ebp-4]")+end[:-1]+("ret 12",)
    if k=="map_result":
        return local+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax+92], ecx",
          "cmp dword ptr [ebp+8], 1","jne second","mov eax, 1","jmp done","second:",
          "cmp dword ptr [ebp+8], 2","jne other","mov eax, 2","jmp done","other:","or eax, 0ffffffffh",
          "done:")+end[:-1]+("ret 4",)
    if k=="member_call":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+132], 0","je done",
          "mov ecx, dword ptr [ebp+8]","push ecx","mov edx, dword ptr [ebp-4]","mov ecx, dword ptr [edx+132]",
          "mov eax, dword ptr [ebp-4]","mov edx, dword ptr [eax+132]","mov eax, dword ptr [edx]",
          "call dword ptr [eax+44]","done:")+end[:-1]+("ret 4",)
    if k=="member_query":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+132], 0","je absent",
          "mov ecx, dword ptr [ebp-4]","mov ecx, dword ptr [ecx+132]","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [edx+132]","mov edx, dword ptr [eax]","call dword ptr [edx+40]","jmp done",
          "absent:","mov eax, 1","done:")+end
    if k=="data_object_init":
        return local+("mov eax, dword ptr [ebp-4]","mov dword ptr [eax+4], 0","mov ecx, dword ptr [ebp-4]",
          "mov dword ptr [ecx], 0","mov edx, dword ptr [ebp-4]","mov dword ptr [edx+12], 1",
          "mov eax, dword ptr [ebp-4]","mov dword ptr [eax+8], 0","mov eax, dword ptr [ebp-4]")+end
    if k=="type_cache_init":
        return local+("mov eax, dword ptr [ebp-4]","mov dword ptr [eax+4], 0ffffffffh",
          "mov ecx, dword ptr [ebp-4]","mov dword ptr [ecx+8], 0","mov edx, dword ptr [ebp-4]",
          "mov dword ptr [edx+28], 0","mov eax, dword ptr [ebp-4]","mov dword ptr [eax+32], 0",
          "mov eax, dword ptr [ebp-4]")+end
    if k=="is_zero":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0","jmp check","iterate:",
          "mov eax, dword ptr [ebp-4]","add eax, 1","mov dword ptr [ebp-4], eax","check:",
          "cmp dword ptr [ebp-4], 3","jge yes","mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+8]",
          "cmp dword ptr [edx+ecx*4], 0","je next_zero","xor eax, eax","jmp done",
          "next_zero:","jmp iterate","yes:","mov eax, 1","done:")+end
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered framework state helper.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredFrameworkState{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
