extern "C" void Call00533BA9();
extern "C" void Call00533BC6();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00533BE3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00533BC6
    __asm test eax, eax
    __asm jne loc_00533C0D
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00533BA9
    __asm test eax, eax
    __asm jne loc_00533C0D
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_00533C14
loc_00533C0D:
    __asm mov dword ptr [ebp - 8], 0
loc_00533C14:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
