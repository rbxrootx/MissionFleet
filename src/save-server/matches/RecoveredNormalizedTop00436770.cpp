extern "C" void Call004366B0();
extern "C" void *Data0063456C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436770()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0063456C
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004366B0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
