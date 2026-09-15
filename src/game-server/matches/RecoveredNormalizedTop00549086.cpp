extern "C" void Call005491C0();
extern "C" void *Data005DEB88;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00549086()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DEB88
    __asm call Call005491C0
    __asm pop ebp
    __asm ret
}
