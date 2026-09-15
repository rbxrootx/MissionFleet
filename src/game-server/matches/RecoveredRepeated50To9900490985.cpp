
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00490985()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0x4c
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x48], 0
    __asm je loc_004909D9
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x48]
    __asm mov ecx, dword ptr [eax + 0x54]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_004909BB
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm call dword ptr [eax + 4]
loc_004909BB:
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0x48]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [eax + 0x54], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm je loc_004909D9
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm push ecx
    __asm call dword ptr [eax + 8]
loc_004909D9:
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
