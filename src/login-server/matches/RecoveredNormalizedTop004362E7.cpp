extern "C" void Call0041EA02();
extern "C" void *Data004362F3;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004362E7()
{
    __asm push offset Data004362F3
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
