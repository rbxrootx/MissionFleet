extern "C" void Call004B13C0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004B14D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call004B13C0
    __asm add esp, 0x10
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm pop ebp
    __asm ret
}
