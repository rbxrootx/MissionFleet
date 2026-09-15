extern "C" void Call004CCECE();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004CD050()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm lea eax, [ebp + 8]
    __asm push eax
    __asm push 1
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CCECE
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
