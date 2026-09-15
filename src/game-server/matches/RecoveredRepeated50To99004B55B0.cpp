extern "C" void Call004B5560();
extern "C" void Call004B5610();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004B55B0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm cmp dword ptr [ebp + 8], -0x20
    __asm jbe loc_004B55BE
    __asm xor eax, eax
    __asm jmp loc_004B5603
loc_004B55BE:
    __asm cmp dword ptr [ebp + 8], -0x20
    __asm ja loc_004B55D5
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004B5610
    __asm add esp, 4
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_004B55DC
loc_004B55D5:
    __asm mov dword ptr [ebp - 4], 0
loc_004B55DC:
    __asm cmp dword ptr [ebp - 4], 0
    __asm jne loc_004B55E8
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm jne loc_004B55ED
loc_004B55E8:
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004B5603
loc_004B55ED:
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004B5560
    __asm add esp, 4
    __asm test eax, eax
    __asm jne loc_004B5601
    __asm xor eax, eax
    __asm jmp loc_004B5603
loc_004B5601:
    __asm jmp loc_004B55BE
loc_004B5603:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
