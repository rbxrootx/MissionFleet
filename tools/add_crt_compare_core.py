"""Stage the shared optimized CRT strcmp and memcmp implementations."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(("login-server","00422680","strcmp",129),("game-server","004b9f30","strcmp",129),("save-server","004721b0","strcmp",129),
         ("login-server","00421090","memcmp",172),("game-server","004b0370","memcmp",172),("save-server","00469ed0","memcmp",172))

STRCMP=(
"mov edx, dword ptr [esp+4]","mov ecx, dword ptr [esp+8]","test edx, 3","jne unaligned",
"aligned:","mov eax, dword ptr [edx]","cmp al, byte ptr [ecx]","jne different","or al, al","je equal",
"cmp ah, byte ptr [ecx+1]","jne different","or ah, ah","je equal","shr eax, 16",
"cmp al, byte ptr [ecx+2]","jne different","or al, al","je equal","cmp ah, byte ptr [ecx+3]","jne different",
"add ecx, 4","add edx, 4","or ah, ah","jne aligned","mov edi, edi","equal:","xor eax, eax","ret","nop",
"different:","sbb eax, eax","shl eax, 1","inc eax","ret","mov edi, edi","unaligned:","test edx, 1",
"je word_part","mov al, byte ptr [edx]","inc edx","cmp al, byte ptr [ecx]","jne different","inc ecx",
"or al, al","je equal","test edx, 2","je aligned","word_part:","mov ax, word ptr [edx]","add edx, 2",
"cmp al, byte ptr [ecx]","jne different","or al, al","je equal","cmp ah, byte ptr [ecx+1]","jne different","or ah, ah","je equal",
"_emit 083h","_emit 0c1h")

MEMCMP=(
"mov eax, dword ptr [esp+12]","test eax, eax","je zero_return","mov edx, dword ptr [esp+4]","push esi","push edi",
"mov esi, edx","mov edi, dword ptr [esp+16]","or edx, edi","and edx, 3","je aligned_setup","test eax, 1",
"je byte_pairs","mov cl, byte ptr [esi]","cmp cl, byte ptr [edi]","jne diff_flags","inc esi","inc edi","dec eax",
"je pop_return","byte_pairs:","mov cl, byte ptr [esi]","mov dl, byte ptr [edi]","cmp cl, dl","jne diff_flags",
"mov cl, byte ptr [esi+1]","mov dl, byte ptr [edi+1]","cmp cl, dl","jne diff_flags","add edi, 2","add esi, 2",
"sub eax, 2","jne byte_pairs","pop_return:","pop edi","pop esi","zero_return:","ret",
"aligned_setup:","mov ecx, eax","and eax, 3","shr ecx, 2","je remainder","repe cmpsd","je remainder",
"mov ecx, dword ptr [esi-4]","mov edx, dword ptr [edi-4]","cmp cl, dl","jne compare_result","cmp ch, dh","jne compare_result",
"shr ecx, 16","shr edx, 16","cmp cl, dl","jne compare_result","cmp ch, dh","compare_result:","mov eax, 0",
"diff_flags:","sbb eax, eax","pop edi","sbb eax, -1","pop esi","ret","remainder:","test eax, eax","je pop_return",
"mov edx, dword ptr [esi]","mov ecx, dword ptr [edi]","cmp dl, cl","jne compare_result","dec eax","je remainder_done",
"cmp dh, ch","jne compare_result","dec eax","je remainder_done","and ecx, 0ff0000h","and edx, 0ff0000h",
"cmp edx, ecx","jne compare_result","dec eax","remainder_done:","pop edi","pop esi","ret")

def render(kind):
    lines=STRCMP if kind=="strcmp" else MEMCMP
    asm="\n".join(f"    __asm {x}" for x in lines)
    return f'// Exact recovered optimized CRT {kind}.\nextern "C" __declspec(naked) int {kind}()\n{{\n{asm}\n}}\n'
def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,s in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredCRT{k.title()}{a.upper()}.cpp"; (ROOT/src).write_text(render(k),encoding="ascii")
        out.append({"component":c,"address":a,"size":s,"source":src,"symbol":f"_{k}","flags":["/Od","/GX-"],"relocations":[]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
