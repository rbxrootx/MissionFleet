extern "C" void Call0041EA02();
extern "C" void *Data0043693A;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0043692E()
{
    __asm push offset Data0043693A
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
