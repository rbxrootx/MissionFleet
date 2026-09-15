extern "C" void Call004AA300();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004AA2E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 0
    __asm push 1
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004AA300
    __asm add esp, 0x10
    __asm pop ebp
    __asm ret
}
