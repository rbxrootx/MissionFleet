extern "C" void Call004583C2();
extern "C" void Call004A87E0();
extern "C" void Call004ED409();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0045D4A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004583C2
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_0045D4CC
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004ED409
    __asm add esp, 4
loc_0045D4CC:
    __asm mov eax, dword ptr [ebp - 4]
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
