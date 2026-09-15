// Exact recovered repeated access/value leaf helper.
extern "C" __declspec(naked) void Recovered0042C1C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm xor edx, edx
    __asm div dword ptr [ecx+4]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+12]
    __asm mov eax, dword ptr [ecx+edx*4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
