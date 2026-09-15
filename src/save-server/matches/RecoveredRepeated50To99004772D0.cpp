extern "C" void Call00476E40();
extern "C" void Call00477030();
extern "C" void Call004771E0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004772D0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp + 0x10], 0x65
    __asm je loc_004772DF
    __asm cmp dword ptr [ebp + 0x10], 0x45
    __asm jne loc_004772F9
loc_004772DF:
    __asm mov eax, dword ptr [ebp + 0x18]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00476E40
    __asm add esp, 0x10
    __asm jmp loc_0047732D
loc_004772F9:
    __asm cmp dword ptr [ebp + 0x10], 0x66
    __asm jne loc_00477315
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call00477030
    __asm add esp, 0xc
    __asm jmp loc_0047732D
loc_00477315:
    __asm mov ecx, dword ptr [ebp + 0x18]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004771E0
    __asm add esp, 0x10
loc_0047732D:
    __asm pop ebp
    __asm ret
}
