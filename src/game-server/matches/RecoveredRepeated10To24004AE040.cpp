extern "C" void Call004AE060();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004AE040()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004AE060
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
