extern "C" void Call005478C0();
extern "C" void *Data005DE894;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00547891()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE894
    __asm call Call005478C0
    __asm pop ebp
    __asm ret
}
