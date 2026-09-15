extern "C" void Call005427D0();
extern "C" void *Data00686DA4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054278C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686DA4
    __asm call Call005427D0
    __asm pop ebp
    __asm ret
}
