extern "C" void Call0048D9F9();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0048DF11()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0048D9F9
    __asm add esp, 4
    __asm test eax, eax
    __asm je loc_0048DF2C
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 0x10
    __asm jmp loc_0048DF32
loc_0048DF2C:
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 8
loc_0048DF32:
    __asm pop ebp
    __asm ret
}
