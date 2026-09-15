
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004B0640()
{
    __asm push ebp
    __asm mov ebp, esp
loc_004B0643:
    __asm mov eax, dword ptr [ebp + 8]
    __asm cmp eax, dword ptr [ebp + 0xc]
    __asm jae loc_004B0663
    __asm mov ecx, dword ptr [ebp + 8]
    __asm cmp dword ptr [ecx], 0
    __asm je loc_004B0658
    __asm mov edx, dword ptr [ebp + 8]
    __asm call dword ptr [edx]
loc_004B0658:
    __asm mov eax, dword ptr [ebp + 8]
    __asm add eax, 4
    __asm mov dword ptr [ebp + 8], eax
    __asm jmp loc_004B0643
loc_004B0663:
    __asm pop ebp
    __asm ret
}
