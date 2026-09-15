extern "C" void Call004D21D0();
extern "C" void *Data005DE870;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004D214F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE870
    __asm call Call004D21D0
    __asm pop ebp
    __asm ret
}
