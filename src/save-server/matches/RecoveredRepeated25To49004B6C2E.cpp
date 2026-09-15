extern "C" void Call004B6AEC();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004B6C2E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0x400
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004B6AEC
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
