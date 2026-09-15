extern "C" void Call0051270F();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00512887()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_005128B5
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm cmp dword ptr [eax], 0
    __asm je loc_005128B5
    __asm push 0xe900
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0051270F
    __asm test eax, eax
    __asm jne loc_005128B5
    __asm xor eax, eax
    __asm jmp loc_005128BA
loc_005128B5:
    __asm mov eax, 1
loc_005128BA:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
