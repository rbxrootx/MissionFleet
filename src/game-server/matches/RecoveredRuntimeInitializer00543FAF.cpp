// Exact compact runtime/static-object initialization sequence.
extern "C" char Object005DE5D0;
extern "C" void Target00536649();
extern "C" __declspec(naked) void Recovered00543FAF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 61474
    __asm push 0
    __asm mov ecx, offset Object005DE5D0
    __asm call Target00536649
    __asm pop ebp
    __asm ret
}
