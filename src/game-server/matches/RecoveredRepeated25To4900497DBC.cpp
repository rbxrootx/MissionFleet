extern "C" void Call00497E15();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00497DBC()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm jne loc_00497DD0
    __asm jmp loc_00497DE1
loc_00497DD0:
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [edx + 0xc], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call00497E15
loc_00497DE1:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
