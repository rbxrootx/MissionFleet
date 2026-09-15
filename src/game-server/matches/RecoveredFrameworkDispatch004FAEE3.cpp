// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered004FAEE3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm cmp dword ptr [ebp+16], 0
    __asm je no_long
    __asm mov eax, dword ptr [ebp+16]
    __asm mov dword ptr [eax], 0
    __asm no_long:
    __asm cmp dword ptr [ebp+12], 0
    __asm je done
    __asm cmp dword ptr [ebp+8], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov byte ptr [ecx], 0
    __asm done:
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 12
}
