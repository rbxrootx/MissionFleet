
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00437A10()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [eax]
    __asm xor eax, eax
    __asm cmp edx, dword ptr [ecx + 4]
    __asm sete al
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
