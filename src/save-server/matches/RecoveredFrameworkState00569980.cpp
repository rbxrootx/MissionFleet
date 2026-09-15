// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered00569980()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+4], 0
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx], 0
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+12], 1
    __asm mov eax, dword ptr [ebp-4]
    __asm mov dword ptr [eax+8], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
