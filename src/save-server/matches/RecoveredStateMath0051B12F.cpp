// Exact recovered repeated state/math helper.
extern "C" __declspec(naked) void Recovered0051B12F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp+28]
    __asm mov dword ptr [eax], ecx
    __asm mov edx, dword ptr [ebp+32]
    __asm mov dword ptr [eax+4], edx
    __asm mov ecx, dword ptr [ebp+36]
    __asm mov dword ptr [eax+8], ecx
    __asm mov edx, dword ptr [ebp+40]
    __asm mov dword ptr [eax+12], edx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 36
}
