extern "C" void Call0041EA02();
extern "C" void *Data004368B9;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004368AD()
{
    __asm push offset Data004368B9
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
