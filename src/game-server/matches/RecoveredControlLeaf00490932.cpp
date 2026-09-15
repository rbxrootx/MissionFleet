// Exact recovered repeated control/table leaf helper.
extern "C" __declspec(naked) void Recovered00490932()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 76
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+28]
    __asm mov eax, dword ptr [ebp+12]
    __asm mov ecx, dword ptr [edx+28]
    __asm mov dword ptr [eax], ecx
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
