
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00535F9B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax], 0
    __asm jne loc_00535FD0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 8], 0
    __asm jne loc_00535FD0
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 4], 0
    __asm jne loc_00535FD0
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0xc], 0
    __asm jne loc_00535FD0
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_00535FD7
loc_00535FD0:
    __asm mov dword ptr [ebp - 8], 0
loc_00535FD7:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
