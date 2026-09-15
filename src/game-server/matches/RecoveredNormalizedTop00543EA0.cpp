extern "C" void Call004D6111();
extern "C" void *Data005840E4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00543EA0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004D6111
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data005840E4
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
