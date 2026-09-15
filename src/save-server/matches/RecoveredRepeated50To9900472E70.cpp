
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00472E70()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, dword ptr [eax + 0xc]
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm shr edx, 0xf
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, 0x80000000
    __asm mov ecx, dword ptr [ebp - 4]
    __asm shr eax, cl
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [ecx + 8]
    __asm and edx, eax
    __asm test edx, edx
    __asm jne loc_00472EC1
    __asm mov eax, dword ptr [ebp - 8]
    __asm and eax, 0xf
    __asm test eax, eax
    __asm jne loc_00472EC1
    __asm mov ecx, dword ptr [ebp - 8]
    __asm and ecx, 0xfff
    __asm test ecx, ecx
    __asm je loc_00472EC1
    __asm mov dword ptr [ebp - 0xc], 1
    __asm jmp loc_00472EC8
loc_00472EC1:
    __asm mov dword ptr [ebp - 0xc], 0
loc_00472EC8:
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
