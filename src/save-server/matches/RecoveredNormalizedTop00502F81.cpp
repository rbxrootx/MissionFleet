extern "C" void Call004FE960();
extern "C" void Call004FF637();
extern "C" void *Data0058D7FC;
extern "C" void *Data00638614;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00502F81()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Data0058D7FC
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm push ecx
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax], offset Data00638614
    __asm mov dword ptr [ebp - 4], 0
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call004FF637
    __asm mov dword ptr [ebp - 4], 0xffffffff
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call004FE960
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr fs:[0], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
