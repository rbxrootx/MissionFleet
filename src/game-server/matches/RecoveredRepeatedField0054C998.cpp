// Exact recovered repeated field/value leaf helper.
extern "C" __declspec(naked) void Recovered0054C998()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [eax+4]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax], ecx
    __asm mov dword ptr [eax+4], edx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
