// Exact recovered repeated access/value leaf helper.
extern "C" __declspec(naked) void Recovered004037C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp+16]
    __asm mov edx, dword ptr [eax]
    __asm cmp edx, dword ptr [ecx]
    __asm jg no
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov edx, dword ptr [eax]
    __asm cmp edx, dword ptr [ecx]
    __asm jl no
    __asm mov eax, 1
    __asm jmp done
    __asm no:
    __asm xor eax, eax
    __asm done:
    __asm pop ebp
    __asm ret
}
