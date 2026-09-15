extern "C" void *Data005875D0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00549360()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, offset Data005875D0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
