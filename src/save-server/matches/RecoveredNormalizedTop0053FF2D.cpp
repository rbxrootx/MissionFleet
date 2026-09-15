extern "C" void Call0052495C();
extern "C" void *Data00686B88;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053FF2D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686B88
    __asm call Call0052495C
    __asm pop ebp
    __asm ret
}
