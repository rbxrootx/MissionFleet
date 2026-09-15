extern "C" void Call005793D0();
extern "C" void *Data005DE898;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00547910()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE898
    __asm call Call005793D0
    __asm pop ebp
    __asm ret
}
