// Exact compact runtime/static-object initialization sequence.
extern "C" char Object005DE530;
extern "C" void Target005366B5();
extern "C" __declspec(naked) void Recovered00544005()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61476
    __asm push 0
    __asm mov ecx, offset Object005DE530
    __asm call Target005366B5
    __asm pop ebp
    __asm ret
}
