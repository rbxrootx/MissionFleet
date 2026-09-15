// Exact recovered repeated control/table leaf helper.
extern "C" __declspec(naked) void Recovered0047AC80()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+12]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx+edx*4], 1
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
