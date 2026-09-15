// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered005314CC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax]
    __asm cdq
    __asm mov ecx, 60
    __asm idiv ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
