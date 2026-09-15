// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered0044C950()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov edx, dword ptr [eax]
    __asm cmp edx, dword ptr [ecx]
    __asm sbb eax, eax
    __asm neg eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
