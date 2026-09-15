extern "C" void Call0044F494();
extern "C" void Call004A87E0();
extern "C" void *Data00581A04;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00453A67()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00581A04
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0044F494
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
