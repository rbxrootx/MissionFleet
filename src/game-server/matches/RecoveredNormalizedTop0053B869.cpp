extern "C" void Call004FB7BA();
extern "C" void *Data005E27D4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053B869()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call dword ptr [Data005E27D4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004FB7BA
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
