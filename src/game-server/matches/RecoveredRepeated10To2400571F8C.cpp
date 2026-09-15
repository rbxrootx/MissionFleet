
// Exact recovered repeated 10-24 byte routine.
extern "C" __declspec(naked) void Recovered00571F8C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov dword ptr [eax], 0
    __asm mov eax, 0x80004001
    __asm pop ebp
    __asm ret 8
}
