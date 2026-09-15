// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered005512A4()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [eax+116], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
