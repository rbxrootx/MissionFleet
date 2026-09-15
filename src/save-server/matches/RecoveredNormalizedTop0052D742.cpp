extern "C" void Call004CF7A2();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0052D742()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CF7A2
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
