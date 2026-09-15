// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered0044CA8D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax+72]
    __asm cmp ecx, dword ptr [ebp+8]
    __asm jne done
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [edx+72], 0
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
