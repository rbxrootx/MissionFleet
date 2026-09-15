// Exact compact x86 forwarding/initialization sequence.
extern "C" char Object0044DAE0;
extern "C" void Target004096E0();
extern "C" __declspec(naked) void Recovered00409710()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Object0044DAE0
    __asm call Target004096E0
    __asm pop ebp
    __asm ret
}
