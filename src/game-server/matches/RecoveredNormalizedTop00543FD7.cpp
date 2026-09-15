extern "C" void Call0053667A();
extern "C" void *Data005DE5D0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00543FD7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE5D0
    __asm call Call0053667A
    __asm pop ebp
    __asm ret
}
