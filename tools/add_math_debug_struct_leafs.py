"""Stage repeated math, debug-object, string, and structure leaf functions."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def add(c,a,k,s,*x): TARGETS.append((c,a,k,s,x))
def pair(g,s,k,z,*x): add("game-server",g,k,z,*x); add("save-server",s,k,z,*x)
pair("004bcf10","00479b60","exponent",45)
add("save-server","00422110","debug_compare",46); add("save-server","00422190","debug_compare",46)
add("save-server","00404cf0","debug_set",47,4); add("save-server","004087a0","debug_set",47,4)
add("save-server","00411010","debug_set",47,8); add("save-server","004138d0","debug_set",47,8)
add("save-server","00413910","debug_set",47,12); add("save-server","00423220","debug_set",47,12)
pair("004acef0","00469080","utf16_length",48)
add("save-server","0040c200","debug_span",50,4); add("save-server","00413690","debug_span",50,4)
add("save-server","004136d0","debug_span",50,8); add("save-server","004227f0","debug_span",50,8)
pair("004893c0","00429880","quad_init",55)

def fill(size="44h",count="11h"):
    return ("push ebp","mov ebp, esp",f"sub esp, {size}","push ebx","push esi","push edi","push ecx",
      f"lea edi, dword ptr [ebp-{size}]",f"mov ecx, {count}","mov eax, 0cccccccch","rep stosd","pop ecx","mov dword ptr [ebp-4], ecx")
def restore(ret=None):
    x=("pop edi","pop esi","pop ebx","mov esp, ebp","pop ebp"); return x+((f"ret {ret}",) if ret else ("ret",))
def body(k,x):
    end=("mov esp, ebp","pop ebp","ret")
    if k=="exponent":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+14]","and eax, 0ffffh",
          "and eax, 7ff0h","sar eax, 4","mov word ptr [ebp-4], ax","mov cx, word ptr [ebp-4]",
          "sub cx, 3feh","mov word ptr [ebp-4], cx","movsx eax, word ptr [ebp-4]")+end
    if k=="debug_compare":
        return ("push ebp","mov ebp, esp","sub esp, 40h","push ebx","push esi","push edi",
          "lea edi, dword ptr [ebp-40h]","mov ecx, 10h","mov eax, 0cccccccch","rep stosd",
          "mov eax, dword ptr [ebp+8]","mov ecx, dword ptr [ebp+12]",
          "mov edx, dword ptr [eax]","xor eax, eax","cmp edx, dword ptr [ecx]","setne al")+restore()
    if k=="debug_set":
        (offset,)=x
        return fill()+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]",f"mov dword ptr [eax+{offset}], ecx")+restore(4)
    if k=="utf16_length":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-4], eax",
          "scan:","mov ecx, dword ptr [ebp-4]","xor edx, edx","mov dx, word ptr [ecx]",
          "mov eax, dword ptr [ebp-4]","add eax, 2","mov dword ptr [ebp-4], eax","test edx, edx","je done_scan",
          "jmp scan","done_scan:","mov eax, dword ptr [ebp-4]","sub eax, dword ptr [ebp+8]","sar eax, 1","sub eax, 1")+end
    if k=="debug_span":
        (offset,)=x
        return fill()+("mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp-4]",
          f"mov eax, dword ptr [eax+{offset}]","sub eax, dword ptr [ecx]","sar eax, 2")+restore()
    if k=="quad_init":
        return ("push ebp","mov ebp, esp","push ecx","mov dword ptr [ebp-4], 0cccccccch","mov dword ptr [ebp-4], ecx",
          "mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+8]","mov dword ptr [eax], ecx",
          "mov edx, dword ptr [ebp-4]","mov eax, dword ptr [edx+4]","mov dword ptr [ebp+12], eax",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp+16]","mov dword ptr [ecx+8], edx",
          "mov eax, dword ptr [ebp-4]","mov ecx, dword ptr [ebp+20]","mov dword ptr [eax+12], ecx")+end[:-1]+("ret 16",)
    raise ValueError(k)

def render(a,k,x):
    v="\n".join(f"    __asm {q}" for q in body(k,x)); return f'// Exact recovered math/debug structure leaf.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{v}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s,x in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredMathDebug{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k,x),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
