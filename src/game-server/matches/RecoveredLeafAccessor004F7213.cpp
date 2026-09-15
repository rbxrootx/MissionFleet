// Exact recovered leaf accessor/value conversion.
extern "C" __declspec(naked) void Recovered004F7213()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax+36]
    __asm and eax, 16
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
