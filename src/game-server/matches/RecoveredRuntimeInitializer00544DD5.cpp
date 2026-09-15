// Exact compact runtime/static-object initialization sequence.
extern "C" char Object005DE670;
extern "C" void Target00530B2B();
extern "C" __declspec(naked) void Recovered00544DD5()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61473
    __asm push 0
    __asm mov ecx, offset Object005DE670
    __asm call Target00530B2B
    __asm pop ebp
    __asm ret
}
