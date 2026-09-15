
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00566BF3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xa4
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call dword ptr [edx + 0x60]
    __asm neg eax
    __asm sbb eax, eax
    __asm inc eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
