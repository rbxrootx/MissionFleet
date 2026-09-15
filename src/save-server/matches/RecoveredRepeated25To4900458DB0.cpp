extern "C" void Call00458CE0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00458DB0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00458CE0
    __asm add esp, 8
    __asm neg eax
    __asm sbb eax, eax
    __asm inc eax
    __asm pop ebp
    __asm ret
}
