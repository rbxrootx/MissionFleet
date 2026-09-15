extern "C" void Call005248F0();
extern "C" void *Data00686C28;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053FED7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686C28
    __asm call Call005248F0
    __asm pop ebp
    __asm ret
}
