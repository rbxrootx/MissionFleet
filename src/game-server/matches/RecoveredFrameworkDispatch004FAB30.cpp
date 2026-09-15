// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered004FAB30()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm cmp dword ptr [eax+4], 100h
    __asm jne no
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp dword ptr [ecx+8], 13
    __asm jne no
    __asm mov dword ptr [ebp-4], 1
    __asm jmp done
    __asm no:
    __asm mov dword ptr [ebp-4], 0
    __asm done:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
