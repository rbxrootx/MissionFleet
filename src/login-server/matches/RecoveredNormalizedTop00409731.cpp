extern "C" void Call00409820();
extern "C" void *Data0044DAE0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00409731()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data0044DAE0
    __asm call Call00409820
    __asm pop ebp
    __asm ret
}
