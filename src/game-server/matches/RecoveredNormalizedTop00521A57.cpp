extern "C" void Call004F272F();
extern "C" void Call004F2DF2();
extern "C" void *Data0057D01C;
extern "C" void *Data0058246C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00521A57()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Data0057D01C
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm push ecx
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax], offset Data0058246C
    __asm mov dword ptr [ebp - 4], 0
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call004F2DF2
    __asm mov dword ptr [ebp - 4], 0xffffffff
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call004F272F
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr fs:[0], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
