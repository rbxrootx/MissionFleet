extern "C" void Call0053677B();
extern "C" void *Data00582070;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00536D98()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00582070
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053677B
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
