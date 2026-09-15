extern "C" void Call004EDAFD();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00530F44()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004EDAFD
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
