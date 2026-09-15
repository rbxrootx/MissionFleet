// Exact recovered repeated field/value leaf helper.
extern "C" __declspec(naked) void Recovered0043DE00()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-8], ecx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp-4], ecx
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [ebp-4]
    __asm lea eax, dword ptr [eax+edx*4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
