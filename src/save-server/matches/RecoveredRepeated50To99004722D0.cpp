extern "C" void Call00472280();
extern "C" void Call00472330();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004722D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm cmp dword ptr [ebp + 8], -0x20
    __asm jbe loc_004722DE
    __asm xor eax, eax
    __asm jmp loc_00472323
loc_004722DE:
    __asm cmp dword ptr [ebp + 8], -0x20
    __asm ja loc_004722F5
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00472330
    __asm add esp, 4
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_004722FC
loc_004722F5:
    __asm mov dword ptr [ebp - 4], 0
loc_004722FC:
    __asm cmp dword ptr [ebp - 4], 0
    __asm jne loc_00472308
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm jne loc_0047230D
loc_00472308:
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_00472323
loc_0047230D:
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call00472280
    __asm add esp, 4
    __asm test eax, eax
    __asm jne loc_00472321
    __asm xor eax, eax
    __asm jmp loc_00472323
loc_00472321:
    __asm jmp loc_004722DE
loc_00472323:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
