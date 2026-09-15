"""Stage repeated framework dispatch and state leaf functions."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def pair(g,s,k,z): TARGETS.extend((("game-server",g,k,z),("save-server",s,k,z)))
pair("00572aad","0057b45d","get_data",43)
pair("00572ad8","0057b488","get_data_here",43)
pair("00572b65","0057b515","enum_format",43)
pair("0050b937","004f08e7","file_close",45)
pair("00568374","00570d24","bounded_lookup",45)
pair("0052da3f","0051515e","set_flag",45)
pair("005218b0","0050aa30","release_member",46)
pair("004f2a32","004d0962","final_release",47)
pair("004faee3","004d9fe3","clear_outputs",48)
pair("004fab30","004d9c30","enter_key",48)

def body(k):
    local=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], ecx"); end=("mov esp, ebp","pop ebp","ret")
    if k in ("get_data","get_data_here","enum_format"):
        slot={"get_data":12,"get_data_here":16,"enum_format":32}[k]
        prefix=("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","sub eax, 112",
          "mov dword ptr [ebp-4], eax")
        args=("mov ecx, dword ptr [ebp+16]","push ecx","mov edx, dword ptr [ebp+12]","push edx")
        tail=("mov eax, dword ptr [ebp-4]","add eax, 104","mov ecx, dword ptr [ebp-4]",
          "mov edx, dword ptr [ecx+104]","push eax",f"call dword ptr [edx+{slot}]","mov esp, ebp","pop ebp",
          "ret 12")
        return prefix+args+tail
    if k=="file_close":
        return local+("mov eax, dword ptr [ebp-4]","mov edx, dword ptr [eax]","mov ecx, dword ptr [ebp-4]",
          "call dword ptr [edx+152]","test eax, eax","jne close","jmp done","close:",
          "mov eax, dword ptr [ebp-4]","mov edx, dword ptr [eax]","mov ecx, dword ptr [ebp-4]",
          "call dword ptr [edx+132]","done:")+end
    if k=="bounded_lookup":
        return local+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","cmp ecx, dword ptr [eax+4]",
          "jl lower","cmp dword ptr [ebp+8], 0","jge invalid","lower:","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [edx]","mov ecx, dword ptr [ebp+8]","mov eax, dword ptr [eax+ecx*4]",
          "jmp done","invalid:","xor eax, eax","done:")+end[:-1]+("ret 4",)
    if k=="set_flag":
        return local+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax+168], ecx",
          "mov edx, dword ptr [ebp-4]","mov eax, dword ptr [edx+184]","or al, 1",
          "mov ecx, dword ptr [ebp-4]","mov dword ptr [ecx+184], eax")+end[:-1]+("ret 4",)
    if k=="release_member":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+132], 0","je done",
          "mov ecx, dword ptr [ebp-4]","mov ecx, dword ptr [ecx+132]","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [edx+132]","mov edx, dword ptr [eax]","call dword ptr [edx+60]","done:")+end
    if k=="final_release":
        return local+("mov eax, dword ptr [ebp-4]","cmp dword ptr [eax+28], 0","je fallback",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ecx]",
          "mov ecx, dword ptr [ebp-4]","call dword ptr [edx+96]",
          "jmp done","fallback:","mov eax, dword ptr [ebp-4]","mov edx, dword ptr [eax]",
          "mov ecx, dword ptr [ebp-4]","call dword ptr [edx+172]","done:")+end
    if k=="clear_outputs":
        return local+("cmp dword ptr [ebp+16], 0","je no_long","mov eax, dword ptr [ebp+16]","mov dword ptr [eax], 0",
          "no_long:","cmp dword ptr [ebp+12], 0","je done","cmp dword ptr [ebp+8], 0","je done",
          "mov ecx, dword ptr [ebp+8]","mov byte ptr [ecx], 0","done:","xor eax, eax")+end[:-1]+("ret 12",)
    if k=="enter_key":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]",
          "cmp dword ptr [eax+4], 100h","jne no","mov ecx, dword ptr [ebp+8]","cmp dword ptr [ecx+8], 13",
          "jne no","mov dword ptr [ebp-4], 1","jmp done","no:","mov dword ptr [ebp-4], 0",
          "done:","mov eax, dword ptr [ebp-4]")+end
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered framework dispatch leaf.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredFrameworkDispatch{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
