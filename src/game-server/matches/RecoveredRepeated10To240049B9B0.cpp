extern "C" void Call0049B9C6();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0049B9B0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0x10000
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0049B9C6
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
