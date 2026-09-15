extern "C" void Call004705C0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00470640()
{
    __asm push ebp
    __asm mov ebp, esp
loc_00470643:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm test eax, eax
    __asm jle loc_00470673
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004705C0
    __asm add esp, 0xc
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm cmp dword ptr [edx], -1
    __asm jne loc_00470671
    __asm jmp loc_00470673
loc_00470671:
    __asm jmp loc_00470643
loc_00470673:
    __asm pop ebp
    __asm ret
}
