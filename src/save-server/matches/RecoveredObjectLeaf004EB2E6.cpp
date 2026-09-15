// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered004EB2E6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+12]
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp-8]
    __asm mov dword ptr [edx+12], -1
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
