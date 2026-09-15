extern "C" void Call00524884();
extern "C" void *Data00634670;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered005248F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00634670
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00524884
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
