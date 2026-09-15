// Exact recovered state leaf helper.
extern "C" __declspec(naked) void Recovered0049C730()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+4]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx]
    __asm mov dword ptr [ecx+192], eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
