extern "C" void Call0041EA02();
extern "C" void *Data00435E6A;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00435E5E()
{
    __asm push offset Data00435E6A
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
