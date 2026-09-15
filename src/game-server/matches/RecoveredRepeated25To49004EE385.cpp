extern "C" void Call004EE3A0();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004EE385()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm mov al, byte ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004EE3A0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
