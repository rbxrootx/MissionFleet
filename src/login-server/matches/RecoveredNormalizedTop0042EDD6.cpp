extern "C" void Call0041EA02();
extern "C" void *Data0042EDE2;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042EDD6()
{
    __asm push offset Data0042EDE2
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
