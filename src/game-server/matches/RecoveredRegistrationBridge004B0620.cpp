// Exact recovered class-registration synchronization bridge.
extern "C" void Target004B51F0();
extern "C" __declspec(naked) void Recovered004B0620()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 13
    __asm call Target004B51F0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
