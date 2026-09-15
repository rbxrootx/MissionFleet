// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered00527B52()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax+104]
    __asm and eax, 8
    __asm neg eax
    __asm sbb eax, eax
    __asm neg eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
