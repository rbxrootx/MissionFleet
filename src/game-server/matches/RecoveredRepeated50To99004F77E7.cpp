
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004F77E7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0x90], 0
    __asm je loc_004F7823
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x90], 0xe002
    __asm je loc_004F7823
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x90], 0xe001
    __asm je loc_004F7823
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_004F782A
loc_004F7823:
    __asm mov dword ptr [ebp - 8], 0
loc_004F782A:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
