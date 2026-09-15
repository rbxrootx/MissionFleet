"""Stage the repeated two-call table probe family with recovered link targets."""
import json
import struct
from pathlib import Path
from tools.add_call_stubs import append_records
ROOT=Path(__file__).resolve().parents[1]; BASE=0x401000
PAIRS=(
 ("0049b0b0","004576d0"),("0049afb0","004575d0"),("0049aeb0","004574d0"),("0049adb0","004573d0"),
 ("0049b070","00457690"),("0049af70","00457590"),("0049ae70","00457490"),("0049b030","00457650"),
 ("0049af30","00457550"),("0049ae30","00457450"),("0049b0f0","00457710"),("0049aff0","00457610"),
 ("0049aef0","00457510"),("0049adf0","00457410"),
)
TARGETS=tuple(x for g,s in PAIRS for x in (("game-server",g),("save-server",s)))

def call_target(component,address,operand_offset):
    data=(ROOT/f"private-inputs/decompilation/regions/{component}.bin").read_bytes(); start=int(address,16)-BASE
    displacement=struct.unpack_from("<i",data,start+operand_offset)[0]
    return int(address,16)+operand_offset+4+displacement

def render(address,first,second):
    return f'''// Exact recovered conditional table probe.
extern "C" void Probe{first:08X}();
extern "C" void Probe{second:08X}();
extern "C" __declspec(naked) void Recovered{address.upper()}()
{{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm lea eax, dword ptr [ebp+8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm call Probe{first:08X}
    __asm and eax, 0ffh
    __asm test eax, eax
    __asm je failed
    __asm mov ecx, dword ptr [ebp+12]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm push edx
    __asm mov ecx, dword ptr [ebp-4]
    __asm call Probe{second:08X}
    __asm mov al, 1
    __asm jmp done
    __asm failed:
    __asm xor al, al
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}}
'''

def main():
    p=ROOT/"config/NF2_2062/verifications.json"; d=json.loads(p.read_text(encoding="utf-8")); old={(m["component"],m["address"]) for m in d["matches"]}; out=[]
    for c,a in TARGETS:
        if (c,a) in old: continue
        first=call_target(c,a,15); second=call_target(c,a,40)
        src=f"src/{c}/matches/RecoveredTableProbe{a.upper()}.cpp"; (ROOT/src).write_text(render(a,first,second),encoding="ascii")
        out.append({"component":c,"address":a,"size":56,"source":src,"symbol":f"_Recovered{a.upper()}","flags":["/Od","/GX-"],
          "relocations":[{"offset":15,"symbol":f"_Probe{first:08X}"},{"offset":40,"symbol":f"_Probe{second:08X}"}]})
    if out: append_records(p,out)
    print(f"Staged {len(out)} functions; no progress credited until verification.")
if __name__=="__main__": main()
