extern "C" void Call004551E0();
extern "C" void *Data006394FC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004550C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004551E0
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data006394FC
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
