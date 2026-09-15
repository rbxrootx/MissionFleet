extern "C" void *Data00581CF0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00481CE0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00581CF0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
