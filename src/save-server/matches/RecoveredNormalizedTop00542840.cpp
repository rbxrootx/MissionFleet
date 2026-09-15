extern "C" void Call00589330();
extern "C" void *Data00686DB0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00542840()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686DB0
    __asm call Call00589330
    __asm pop ebp
    __asm ret
}
