// Exact recovered math/debug structure leaf.
extern "C" __declspec(naked) void Recovered00429880()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+4]
    __asm mov dword ptr [ebp+12], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+16]
    __asm mov dword ptr [ecx+8], edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+20]
    __asm mov dword ptr [eax+12], ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 16
}
