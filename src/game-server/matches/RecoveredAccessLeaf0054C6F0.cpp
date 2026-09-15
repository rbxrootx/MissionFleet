// Exact recovered repeated access/value leaf helper.
extern "C" __declspec(naked) void Recovered0054C6F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov word ptr [eax], 7
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ecx+8], eax
    __asm mov edx, dword ptr [edx+4]
    __asm mov dword ptr [ecx+12], edx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
