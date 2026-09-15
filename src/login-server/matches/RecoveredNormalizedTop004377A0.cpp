extern "C" void Call0041EA02();
extern "C" void *Data004377AC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004377A0()
{
    __asm push offset Data004377AC
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
