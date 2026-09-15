// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered0052DA3F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [eax+168], ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+184]
    __asm or al, 1
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx+184], eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
