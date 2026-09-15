extern "C" void Call00530B5C();
extern "C" void *Data005DE670;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544DFD()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE670
    __asm call Call00530B5C
    __asm pop ebp
    __asm ret
}
