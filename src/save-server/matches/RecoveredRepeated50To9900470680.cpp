extern "C" void Call004705C0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00470680()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
loc_00470684:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm test eax, eax
    __asm jle loc_004706C6
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm movsx edx, byte ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, dword ptr [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm add ecx, 1
    __asm mov dword ptr [ebp + 8], ecx
    __asm call Call004705C0
    __asm add esp, 0xc
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm cmp dword ptr [edx], -1
    __asm jne loc_004706C4
    __asm jmp loc_004706C6
loc_004706C4:
    __asm jmp loc_00470684
loc_004706C6:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
