// Exact recovered repeated virtual-interface leaf helper.
extern "C" __declspec(naked) void Recovered0058109D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 16
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+36]
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov dword ptr [ecx], eax
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
