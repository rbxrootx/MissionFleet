"""Stage the high-fanout table-probe index resolvers."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(
 ("game-server","0049a1e0","Probe0049A1E0","ProbeFile0049A1E0","ProbeExpr0049A1E0","Report004B0B30",0x92d),
 ("save-server","00456800","Probe00456800","ProbeFile00456800","ProbeExpr00456800","Report0046CE60",0x92c),
)

def render(name,file_symbol,expr_symbol,report,line):
    return f'''// Exact recovered high-fanout table index resolver.
extern "C" unsigned char {file_symbol};
extern "C" unsigned char {expr_symbol};
extern "C" void {report}();
extern "C" __declspec(naked) void {name}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm retry_check:
    __asm mov eax, dword ptr [ebp-8]
    __asm cmp dword ptr [eax+16], 0
    __asm jne checked
    __asm push offset {expr_symbol}
    __asm push 0
    __asm push {line}
    __asm push offset {file_symbol}
    __asm push 2
    __asm call {report}
    __asm add esp, 20
    __asm cmp eax, 1
    __asm jne checked
    __asm int 3
    __asm checked:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne retry_check
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov al, byte ptr [edx+24]
    __asm test eax, eax
    __asm je ranged
    __asm mov dword ptr [ebp-4], 0
    __asm jmp loop_check
    __asm iterate:
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm loop_check:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp eax, dword ptr [edx+12]
    __asm jae not_found
    __asm mov ecx, dword ptr [ebp-4]
    __asm imul ecx, ecx, 48
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+16]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [eax+ecx+8]
    __asm cmp eax, dword ptr [edx]
    __asm jne continue_loop
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx], edx
    __asm mov al, 1
    __asm jmp done
    __asm continue_loop:
    __asm jmp iterate
    __asm not_found:
    __asm xor al, al
    __asm jmp done
    __asm ranged:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+12]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+16]
    __asm mov edx, dword ptr [eax+8]
    __asm lea eax, dword ptr [ecx+edx-1]
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp dword ptr [ecx], eax
    __asm jbe adjust
    __asm xor al, al
    __asm jmp done
    __asm adjust:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+16]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm sub edx, dword ptr [eax+8]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax], edx
    __asm mov al, 1
    __asm done:
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}}
'''

def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,name,file_symbol,expr_symbol,report,line in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredProbeResolver{a.upper()}.cpp"; (ROOT/src).write_text(render(name,file_symbol,expr_symbol,report,line),encoding="ascii")
        out.append({"component":c,"address":a,"size":202,"source":src,"symbol":f"_{name}","flags":["/Od","/GX-"],
          "relocations":[{"offset":22,"symbol":f"_{expr_symbol}","kind":"absolute"},{"offset":34,"symbol":f"_{file_symbol}","kind":"absolute"},{"offset":41,"symbol":f"_{report}"}]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
