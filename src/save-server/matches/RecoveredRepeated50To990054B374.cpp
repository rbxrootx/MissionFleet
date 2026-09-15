
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0054B374()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [eax + 8]
    __asm cmp edx, dword ptr [ecx + 8]
    __asm jne loc_0054B3AE
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [eax + 4]
    __asm cmp edx, dword ptr [ecx + 4]
    __asm jne loc_0054B3AE
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [ebp + 8]
    __asm mov edx, dword ptr [eax]
    __asm cmp edx, dword ptr [ecx]
    __asm jne loc_0054B3AE
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_0054B3B5
loc_0054B3AE:
    __asm mov dword ptr [ebp - 8], 0
loc_0054B3B5:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
