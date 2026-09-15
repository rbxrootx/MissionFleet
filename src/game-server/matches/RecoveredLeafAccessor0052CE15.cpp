// Exact recovered leaf accessor/value conversion.
extern "C" __declspec(naked) void Recovered0052CE15()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 76
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
