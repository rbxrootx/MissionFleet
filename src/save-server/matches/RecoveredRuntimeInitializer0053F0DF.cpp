// Exact compact runtime/static-object initialization sequence.
extern "C" char Object00686AE8;
extern "C" void Target00532AA1();
extern "C" __declspec(naked) void Recovered0053F0DF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61474
    __asm push 0
    __asm mov ecx, offset Object00686AE8
    __asm call Target00532AA1
    __asm pop ebp
    __asm ret
}
