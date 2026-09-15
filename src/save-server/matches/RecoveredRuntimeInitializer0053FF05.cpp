// Exact compact runtime/static-object initialization sequence.
extern "C" char Object00686B88;
extern "C" void Target0052492B();
extern "C" __declspec(naked) void Recovered0053FF05()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61473
    __asm push 0
    __asm mov ecx, offset Object00686B88
    __asm call Target0052492B
    __asm pop ebp
    __asm ret
}
