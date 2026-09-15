// Exact compact runtime/static-object initialization sequence.
extern "C" char Object00686C28;
extern "C" void Target005248BF();
extern "C" __declspec(naked) void Recovered0053FEAF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61475
    __asm push 0
    __asm mov ecx, offset Object00686C28
    __asm call Target005248BF
    __asm pop ebp
    __asm ret
}
