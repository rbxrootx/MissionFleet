// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered004F2A32()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+28], 0
    __asm je fallback
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+96]
    __asm jmp done
    __asm fallback:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+172]
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
