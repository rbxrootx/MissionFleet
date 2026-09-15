
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004D27DC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov dword ptr [eax + 0x28], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x18], 1
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
