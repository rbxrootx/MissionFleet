extern "C" void Call0042EEB7();
extern "C" void *Data0043E30C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0040B090()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0042EEB7
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0043E30C
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
