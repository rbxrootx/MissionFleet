extern "C" void Call00429960();
extern "C" void Call00464DF0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00428F9E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00429960
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call00464DF0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
