extern "C" void Call004ED409();
extern "C" void Call004ED84C();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004CF0D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004ED84C
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_004CF0F5
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004ED409
    __asm add esp, 4
loc_004CF0F5:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
