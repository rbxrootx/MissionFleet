
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0056B0F2()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm add eax, 0x114
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 0x104
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [eax + 0x104]
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_0056B142
    __asm mov ecx, dword ptr [ebp - 4]
    __asm add ecx, 0x104
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [ecx]
    __asm mov dword ptr [edx], eax
    __asm mov eax, dword ptr [ecx + 4]
    __asm mov dword ptr [edx + 4], eax
    __asm mov eax, dword ptr [ecx + 8]
    __asm mov dword ptr [edx + 8], eax
    __asm mov ecx, dword ptr [ecx + 0xc]
    __asm mov dword ptr [edx + 0xc], ecx
loc_0056B142:
    __asm mov eax, 1
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
