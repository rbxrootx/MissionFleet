extern "C" void Call004CC4A9();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004CC0EE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004CC4A9
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
