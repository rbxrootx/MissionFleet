extern "C" void Call004366B0();
extern "C" void *Data00634590;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436730()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00634590
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004366B0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
