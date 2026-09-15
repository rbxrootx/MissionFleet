extern "C" void Call0041EA02();
extern "C" void *Data0042EE5E;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042EE52()
{
    __asm push offset Data0042EE5E
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
