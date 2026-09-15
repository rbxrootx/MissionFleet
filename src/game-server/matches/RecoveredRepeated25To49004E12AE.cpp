extern "C" void Call004E116C();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004E12AE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0x400
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004E116C
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
