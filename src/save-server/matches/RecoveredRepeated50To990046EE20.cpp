
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0046EE20()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov ecx, dword ptr [eax]
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx], 0xe06d7363
    __asm jne loc_0046EE5C
    __asm mov eax, dword ptr [ebp - 4]
    __asm cmp dword ptr [eax + 0x10], 3
    __asm jne loc_0046EE5C
    __asm mov ecx, dword ptr [ebp - 4]
    __asm cmp dword ptr [ecx + 0x14], 0x19930520
    __asm jne loc_0046EE5C
    __asm mov edx, dword ptr [ebp - 4]
    __asm cmp dword ptr [edx + 0x1c], 0
    __asm jne loc_0046EE5C
    __asm mov eax, 1
    __asm jmp loc_0046EE5E
loc_0046EE5C:
    __asm xor eax, eax
loc_0046EE5E:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
