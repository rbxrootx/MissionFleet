extern "C" void Call0041C1A0();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0041C9C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 4]
    __asm push ecx
    __asm call Call0041C1A0
    __asm add esp, 4
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
