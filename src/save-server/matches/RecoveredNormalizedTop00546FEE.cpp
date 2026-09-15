extern "C" void Call004EB148();
extern "C" void *Data0067C698;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00546FEE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Data0067C698
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call004EB148
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ecx], eax
    __asm mov eax, dword ptr [ebp + 8]
    __asm pop ebp
    __asm ret 8
}
