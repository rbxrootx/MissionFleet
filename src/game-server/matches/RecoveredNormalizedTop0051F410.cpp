extern "C" void Call004EFC2A();
extern "C" void *Data00587B20;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0051F410()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00587B20
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004EFC2A
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
