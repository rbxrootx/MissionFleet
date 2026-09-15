// Exact recovered linker/container state helper.
extern "C" __declspec(naked) void Recovered00582616()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov eax, dword ptr [ebp-8]
    __asm cmp eax, dword ptr [ebp+8]
    __asm je done
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp-4], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [eax], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm cmp dword ptr [eax], 0
    __asm je release_old
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ecx]
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax]
    __asm mov eax, dword ptr [ecx]
    __asm push edx
    __asm call dword ptr [eax+4]
    __asm release_old:
    __asm cmp dword ptr [ebp-4], 0
    __asm je mark
    __asm mov ecx, dword ptr [ebp-8]
    __asm cmp dword ptr [ecx+4], 0
    __asm je mark
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm push ecx
    __asm call dword ptr [eax+8]
    __asm mark:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov dword ptr [edx+4], 1
    __asm done:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
