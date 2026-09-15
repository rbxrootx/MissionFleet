extern "C" void Call0046D900();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered0046D9D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm cmp dword ptr [ebp + 0x10], 0xa
    __asm jne loc_0046D9E9
    __asm cmp dword ptr [ebp + 8], 0
    __asm jge loc_0046D9E9
    __asm mov dword ptr [ebp - 4], 1
    __asm jmp loc_0046D9F0
loc_0046D9E9:
    __asm mov dword ptr [ebp - 4], 0
loc_0046D9F0:
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call0046D900
    __asm add esp, 0x10
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
