// Exact recovered leaf accessor/value conversion.
extern "C" __declspec(naked) void Recovered004D4409()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, 65535
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
