extern "C" void Call0047BFC0();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0047BF00()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 3
    __asm push 0x157
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0047BFC0
    __asm add esp, 0xc
    __asm pop ebp
    __asm ret
}
