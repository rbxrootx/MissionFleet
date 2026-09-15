extern "C" void Call00467290();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00467260()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push 0
    __asm push 0
    __asm push 1
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00467290
    __asm add esp, 0x14
    __asm mov dword ptr [ebp - 4], eax
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
