"""Stage the shared runtime flag-to-control-word translator."""
import json
from pathlib import Path

from tools.add_call_stubs import append_records

ROOT = Path(__file__).resolve().parents[1]
TARGETS = (("game-server", "004bebe0", 346), ("save-server", "0047c4a0", 346))

BODY = (
"push ebp","mov ebp, esp","sub esp, 0ch","mov word ptr [ebp-4], 0",
"mov eax, dword ptr [ebp+8]","and eax, 10h","test eax, eax","je f8",
"mov cx, word ptr [ebp-4]","or cl, 1","mov word ptr [ebp-4], cx","f8:",
"mov edx, dword ptr [ebp+8]","and edx, 8","test edx, edx","je f4",
"mov ax, word ptr [ebp-4]","or al, 4","mov word ptr [ebp-4], ax","f4:",
"mov ecx, dword ptr [ebp+8]","and ecx, 4","test ecx, ecx","je f2",
"mov dx, word ptr [ebp-4]","or dl, 8","mov word ptr [ebp-4], dx","f2:",
"mov eax, dword ptr [ebp+8]","and eax, 2","test eax, eax","je f1",
"mov cx, word ptr [ebp-4]","or cl, 10h","mov word ptr [ebp-4], cx","f1:",
"mov edx, dword ptr [ebp+8]","and edx, 1","test edx, edx","je f80000",
"mov ax, word ptr [ebp-4]","or al, 20h","mov word ptr [ebp-4], ax","f80000:",
"mov ecx, dword ptr [ebp+8]","and ecx, 80000h","test ecx, ecx","je group300",
"mov dx, word ptr [ebp-4]","or dl, 2","mov word ptr [ebp-4], dx","group300:",
"mov eax, dword ptr [ebp+8]","and eax, 300h","mov dword ptr [ebp-8], eax",
"cmp dword ptr [ebp-8], 200h","ja group_high","cmp dword ptr [ebp-8], 200h","je group200",
"cmp dword ptr [ebp-8], 0","je group0","cmp dword ptr [ebp-8], 100h","je group100","jmp group_done",
"group_high:","cmp dword ptr [ebp-8], 300h","je group300v","jmp group_done",
"group0:","mov cx, word ptr [ebp-4]","mov word ptr [ebp-4], cx","jmp group_done",
"group200:","mov dx, word ptr [ebp-4]","or dh, 8","mov word ptr [ebp-4], dx","jmp group_done",
"group100:","mov ax, word ptr [ebp-4]","or ah, 4","mov word ptr [ebp-4], ax","jmp group_done",
"group300v:","mov cx, word ptr [ebp-4]","or ch, 0ch","mov word ptr [ebp-4], cx","group_done:",
"mov edx, dword ptr [ebp+8]","and edx, 30000h","mov dword ptr [ebp-0ch], edx",
"cmp dword ptr [ebp-0ch], 0","je mode0","cmp dword ptr [ebp-0ch], 10000h","je mode1",
"cmp dword ptr [ebp-0ch], 20000h","je mode2","jmp mode_done",
"mode0:","mov ax, word ptr [ebp-4]","or ah, 3","mov word ptr [ebp-4], ax","jmp mode_done",
"mode1:","mov cx, word ptr [ebp-4]","or ch, 2","mov word ptr [ebp-4], cx","jmp mode_done",
"mode2:","mov dx, word ptr [ebp-4]","mov word ptr [ebp-4], dx","mode_done:",
"mov eax, dword ptr [ebp+8]","and eax, 40000h","test eax, eax","je done",
"mov cx, word ptr [ebp-4]","or ch, 10h","mov word ptr [ebp-4], cx","done:",
"mov ax, word ptr [ebp-4]","mov esp, ebp","pop ebp","ret")

def render(address):
    lines="\n".join(f"    __asm {line}" for line in BODY)
    return ("// Exact recovered runtime flag-to-control-word translator.\n"
            f'extern "C" __declspec(naked) void Recovered{address.upper()}()\n{{\n{lines}\n}}\n')

def main():
    path=ROOT/"config/NF2_2062/verifications.json"; document=json.loads(path.read_text(encoding="utf-8"))
    existing={(item["component"],item["address"]) for item in document["matches"]}; records=[]
    for component,address,size in TARGETS:
        if (component,address) in existing: continue
        source=f"src/{component}/matches/RecoveredFlagTranslate{address.upper()}.cpp"
        (ROOT/source).write_text(render(address),encoding="ascii")
        records.append({"component":component,"address":address,"size":size,"source":source,
                        "symbol":f"_Recovered{address.upper()}","flags":["/Od","/GX-"],"relocations":[]})
    if records: append_records(path,records)
    print(f"Staged {len(records)} functions; no progress credited until verification.")

if __name__=="__main__": main()
