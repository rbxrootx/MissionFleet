extern "C" void Call004B3CF0();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered004B4CA0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [eax + 4]
    __asm sub ecx, 1
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx + 4], ecx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm cmp dword ptr [eax + 4], 0
    __asm jl loc_004B4CE2
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ecx]
    __asm mov al, byte ptr [ebp + 8]
    __asm mov byte ptr [edx], al
    __asm movsx ecx, byte ptr [ebp + 8]
    __asm and ecx, 0xff
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov eax, dword ptr [edx]
    __asm add eax, 1
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [ecx], eax
    __asm jmp loc_004B4CF5
loc_004B4CE2:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 8]
    __asm push eax
    __asm call Call004B3CF0
    __asm add esp, 8
    __asm mov dword ptr [ebp - 4], eax
loc_004B4CF5:
    __asm cmp dword ptr [ebp - 4], -1
    __asm jne loc_004B4D06
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov dword ptr [ecx], 0xffffffff
    __asm jmp loc_004B4D13
loc_004B4D06:
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm mov eax, dword ptr [edx]
    __asm add eax, 1
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm mov dword ptr [ecx], eax
loc_004B4D13:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
