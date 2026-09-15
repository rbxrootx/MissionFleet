extern "C" void Call004B3350();
extern "C" void Call004B3540();
extern "C" void Call004B36F0();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004B37E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm cmp dword ptr [ebp + 0x10], 0x65
    __asm je loc_004B37EF
    __asm cmp dword ptr [ebp + 0x10], 0x45
    __asm jne loc_004B3809
loc_004B37EF:
    __asm mov eax, dword ptr [ebp + 0x18]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004B3350
    __asm add esp, 0x10
    __asm jmp loc_004B383D
loc_004B3809:
    __asm cmp dword ptr [ebp + 0x10], 0x66
    __asm jne loc_004B3825
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004B3540
    __asm add esp, 0xc
    __asm jmp loc_004B383D
loc_004B3825:
    __asm mov ecx, dword ptr [ebp + 0x18]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x14]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm call Call004B36F0
    __asm add esp, 0x10
loc_004B383D:
    __asm pop ebp
    __asm ret
}
