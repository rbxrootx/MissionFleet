extern "C" void Call0044B3C0();
extern "C" void *Data00686A40;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00449EA6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686A40
    __asm call Call0044B3C0
    __asm pop ebp
    __asm ret
}
