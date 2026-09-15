// Exact compact runtime/static-object initialization sequence.
extern "C" char Object005DE710;
extern "C" void Target00530ABF();
extern "C" __declspec(naked) void Recovered00544D7F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61475
    __asm push 0
    __asm mov ecx, offset Object005DE710
    __asm call Target00530ABF
    __asm pop ebp
    __asm ret
}
