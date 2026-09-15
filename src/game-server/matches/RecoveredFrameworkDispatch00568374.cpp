// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered00568374()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp ecx, dword ptr [eax+4]
    __asm jl lower
    __asm cmp dword ptr [ebp+8], 0
    __asm jge invalid
    __asm lower:
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [eax+ecx*4]
    __asm jmp done
    __asm invalid:
    __asm xor eax, eax
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
