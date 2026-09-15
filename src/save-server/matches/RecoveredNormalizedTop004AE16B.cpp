extern "C" void Call004CF277();
extern "C" void *Data00635F28;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004AE16B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CF277
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00635F28
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
