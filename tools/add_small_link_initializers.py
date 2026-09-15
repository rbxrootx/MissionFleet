"""Stage four small unresolved initializer and allocation-failure link targets."""
import json
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]
TARGETS=(
 ("game-server","004cfdac","alloc","AllocationFailure004CFDAC","AllocState004CFDAC","AllocText004CFDAC","AllocCall004B0320"),
 ("save-server","004a2edc","alloc","AllocationFailure004A2EDC","AllocState004A2EDC","AllocText004A2EDC","AllocCall00465920"),
 ("game-server","00529eea","rect","Target00529EE0","RectState00529EEA",None,"RectCall00535D5F"),
 ("save-server","005115ea","rect","Target005115E0","RectState005115EA",None,"RectCall005321D5"),
)

def render(kind,name,state,text_symbol,call):
    if kind=="alloc":
        return f'''// Exact recovered allocation-failure adapter.
extern "C" unsigned char {state};
extern "C" unsigned char {text_symbol};
extern "C" void {call}();
extern "C" __declspec(naked) void {name}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], offset {state}
    __asm push offset {text_symbol}
    __asm lea eax, dword ptr [ebp-4]
    __asm push eax
    __asm call {call}
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}}
'''
    return f'''// Exact recovered default rectangle initializer.
extern "C" unsigned char {state};
extern "C" void {call}();
void {name}();
__declspec(naked) void {name}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 0
    __asm push 80000000h
    __asm push 80000000h
    __asm mov ecx, offset {state}
    __asm call {call}
    __asm pop ebp
    __asm ret
}}
'''

def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a,k,name,state,text_symbol,call in TARGETS:
        if (c,a) in old: continue
        src=f"src/{c}/matches/RecoveredSmallLink{a.upper()}.cpp"; (ROOT/src).write_text(render(k,name,state,text_symbol,call),encoding="ascii")
        symbol=f"_{name}" if k=="alloc" else f"?{name}@@YAXXZ"
        rel=([{"offset":7,"symbol":f"_{state}","kind":"absolute"},{"offset":12,"symbol":f"_{text_symbol}","kind":"absolute"},{"offset":21,"symbol":f"_{call}"}]
             if k=="alloc" else [{"offset":18,"symbol":f"_{state}","kind":"absolute"},{"offset":23,"symbol":f"_{call}"}])
        out.append({"component":c,"address":a,"size":29,"source":src,"symbol":symbol,"flags":["/Od","/GX-"],"relocations":rel})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
