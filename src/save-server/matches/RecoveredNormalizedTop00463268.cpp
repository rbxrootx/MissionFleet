extern "C" void Call00578FE6();
extern "C" void *Data0063D020;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00463268()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0063D020
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00578FE6
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
