// Exact compact runtime/static-object initialization sequence.
extern "C" char Object00686A48;
extern "C" void Target00532B0D();
extern "C" __declspec(naked) void Recovered0053F135()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61476
    __asm push 0
    __asm mov ecx, offset Object00686A48
    __asm call Target00532B0D
    __asm pop ebp
    __asm ret
}
