extern "C" void Call0041EA02();
extern "C" void *Data00437105;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004370F9()
{
    __asm push offset Data00437105
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
