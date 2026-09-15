// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered0050AA30()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+132], 0
    __asm je done
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ecx+132]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+132]
    __asm mov edx, dword ptr [eax]
    __asm call dword ptr [edx+60]
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
