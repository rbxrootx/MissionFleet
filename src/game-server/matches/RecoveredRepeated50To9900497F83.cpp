extern "C" void Call00497DE7();
extern "C" void Call00497EE9();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00497F83()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp + 0x10], 0
    __asm je loc_00497F9B
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov dword ptr [eax], 0
loc_00497F9B:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 0x8c]
    __asm mov dword ptr [ebp - 4], edx
loc_00497FA7:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_00497FD6
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 8]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm jne loc_00497FC9
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00497EE9
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx], eax
    __asm xor eax, eax
    __asm jmp loc_00497FD8
loc_00497FC9:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00497DE7
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_00497FA7
loc_00497FD6:
    __asm xor eax, eax
loc_00497FD8:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
