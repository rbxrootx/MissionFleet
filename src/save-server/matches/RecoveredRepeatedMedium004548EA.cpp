extern "C" void Call00452B26();
extern "C" void Call00454A38();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered004548EA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x14
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xd4
    __asm mov dword ptr [ebp - 0x10], eax
    __asm push 6
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00454A38
    __asm mov dword ptr [ebp - 0xc], eax
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm jge loc_00454922
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm jmp loc_004549A4
loc_00454922:
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov ecx, dword ptr [eax + 0x88]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm jne loc_00454940
    __asm xor eax, eax
    __asm jmp loc_004549A4
loc_00454940:
    __asm mov edx, dword ptr [ebp - 8]
    __asm cmp dword ptr [edx + 0x44], 0
    __asm jne loc_00454955
    __asm cmp dword ptr [ebp - 4], 0x1f
    __asm je loc_00454955
    __asm cmp dword ptr [ebp - 4], 0x1e
    __asm jne loc_00454959
loc_00454955:
    __asm xor eax, eax
    __asm jmp loc_004549A4
loc_00454959:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 3
    __asm test eax, eax
    __asm jne loc_00454967
    __asm xor eax, eax
    __asm jmp loc_004549A4
loc_00454967:
    __asm cmp dword ptr [ebp - 4], 2
    __asm je loc_004549A2
    __asm cmp dword ptr [ebp - 4], 3
    __asm je loc_004549A2
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 0x44]
    __asm mov dword ptr [ebp - 0x14], edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [eax + 0x44], 1
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call00452B26
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ebp - 0x14]
    __asm mov dword ptr [ecx + 0x44], edx
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0x10]
loc_004549A2:
    __asm xor eax, eax
loc_004549A4:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
