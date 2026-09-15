extern "C" void Call00547340();
extern "C" void *Data005DE854;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00547326()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE854
    __asm call Call00547340
    __asm pop ebp
    __asm ret
}
