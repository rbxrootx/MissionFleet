// Exact recovered leaf accessor/value conversion.
extern "C" __declspec(naked) void Recovered005343A2()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax+128]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
