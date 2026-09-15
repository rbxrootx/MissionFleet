// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered004FAB60()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm xor ecx, ecx
    __asm cmp dword ptr [eax+4], 514
    __asm sete cl
    __asm mov eax, ecx
    __asm pop ebp
    __asm ret
}
