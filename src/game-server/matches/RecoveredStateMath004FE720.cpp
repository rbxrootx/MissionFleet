// Exact recovered repeated state/math helper.
extern "C" __declspec(naked) void Recovered004FE720()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm movsx eax, byte ptr [ebp+8]
    __asm cmp eax, 92
    __asm je yes
    __asm movsx ecx, byte ptr [ebp+8]
    __asm cmp ecx, 47
    __asm je yes
    __asm mov dword ptr [ebp-4], 0
    __asm jmp done
    __asm yes:
    __asm mov dword ptr [ebp-4], 1
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
