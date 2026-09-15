extern "C" void Call00457FE6();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00457FD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0x10000
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00457FE6
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
