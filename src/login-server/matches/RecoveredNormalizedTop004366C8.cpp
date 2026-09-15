extern "C" void Call0041EA02();
extern "C" void *Data004366D4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004366C8()
{
    __asm push offset Data004366D4
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
