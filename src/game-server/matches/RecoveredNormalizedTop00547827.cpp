extern "C" void Call005425A0();
extern "C" void *Data005DE894;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00547827()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE894
    __asm call Call005425A0
    __asm pop ebp
    __asm ret
}
