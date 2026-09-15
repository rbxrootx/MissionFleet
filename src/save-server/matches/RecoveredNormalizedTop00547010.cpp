extern "C" void *Data0063D0D0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00547010()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, offset Data0063D0D0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
