
// Exact recovered shared map/framework lookup.
extern "C" __declspec(naked) void Recovered0044F817()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0x24], 0
    __asm je loc_0044F852
    __asm push 0
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm push -2
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x28]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ecx + 0x24]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x24]
    __asm mov edx, dword ptr [eax]
    __asm call dword ptr [edx + 0x14]
    __asm test eax, eax
    __asm je loc_0044F852
    __asm mov eax, 1
    __asm jmp loc_0044F878
loc_0044F852:
    __asm push 0
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm push -2
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 0x28]
    __asm push edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x1c]
    __asm mov ecx, dword ptr [ecx + 0x1c]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x1c]
    __asm mov edx, dword ptr [eax + 0x1c]
    __asm mov eax, dword ptr [edx]
    __asm call dword ptr [eax + 0x14]
loc_0044F878:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
