extern "C" void Call004D61D3();
extern "C" void Call005309A7();
extern "C" void *Data0057CFB1;
extern "C" void *Data005840CC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004D613A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -1
    __asm push offset Data0057CFB1
    __asm mov eax, dword ptr fs:[0]
    __asm push eax
    __asm mov dword ptr fs:[0], esp
    __asm push ecx
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov dword ptr [eax], offset Data005840CC
    __asm mov dword ptr [ebp - 4], 0
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call004D61D3
    __asm mov dword ptr [ebp - 4], 0xffffffff
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call005309A7
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov dword ptr fs:[0], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
