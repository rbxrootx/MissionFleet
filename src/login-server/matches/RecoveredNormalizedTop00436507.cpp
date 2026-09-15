extern "C" void Call0041EA02();
extern "C" void *Data00436513;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436507()
{
    __asm push offset Data00436513
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
