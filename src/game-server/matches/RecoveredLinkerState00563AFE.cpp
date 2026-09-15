// Exact recovered linker/container state helper.
extern "C" __declspec(naked) void Recovered00563AFE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm retry:
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+4], 0
    __asm je after_secondary
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+4]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+4]
    __asm mov eax, dword ptr [ecx]
    __asm push edx
    __asm call dword ptr [eax+8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+4], 0
    __asm after_secondary:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne retry
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax], 0
    __asm je reset
    __asm mov ecx, dword ptr [ebp-4]
    __asm cmp dword ptr [ecx+0ch], 0
    __asm je clear_primary
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [edx]
    __asm push eax
    __asm call dword ptr [ecx+8]
    __asm clear_primary:
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx], 0
    __asm reset:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+8], 0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
