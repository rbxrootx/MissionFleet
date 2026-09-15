extern "C" void Call00567730();
extern "C" void *Data0063A828;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00567710()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00567730
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0063A828
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
