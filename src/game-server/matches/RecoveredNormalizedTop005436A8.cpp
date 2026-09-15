extern "C" void Call00543750();
extern "C" void *Data005DE520;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005436A8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE520
    __asm call Call00543750
    __asm pop ebp
    __asm ret
}
