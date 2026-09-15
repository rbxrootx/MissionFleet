extern "C" void Call005258CF();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00525859()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ax, word ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call005258CF
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
