// Exact recovered repeated virtual-interface leaf helper.
extern "C" __declspec(naked) void Recovered004DA4A1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx]
    __asm xor ecx, ecx
    __asm cmp dword ptr [eax+8], 0ffffh
    __asm setne cl
    __asm mov eax, ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
