extern "C" void Call004F197F();
extern "C" void *Data005E2714;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053CB33()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call dword ptr [Data005E2714]
    __asm push eax
    __asm call Call004F197F
    __asm pop ebp
    __asm ret
}
