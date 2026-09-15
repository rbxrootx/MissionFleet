extern "C" void Call00548F60();
extern "C" void *Data005DEB84;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00548F46()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DEB84
    __asm call Call00548F60
    __asm pop ebp
    __asm ret
}
