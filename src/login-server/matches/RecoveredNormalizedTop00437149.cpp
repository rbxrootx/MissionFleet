extern "C" void Call0041EA02();
extern "C" void *Data00437155;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00437149()
{
    __asm push offset Data00437155
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
