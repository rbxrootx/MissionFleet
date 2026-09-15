extern "C" void Call00527972();
extern "C" void Call0052798F();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered005279AC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0052798F
    __asm test eax, eax
    __asm jne loc_005279D6
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00527972
    __asm test eax, eax
    __asm jne loc_005279D6
    __asm mov dword ptr [ebp - 8], 1
    __asm jmp loc_005279DD
loc_005279D6:
    __asm mov dword ptr [ebp - 8], 0
loc_005279DD:
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
