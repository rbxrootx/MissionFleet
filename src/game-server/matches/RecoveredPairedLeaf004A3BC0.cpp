// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered004A3BC0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm xor ecx, ecx
    __asm cmp dword ptr [eax], 0
    __asm sete cl
    __asm mov eax, ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
