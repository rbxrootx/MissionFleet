// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered00572AD8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 112
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+16]
    __asm push ecx
    __asm mov edx, dword ptr [ebp+12]
    __asm push edx
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 104
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+104]
    __asm push eax
    __asm call dword ptr [edx+16]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 12
}
