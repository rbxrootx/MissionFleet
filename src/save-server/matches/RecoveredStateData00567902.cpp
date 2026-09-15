// Exact recovered state/data leaf.
extern "C" __declspec(naked) void Recovered00567902()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm xor ecx, ecx
    __asm mov cl, byte ptr [eax+64]
    __asm test ecx, ecx
    __asm jne ready
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [eax+104]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov byte ptr [ecx+65], al
    __asm mov edx, dword ptr [ebp-4]
    __asm mov byte ptr [edx+64], 1
    __asm ready:
    __asm mov eax, dword ptr [ebp-4]
    __asm xor ecx, ecx
    __asm mov cl, byte ptr [eax+65]
    __asm mov eax, ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
