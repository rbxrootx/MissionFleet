// Exact recovered repeated virtual-interface leaf helper.
extern "C" __declspec(naked) void Recovered00572B03()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 112
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm add edx, 104
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+104]
    __asm push edx
    __asm call dword ptr [ecx+20]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
