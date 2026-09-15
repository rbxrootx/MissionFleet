extern "C" void Call0048D9F9();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0048DC72()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0048D9F9
    __asm add esp, 4
    __asm test eax, eax
    __asm je loc_0048DC8D
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 0x10
    __asm jmp loc_0048DC93
loc_0048DC8D:
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 8
loc_0048DC93:
    __asm pop ebp
    __asm ret
}
