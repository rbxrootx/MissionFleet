extern "C" void Call004F1872();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004F280E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov ecx, dword ptr [eax + 0x34]
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 4], edx
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004F283E
    __asm push 1
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [edx + 4]
    __asm mov dword ptr [ebp - 0x10], eax
    __asm jmp loc_004F2845
loc_004F283E:
    __asm mov dword ptr [ebp - 0x10], 0
loc_004F2845:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov dword ptr [eax + 0x34], 0
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call Call004F1872
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
