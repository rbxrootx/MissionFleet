// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered005256DF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax+20]
    __asm and eax, 1
    __asm neg eax
    __asm sbb eax, eax
    __asm inc eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
