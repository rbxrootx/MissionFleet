extern "C" void Call0046A090();
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0046A030()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm push 1
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0046A090
    __asm add esp, 0xc
    __asm pop ebp
    __asm ret
}
