extern "C" void Call004E5E47();
extern "C" void *Data0068B6B8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00527DEB()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call dword ptr [Data0068B6B8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004E5E47
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
