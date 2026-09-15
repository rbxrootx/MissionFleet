extern "C" void Call004C2100();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004C1FC0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 2
    __asm push 0
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004C2100
    __asm add esp, 0xc
    __asm pop ebp
    __asm ret
}
