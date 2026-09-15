extern "C" void Call0041EA02();
extern "C" void *Data00436714;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436708()
{
    __asm push offset Data00436714
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
