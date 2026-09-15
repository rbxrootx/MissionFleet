// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered0054B139()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov word ptr [eax], 5
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx+8], edx
    __asm mov eax, dword ptr [ebp+12]
    __asm mov dword ptr [ecx+12], eax
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
