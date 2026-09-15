extern "C" void Call0047C250();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0047C2A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 0xfff7ffff
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call0047C250
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
