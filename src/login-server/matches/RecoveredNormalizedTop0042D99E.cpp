extern "C" void Call0041EA02();
extern "C" void *Data0042D9AA;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042D99E()
{
    __asm push offset Data0042D9AA
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
