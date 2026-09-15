
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered005762B1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xd8
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0xac], 0
    __asm jne loc_005762DC
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx], 0
    __asm mov eax, 0x80004005
    __asm jmp loc_00576304
loc_005762DC:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ecx + 0xac]
    __asm mov dword ptr [eax], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xac]
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [edx + 0xac]
    __asm mov edx, dword ptr [eax]
    __asm push ecx
    __asm call dword ptr [edx + 4]
    __asm xor eax, eax
loc_00576304:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
