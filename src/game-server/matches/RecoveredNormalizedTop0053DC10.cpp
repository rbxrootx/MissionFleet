extern "C" void Call004F1872();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053DC10()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004F1872
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
