
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered005119DA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov ecx, dword ptr [eax + 0x48]
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call dword ptr [eax + 0xc4]
    __asm mov dword ptr [ebp - 8], eax
    __asm cmp dword ptr [ebp - 8], 0
    __asm je loc_00511A20
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0xb0]
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_00511A20
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [ebp - 0xc], eax
loc_00511A20:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
