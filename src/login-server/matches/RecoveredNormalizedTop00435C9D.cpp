extern "C" void Call0041EA02();
extern "C" void *Data00435CA9;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00435C9D()
{
    __asm push offset Data00435CA9
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
