extern "C" void Call00530AF0();
extern "C" void *Data005DE710;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544DA7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE710
    __asm call Call00530AF0
    __asm pop ebp
    __asm ret
}
