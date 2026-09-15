
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00479DD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm wait
    __asm fnstsw word ptr [ebp - 4]
    __asm movsx eax, word ptr [ebp - 4]
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
