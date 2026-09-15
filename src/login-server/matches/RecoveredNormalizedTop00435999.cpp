extern "C" void Call0041EA02();
extern "C" void *Data004359A5;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00435999()
{
    __asm push offset Data004359A5
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
