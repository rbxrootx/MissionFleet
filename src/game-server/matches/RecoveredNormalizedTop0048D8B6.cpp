extern "C" void Call0048EDD0();
extern "C" void *Data005DE52C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0048D8B6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE52C
    __asm call Call0048EDD0
    __asm pop ebp
    __asm ret
}
