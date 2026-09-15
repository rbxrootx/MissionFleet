extern "C" void Call004ABAA7();
extern "C" void *Data0063662C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053F030()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004ABAA7
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0063662C
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
