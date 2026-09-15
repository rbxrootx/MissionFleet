extern "C" void Call005456E0();
extern "C" void *Data005DE7B0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00545434()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE7B0
    __asm call Call005456E0
    __asm pop ebp
    __asm ret
}
