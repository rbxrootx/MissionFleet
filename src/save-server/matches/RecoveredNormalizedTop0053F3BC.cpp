extern "C" void *Data006369F0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053F3BC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, offset Data006369F0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
