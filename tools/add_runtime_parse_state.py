"""Stage repeated parser, memory-state, classification, and UTF-16 helpers."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; TARGETS=[]
def pair(g,s,k,z): TARGETS.extend((("game-server",g,k,z),("save-server",s,k,z)))
pair("004c4360","0047f290","primary_len",101)
pair("004ed24b","004cc2eb","memory_update",105)
pair("004bce50","00479aa0","classify_flags",113)
pair("004b1700","0046dc70","utf16_copy_pad",116)

def body(k):
    end=("mov esp, ebp","pop ebp","ret")
    if k=="primary_len":
        return ("push ebp","mov ebp, esp","sub esp, 8","mov dword ptr [ebp-8], 0",
          "mov eax, dword ptr [ebp+8]","mov cl, byte ptr [eax]","mov byte ptr [ebp-4], cl",
          "mov edx, dword ptr [ebp+8]","add edx, 1","mov dword ptr [ebp+8], edx","check:",
          "movsx eax, byte ptr [ebp-4]","cmp eax, 65","jl lowercase","movsx ecx, byte ptr [ebp-4]",
          "cmp ecx, 90","jle accept","lowercase:","movsx edx, byte ptr [ebp-4]","cmp edx, 97","jl done",
          "movsx eax, byte ptr [ebp-4]","cmp eax, 122","jg done","accept:","mov ecx, dword ptr [ebp-8]",
          "add ecx, 1","mov dword ptr [ebp-8], ecx","mov edx, dword ptr [ebp+8]","mov al, byte ptr [edx]",
          "mov byte ptr [ebp-4], al","mov ecx, dword ptr [ebp+8]","add ecx, 1","mov dword ptr [ebp+8], ecx",
          "jmp check","done:","mov eax, dword ptr [ebp-8]")+end
    if k=="memory_update":
        return ("push ebp","mov ebp, esp","sub esp, 8","push esi","mov dword ptr [ebp-8], ecx",
          "mov dword ptr [ebp-4], 0","jmp check","iterate:","mov eax, dword ptr [ebp-4]","add eax, 1",
          "mov dword ptr [ebp-4], eax","check:","cmp dword ptr [ebp-4], 5","jge totals",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp-8]","mov eax, dword ptr [ebp-4]",
          "mov esi, dword ptr [ebp-8]","mov eax, dword ptr [esi+eax*4+4]","mov dword ptr [edx+ecx*4+52], eax",
          "mov ecx, dword ptr [ebp-4]","mov edx, dword ptr [ebp-8]","mov eax, dword ptr [ebp-4]",
          "mov esi, dword ptr [ebp-8]","mov eax, dword ptr [esi+eax*4+24]","mov dword ptr [edx+ecx*4+72], eax",
          "jmp iterate","totals:","mov ecx, dword ptr [ebp-8]","mov edx, dword ptr [ebp-8]","mov eax, dword ptr [edx+44]",
          "mov dword ptr [ecx+92], eax","mov ecx, dword ptr [ebp-8]","mov edx, dword ptr [ebp-8]",
          "mov eax, dword ptr [edx+48]","mov dword ptr [ecx+96], eax","pop esi")+end
    if k=="classify_flags":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","and eax, 32","test eax, eax","je bit8",
          "mov dword ptr [ebp-4], 5","jmp done","bit8:","mov ecx, dword ptr [ebp+8]","and ecx, 8","test ecx, ecx","je bit4",
          "mov dword ptr [ebp-4], 1","jmp done","bit4:","mov edx, dword ptr [ebp+8]","and edx, 4","test edx, edx","je bit1",
          "mov dword ptr [ebp-4], 2","jmp done","bit1:","mov eax, dword ptr [ebp+8]","and eax, 1","test eax, eax","je bit2",
          "mov dword ptr [ebp-4], 3","jmp done","bit2:","mov ecx, dword ptr [ebp+8]","and ecx, 2","test ecx, ecx","je none",
          "mov dword ptr [ebp-4], 4","jmp done","none:","mov dword ptr [ebp-4], 0","done:","mov eax, dword ptr [ebp-4]")+end
    if k=="utf16_copy_pad":
        return ("push ebp","mov ebp, esp","push ecx","mov eax, dword ptr [ebp+8]","mov dword ptr [ebp-4], eax",
          "copy_check:","cmp dword ptr [ebp+16], 0","je pad_check","mov ecx, dword ptr [ebp+8]","mov edx, dword ptr [ebp+12]",
          "mov ax, word ptr [edx]","mov word ptr [ecx], ax","mov ecx, dword ptr [ebp+8]","xor edx, edx","mov dx, word ptr [ecx]",
          "mov eax, dword ptr [ebp+8]","add eax, 2","mov dword ptr [ebp+8], eax","mov ecx, dword ptr [ebp+12]",
          "add ecx, 2","mov dword ptr [ebp+12], ecx","test edx, edx","je pad_check","mov edx, dword ptr [ebp+16]",
          "sub edx, 1","mov dword ptr [ebp+16], edx","jmp copy_check","pad_check:","cmp dword ptr [ebp+16], 0","je done",
          "pad_loop:","mov eax, dword ptr [ebp+16]","sub eax, 1","mov dword ptr [ebp+16], eax","cmp dword ptr [ebp+16], 0","je done",
          "mov ecx, dword ptr [ebp+8]","mov word ptr [ecx], 0","mov edx, dword ptr [ebp+8]","add edx, 2","mov dword ptr [ebp+8], edx",
          "jmp pad_loop","done:","mov eax, dword ptr [ebp-4]")+end
    raise ValueError(k)

def render(a,k):
    x="\n".join(f"    __asm {v}" for v in body(k)); return f'// Exact recovered parser/runtime helper.\nextern "C" __declspec(naked) void Recovered{a.upper()}()\n{{\n{x}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredParseState{a.upper()}.cpp"; (ROOT/src).write_text(render(a,k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
