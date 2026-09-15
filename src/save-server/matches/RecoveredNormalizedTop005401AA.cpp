extern "C" void Call005407A0();
extern "C" void *Data00686D24;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005401AA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686D24
    __asm call Call005407A0
    __asm pop ebp
    __asm ret
}
