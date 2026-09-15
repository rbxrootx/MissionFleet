
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00426A40()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ax, word ptr [eax]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
