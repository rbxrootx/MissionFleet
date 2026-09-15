extern "C" void Call004A4A20();
extern "C" void *Data0058A7DC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004A4A00()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004A4A20
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0058A7DC
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
