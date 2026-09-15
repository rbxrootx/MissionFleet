
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00507CFF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0x5c]
    __asm mov dword ptr [ebp - 4], eax
loc_00507D16:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_00507D3E
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0x60]
    __asm mov dword ptr [ebp - 8], eax
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0x84]
    __asm jmp loc_00507D16
loc_00507D3E:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
