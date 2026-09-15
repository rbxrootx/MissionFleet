// Exact recovered repeated access/value leaf helper.
extern "C" __declspec(naked) void Recovered0042E740()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax+268]
    __asm xor eax, eax
    __asm cmp edx, dword ptr [ecx+272]
    __asm setg al
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
