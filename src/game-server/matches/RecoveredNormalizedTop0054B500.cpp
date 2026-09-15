extern "C" void Call0054B520();
extern "C" void *Data0058925C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054B500()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0054B520
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data0058925C
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
