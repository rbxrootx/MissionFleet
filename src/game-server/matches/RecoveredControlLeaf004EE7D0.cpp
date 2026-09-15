// Exact recovered repeated control/table leaf helper.
extern "C" __declspec(naked) void Recovered004EE7D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+56], 0
    __asm jne present
    __asm xor eax, eax
    __asm jmp done
    __asm present:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+56]
    __asm mov eax, dword ptr [edx+76]
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
