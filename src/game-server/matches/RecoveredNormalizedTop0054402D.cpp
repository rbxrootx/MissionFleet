extern "C" void Call005366E6();
extern "C" void *Data005DE530;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054402D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE530
    __asm call Call005366E6
    __asm pop ebp
    __asm ret
}
