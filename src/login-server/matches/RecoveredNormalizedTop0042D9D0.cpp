extern "C" void Call0041EA02();
extern "C" void *Data0042D9DC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042D9D0()
{
    __asm push offset Data0042D9DC
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
