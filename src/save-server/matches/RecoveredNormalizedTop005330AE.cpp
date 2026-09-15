extern "C" void Call004E8CBE();
extern "C" void *Data0068B3D0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005330AE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call dword ptr [Data0068B3D0]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004E8CBE
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
