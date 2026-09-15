// Exact recovered class-registration synchronization bridge.
extern "C" void Target004708B0();
extern "C" __declspec(naked) void Recovered0046A180()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 13
    __asm call Target004708B0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
