extern "C" void Call004B13C0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004B1490()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm cmp dword ptr [ebp + 0x10], 0xa
    __asm jne loc_004B14A9
    __asm cmp dword ptr [ebp + 8], 0
    __asm jge loc_004B14A9
    __asm mov dword ptr [ebp - 4], 1
    __asm jmp loc_004B14B0
loc_004B14A9:
    __asm mov dword ptr [ebp - 4], 0
loc_004B14B0:
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004B13C0
    __asm add esp, 0x10
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
