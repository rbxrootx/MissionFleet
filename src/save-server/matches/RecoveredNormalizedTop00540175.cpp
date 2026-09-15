extern "C" void Call0053D630();
extern "C" void *Data00686D24;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00540175()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686D24
    __asm call Call0053D630
    __asm pop ebp
    __asm ret
}
