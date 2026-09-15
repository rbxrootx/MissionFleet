extern "C" void Call004CC4BC();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004CC0FF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm push 4
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call004CC4BC
    __asm add esp, 0x10
    __asm pop ebp
    __asm ret 0xc
}
