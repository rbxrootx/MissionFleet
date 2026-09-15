
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0042D935()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0x44], 0
    __asm jne loc_0042D983
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ecx + 0x44], 1
loc_0042D956:
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x40c4c], 0
    __asm je loc_0042D979
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x40c4c]
    __asm sub ecx, 1
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 0x40c4c], ecx
    __asm jmp loc_0042D956
loc_0042D979:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0x44], 0
loc_0042D983:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
