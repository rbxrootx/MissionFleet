extern "C" void Call004690B0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00449670()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004690B0
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
