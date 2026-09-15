
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00529B12()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0xc
    __asm mov dword ptr [ebp - 0xc], ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm push 0x199
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov eax, dword ptr [edx]
    __asm mov ecx, dword ptr [ebp - 0xc]
    __asm call dword ptr [eax + 0xa8]
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], -1
    __asm je loc_00529B58
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm jne loc_00529B4F
    __asm xor eax, eax
    __asm jmp loc_00529B5B
loc_00529B4F:
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [edx + 8]
    __asm mov dword ptr [ebp - 4], eax
loc_00529B58:
    __asm mov eax, dword ptr [ebp - 4]
loc_00529B5B:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
