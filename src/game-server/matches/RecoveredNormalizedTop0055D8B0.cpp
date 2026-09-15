extern "C" void Call0055D8D0();
extern "C" void *Data00589748;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0055D8B0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0055D8D0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00589748
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
