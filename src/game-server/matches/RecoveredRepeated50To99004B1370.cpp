extern "C" void Call004B13C0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004B1370()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp + 0x10], 0xa
    __asm jne loc_004B1397
    __asm cmp dword ptr [ebp + 8], 0
    __asm jge loc_004B1397
    __asm push 1
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call004B13C0
    __asm add esp, 0x10
    __asm jmp loc_004B13AD
loc_004B1397:
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 8]
    __asm push edx
    __asm call Call004B13C0
    __asm add esp, 0x10
loc_004B13AD:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm pop ebp
    __asm ret
}
