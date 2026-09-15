extern "C" void Call004CC0A9();
extern "C" void Call0053F080();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053F050()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053F080
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_0053F072
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004CC0A9
loc_0053F072:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
