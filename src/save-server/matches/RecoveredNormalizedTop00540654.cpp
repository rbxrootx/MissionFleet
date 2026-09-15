extern "C" void Call00540900();
extern "C" void *Data00686D20;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00540654()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686D20
    __asm call Call00540900
    __asm pop ebp
    __asm ret
}
