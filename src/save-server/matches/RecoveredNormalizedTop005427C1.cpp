extern "C" void Call005427F0();
extern "C" void *Data00686DA8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005427C1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686DA8
    __asm call Call005427F0
    __asm pop ebp
    __asm ret
}
