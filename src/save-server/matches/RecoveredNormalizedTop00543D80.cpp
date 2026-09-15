extern "C" void Call0053D910();
extern "C" void *Data00638E5C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00543D80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053D910
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00638E5C
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
