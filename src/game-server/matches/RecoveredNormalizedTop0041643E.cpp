extern "C" void *Data00581100;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0041643E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00581100
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
