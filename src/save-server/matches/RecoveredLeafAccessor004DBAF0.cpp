// Exact recovered leaf accessor/value conversion.
extern "C" __declspec(naked) void Recovered004DBAF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm neg eax
    __asm sbb eax, eax
    __asm and eax, 2
    __asm add eax, 1
    __asm shl eax, 1
    __asm pop ebp
    __asm ret
}
