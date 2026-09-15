extern "C" void Call004BE5A0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004BE5E0()
{
    __asm push ebp
    __asm mov ebp, esp
loc_004BE5E3:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm test eax, eax
    __asm jle loc_004BE614
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov cx, word ptr [ebp + 8]
    __asm push ecx
    __asm call Call004BE5A0
    __asm add esp, 0xc
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm cmp dword ptr [edx], -1
    __asm jne loc_004BE612
    __asm jmp loc_004BE614
loc_004BE612:
    __asm jmp loc_004BE5E3
loc_004BE614:
    __asm pop ebp
    __asm ret
}
