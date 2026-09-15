extern "C" void Call00533BC6();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00533C6C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00533BC6
    __asm test eax, eax
    __asm je loc_00533C92
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0x5c]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx + 0x1a]
    __asm mov dword ptr [ebp - 8], edx
    __asm jmp loc_00533C99
loc_00533C92:
    __asm mov dword ptr [ebp - 8], 0xffffffff
loc_00533C99:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
