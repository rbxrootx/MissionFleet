
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00522E60()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm cmp edx, dword ptr [ecx + 8]
    __asm jle loc_00522E92
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [eax + 8]
    __asm mov dword ptr [edx], ecx
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [edx + 8], eax
loc_00522E92:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [ecx + 4]
    __asm cmp eax, dword ptr [edx + 0xc]
    __asm jle loc_00522EBE
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 4]
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 0xc]
    __asm mov dword ptr [eax + 4], edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], ecx
loc_00522EBE:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
