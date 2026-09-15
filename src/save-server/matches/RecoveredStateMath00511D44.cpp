// Exact recovered repeated state/math helper.
extern "C" __declspec(naked) void Recovered00511D44()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+140], 0
    __asm je empty
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ecx+140]
    __asm add eax, 20000h
    __asm jmp done
    __asm empty:
    __asm xor eax, eax
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
