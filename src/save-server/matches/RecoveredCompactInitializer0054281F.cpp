// Exact compact x86 forwarding/initialization sequence.
extern "C" char Object00686DB0;
extern "C" void Target005428B0();
extern "C" __declspec(naked) void Recovered0054281F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Object00686DB0
    __asm call Target005428B0
    __asm pop ebp
    __asm ret
}
