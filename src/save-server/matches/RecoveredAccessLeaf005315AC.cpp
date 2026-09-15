// Exact recovered repeated access/value leaf helper.
extern "C" __declspec(naked) void Recovered005315AC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp-4], ecx
    __asm cmp dword ptr [ebp-4], 0
    __asm jne present
    __asm mov dword ptr [ebp-8], 0
    __asm jmp done
    __asm present:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+40]
    __asm mov dword ptr [ebp-8], ecx
    __asm done:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
