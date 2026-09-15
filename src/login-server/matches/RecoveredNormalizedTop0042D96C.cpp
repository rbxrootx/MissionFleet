extern "C" void Call0041EA02();
extern "C" void *Data0042D978;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042D96C()
{
    __asm push offset Data0042D978
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
