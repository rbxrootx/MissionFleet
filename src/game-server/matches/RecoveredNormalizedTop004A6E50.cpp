extern "C" void Call004A6EF0();
extern "C" void *Data0058A980;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004A6E50()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004A6EF0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0058A980
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
