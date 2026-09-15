extern "C" void Call004CC4BC();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004CC090()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 0
    __asm push 4
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004CC4BC
    __asm add esp, 0x10
    __asm pop ebp
    __asm ret 4
}
