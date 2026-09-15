extern "C" void Call0041EA02();
extern "C" void *Data00436902;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004368F6()
{
    __asm push offset Data00436902
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
