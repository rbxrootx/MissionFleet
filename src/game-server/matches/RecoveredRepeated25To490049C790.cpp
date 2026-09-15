extern "C" void Call0049C6C0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0049C790()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call0049C6C0
    __asm add esp, 8
    __asm neg eax
    __asm sbb eax, eax
    __asm inc eax
    __asm pop ebp
    __asm ret
}
