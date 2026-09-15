extern "C" void Call0048D7C0();
extern "C" void *Data0058A064;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054BA6F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0058A064
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0048D7C0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
