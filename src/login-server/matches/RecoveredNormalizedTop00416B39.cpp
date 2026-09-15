extern "C" void Call0041EA02();
extern "C" void *Data00416B45;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00416B39()
{
    __asm push offset Data00416B45
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
