
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered0056959E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0x18]
    __asm mov dword ptr [eax], 0
    __asm mov eax, 0x80040003
    __asm pop ebp
    __asm ret 0x14
}
