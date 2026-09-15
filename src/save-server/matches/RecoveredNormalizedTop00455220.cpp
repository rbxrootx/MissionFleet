extern "C" void Call0044D5E0();
extern "C" void *Data006395B0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00455220()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0044D5E0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data006395B0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
