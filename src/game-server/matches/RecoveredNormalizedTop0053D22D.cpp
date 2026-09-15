extern "C" void Call004F197F();
extern "C" void *Data005E26B8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053D22D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call dword ptr [Data005E26B8]
    __asm push eax
    __asm call Call004F197F
    __asm pop ebp
    __asm ret
}
