extern "C" void Call004CF277();
extern "C" void *Data006353A4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0052FE64()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CF277
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data006353A4
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
