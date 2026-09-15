extern "C" void Call004B0530();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004B0510()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 1
    __asm push 1
    __asm push 0
    __asm call Call004B0530
    __asm add esp, 0xc
    __asm pop ebp
    __asm ret
}
