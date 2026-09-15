extern "C" void Call004DA225();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005247E7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004DA225
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
