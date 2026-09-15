// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered0052B609()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-4], ecx
    __asm cmp dword ptr [ebp+8], 0
    __asm je none
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax+28]
    __asm mov dword ptr [ebp-8], ecx
    __asm jmp store
    __asm none:
    __asm mov dword ptr [ebp-8], 0
    __asm store:
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp-8]
    __asm mov dword ptr [edx+32], eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
