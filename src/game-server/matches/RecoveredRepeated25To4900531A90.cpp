extern "C" void Call00531B06();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00531A90()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ax, word ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00531B06
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
