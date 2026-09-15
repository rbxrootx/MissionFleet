extern "C" void Call0053D790();
extern "C" void *Data00686DA8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00542757()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686DA8
    __asm call Call0053D790
    __asm pop ebp
    __asm ret
}
