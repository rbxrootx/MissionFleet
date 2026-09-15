// Exact recovered state leaf helper.
extern "C" __declspec(naked) void Recovered0044F3D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax+3196]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
