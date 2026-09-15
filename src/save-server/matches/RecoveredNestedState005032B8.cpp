// Exact recovered nested-state leaf helper.
extern "C" __declspec(naked) void Recovered005032B8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [eax+128], ecx
    __asm mov eax, 1
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
