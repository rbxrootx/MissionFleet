
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004FAE98()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm cmp dword ptr [eax + 4], 0
    __asm jle loc_004FAEDF
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [ecx + 8], 1
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [ebp - 8], edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004FAED8
    __asm push 1
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [edx + 4]
    __asm mov dword ptr [ebp - 0x10], eax
    __asm jmp loc_004FAEDF
loc_004FAED8:
    __asm mov dword ptr [ebp - 0x10], 0
loc_004FAEDF:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
