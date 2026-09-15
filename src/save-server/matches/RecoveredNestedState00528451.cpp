// Exact recovered nested-state leaf helper.
extern "C" __declspec(naked) void Recovered00528451()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ecx+92]
    __asm mov ax, word ptr [ebp+8]
    __asm mov word ptr [edx+28], ax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
