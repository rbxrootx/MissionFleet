
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004E0807()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x14
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov dword ptr [ebp - 4], 1
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004E0853
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call dword ptr [edx + 0x60]
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [ebp - 0xc], eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm je loc_004E084C
    __asm push 1
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [eax + 4]
    __asm mov dword ptr [ebp - 0x14], eax
    __asm jmp loc_004E0853
loc_004E084C:
    __asm mov dword ptr [ebp - 0x14], 0
loc_004E0853:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
