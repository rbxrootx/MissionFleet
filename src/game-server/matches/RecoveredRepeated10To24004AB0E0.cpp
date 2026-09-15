extern "C" void Call004AB100();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered004AB0E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 1
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004AB100
    __asm add esp, 8
    __asm pop ebp
    __asm ret
}
