extern "C" void Call004A3320();
extern "C" void *Data00686CC8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004A329F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686CC8
    __asm call Call004A3320
    __asm pop ebp
    __asm ret
}
