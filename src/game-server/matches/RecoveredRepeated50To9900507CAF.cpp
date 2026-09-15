
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00507CAF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0x5c]
    __asm mov dword ptr [ebp - 4], eax
loc_00507CC6:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_00507CF6
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [edx + 0x60]
    __asm mov dword ptr [ebp - 8], eax
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0x98]
    __asm test eax, eax
    __asm jne loc_00507CF4
    __asm xor eax, eax
    __asm jmp loc_00507CFB
loc_00507CF4:
    __asm jmp loc_00507CC6
loc_00507CF6:
    __asm mov eax, 1
loc_00507CFB:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
