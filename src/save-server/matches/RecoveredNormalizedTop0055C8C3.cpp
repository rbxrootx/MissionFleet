extern "C" void Call0055CB30();
extern "C" void *Data0063BBD0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0055C8C3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0063BBD0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0055CB30
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
