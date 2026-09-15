extern "C" void Call0046867A();
extern "C" void Call004A87E0();
extern "C" void Call004ED409();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0046C0F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0046867A
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_0046C11C
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004ED409
    __asm add esp, 4
loc_0046C11C:
    __asm mov eax, dword ptr [ebp - 4]
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
