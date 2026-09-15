extern "C" void Call004B4CA0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004B4D20()
{
    __asm push ebp
    __asm mov ebp, esp
loc_004B4D23:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm test eax, eax
    __asm jle loc_004B4D53
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004B4CA0
    __asm add esp, 0xc
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm cmp dword ptr [edx], -1
    __asm jne loc_004B4D51
    __asm jmp loc_004B4D53
loc_004B4D51:
    __asm jmp loc_004B4D23
loc_004B4D53:
    __asm pop ebp
    __asm ret
}
