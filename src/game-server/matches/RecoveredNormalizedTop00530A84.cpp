extern "C" void Call005309FC();
extern "C" void *Data0058213C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00530A84()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0058213C
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call005309FC
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
