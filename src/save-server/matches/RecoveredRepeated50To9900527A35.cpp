extern "C" void Call0052798F();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00527A35()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0052798F
    __asm test eax, eax
    __asm je loc_00527A5B
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x5c]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx + 0x1a]
    __asm mov dword ptr [ebp - 8], edx
    __asm jmp loc_00527A62
loc_00527A5B:
    __asm mov dword ptr [ebp - 8], 0xffffffff
loc_00527A62:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
