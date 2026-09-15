// Exact recovered state leaf helper.
extern "C" __declspec(naked) void Recovered00403FF0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov eax, dword ptr [eax+264]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
