"""Stage repeated state, data-copy, hashing, and geometry leaf functions."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def add(c,a,k,s): TARGETS.append((c,a,k,s))
def pair(g,s,k,z): add("game-server",g,k,z); add("save-server",s,k,z)
pair("00561a02","00567902","cursor_state",57)
pair("00535dce","00532244","rect_init",57)
add("save-server","0040c960","debug_copy",57); add("save-server","00422b70","debug_copy",57)
add("save-server","0040c910","debug_pair",58); add("save-server","00420fd0","debug_pair",58)
pair("004b16c0","0046dc30","utf16_copy",61)
pair("004cf090","004a22da","string_hash",61)
pair("0049270d","0044ed32","style_bool",61)
pair("00489450","0042c340","counter_update",62)
pair("00510b15","004f9d45","scroll_style",64)
add("save-server","004137e0","debug_triple",64); add("save-server","004228b0","debug_triple",64)

def fill(): return ("push ebp","mov ebp, esp","sub esp, 44h","push ebx","push esi","push edi","push ecx","lea edi, dword ptr [ebp-44h]","mov ecx, 11h","mov eax, 0cccccccch","rep stosd","pop ecx","mov dword ptr [ebp-4], ecx")
def restore(n): return ("pop edi","pop esi","pop ebx","mov esp, ebp","pop ebp",f"ret {n}")
def body(k):
    local=("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], ecx"); end=("mov esp, ebp","pop ebp","ret")
    if k=="cursor_state":
        return local+("mov eax, dword ptr [ebp-4]","xor ecx, ecx","mov cl, byte ptr [eax+64]","test ecx, ecx","jne ready",
          "mov edx, dword ptr [ebp-4]","mov eax, dword ptr [edx]","mov ecx, dword ptr [ebp-4]","call dword ptr [eax+104]",
          "mov ecx, dword ptr [ebp-4]","mov byte ptr [ecx+65], al","mov edx, dword ptr [ebp-4]","mov byte ptr [edx+64], 1",
          "ready:","mov eax, dword ptr [ebp-4]","xor ecx, ecx","mov cl, byte ptr [eax+65]","mov eax, ecx")+end
    if k=="rect_init":
        return local+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax], ecx",
          "mov edx, dword ptr [ebp+8]","add edx, dword ptr [ebp+16]","mov eax, dword ptr [ebp-4]","mov dword ptr [eax+8], edx",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+12]","mov dword ptr [ecx+4], edx",
          "mov eax, dword ptr [ebp+12]","add eax, dword ptr [ebp+20]","mov ecx, dword ptr [ebp-4]","mov dword ptr [ecx+12], eax",
          "mov eax, dword ptr [ebp-4]")+end[:-1]+("ret 16",)
    if k=="debug_copy":
        return fill()+("mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [eax]","mov edx, dword ptr [eax+4]",
          "mov eax, dword ptr [ebp-4]","mov dword ptr [eax], ecx","mov dword ptr [eax+4], edx","mov eax, dword ptr [ebp-4]")+restore(4)
    if k=="debug_pair":
        return fill()+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax], ecx",
          "mov edx, dword ptr [ebp-4]","mov eax, dword ptr [ebp+12]","mov dword ptr [edx+4], eax","mov eax, dword ptr [ebp-4]")+restore(8)
    if k=="utf16_copy":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-4], eax",
          "copy:","mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+12]","mov ax, word ptr [edx]","mov word ptr [ecx], ax",
          "mov ecx, dword ptr [ebp-4]","xor edx, edx","mov dx, word ptr [ecx]","mov eax, dword ptr [ebp-4]","add eax, 2",
          "mov dword ptr [ebp-4], eax","mov ecx, dword ptr [ebp+12]","add ecx, 2","mov dword ptr [ebp+12], ecx",
          "test edx, edx","je done","jmp copy","done:","mov eax, dword ptr [ebp+8]")+end
    if k=="string_hash":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0","next:","mov eax, dword ptr [ebp+8]",
          "movsx ecx, byte ptr [eax]","test ecx, ecx","je done","mov edx, dword ptr [ebp-4]","shl edx, 5","add edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [ebp+8]","movsx ecx, byte ptr [eax]","add edx, ecx","mov dword ptr [ebp-4], edx",
          "mov edx, dword ptr [ebp+8]","add edx, 1","mov dword ptr [ebp+8], edx","jmp next","done:","mov eax, dword ptr [ebp-4]")+end[:-1]+("ret 4",)
    if k=="style_bool":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-4], ecx","mov eax, dword ptr [ebp-4]",
          "mov ecx, dword ptr [eax+112]","and ecx, 1000h","test ecx, ecx","je no","mov edx, dword ptr [ebp-4]",
          "mov eax, dword ptr [edx+108]","and eax, 1","test eax, eax","je no","mov dword ptr [ebp-8], 1","jmp done",
          "no:","mov dword ptr [ebp-8], 0","done:","mov eax, dword ptr [ebp-8]")+end
    if k=="counter_update":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0cccccccch","mov dword ptr [ebp-4], ecx",
          "mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax+292]","add ecx, 1","mov edx, dword ptr [ebp-4]","mov dword ptr [edx+292], ecx",
          "mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [eax+300]","add ecx, dword ptr [ebp+8]","mov edx, dword ptr [ebp-4]","mov dword ptr [edx+300], ecx")+end[:-1]+("ret 4",)
    if k=="scroll_style":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-8], ecx","mov dword ptr [ebp-4], 0",
          "mov eax, dword ptr [ebp-8]","cmp dword ptr [eax+112], 0","je second","mov ecx, dword ptr [ebp-4]","or ecx, 100000h","mov dword ptr [ebp-4], ecx",
          "second:","mov edx, dword ptr [ebp-8]","cmp dword ptr [edx+116], 0","je done","mov eax, dword ptr [ebp-4]","or eax, 200000h","mov dword ptr [ebp-4], eax",
          "done:","mov eax, dword ptr [ebp-4]")+end
    if k=="debug_triple":
        return fill()+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax], ecx",
          "mov edx, dword ptr [ebp-4]","mov eax, dword ptr [ebp+12]","mov dword ptr [edx+4], eax",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+16]","mov dword ptr [ecx+8], edx")+restore(12)
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered state/data leaf.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredStateData{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
