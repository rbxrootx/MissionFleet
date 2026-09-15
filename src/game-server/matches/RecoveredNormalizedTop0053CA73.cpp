extern "C" void Call004F197F();
extern "C" void *Data005E2724;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053CA73()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call dword ptr [Data005E2724]
    __asm push eax
    __asm call Call004F197F
    __asm pop ebp
    __asm ret
}
