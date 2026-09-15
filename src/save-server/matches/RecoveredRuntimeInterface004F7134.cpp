// Exact recovered runtime/interface helper.
extern "C" __declspec(naked) void Recovered004F7134()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax+132], 0
    __asm je absent
    __asm mov ecx, dword ptr [ebp+8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [edx+132]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax+132]
    __asm mov eax, dword ptr [edx]
    __asm call dword ptr [eax+56]
    __asm jmp done
    __asm absent:
    __asm xor eax, eax
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
