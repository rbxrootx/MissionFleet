extern "C" void Call0041EA02();
extern "C" void *Data0042DA0E;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042DA02()
{
    __asm push offset Data0042DA0E
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
