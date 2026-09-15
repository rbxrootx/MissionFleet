extern "C" void Call0047C600();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0047C230()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm fnstsw word ptr [ebp - 4]
    __asm fnclex
    __asm mov ax, word ptr [ebp - 4]
    __asm push eax
    __asm call Call0047C600
    __asm add esp, 4
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
