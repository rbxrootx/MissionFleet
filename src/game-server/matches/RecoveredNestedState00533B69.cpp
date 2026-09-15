// Exact recovered nested-state leaf helper.
extern "C" __declspec(naked) void Recovered00533B69()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+104]
    __asm xor edx, edx
    __asm mov dl, byte ptr [ecx+21]
    __asm mov eax, edx
    __asm neg eax
    __asm sbb eax, eax
    __asm neg eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
