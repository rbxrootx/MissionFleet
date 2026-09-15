extern "C" void Call00468D60();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004495F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00468D60
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
