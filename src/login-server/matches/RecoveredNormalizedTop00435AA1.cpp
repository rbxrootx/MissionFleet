extern "C" void Call0041EA02();
extern "C" void *Data00435AAD;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00435AA1()
{
    __asm push offset Data00435AAD
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
