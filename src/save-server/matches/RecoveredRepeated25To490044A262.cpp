extern "C" void Call00449FE9();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0044A262()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00449FE9
    __asm add esp, 4
    __asm test eax, eax
    __asm je loc_0044A27D
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 0x10
    __asm jmp loc_0044A283
loc_0044A27D:
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 8
loc_0044A283:
    __asm pop ebp
    __asm ret
}
