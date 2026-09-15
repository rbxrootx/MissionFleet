extern "C" void Call00498413();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered004980D7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xd4
    __asm mov dword ptr [ebp - 0x10], eax
    __asm push 1
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00498413
    __asm mov dword ptr [ebp - 0xc], eax
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm jge loc_0049810C
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm jmp loc_0049817F
loc_0049810C:
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
    __asm cmp dword ptr [ebp - 4], 0x1e
    __asm je loc_00498126
    __asm cmp dword ptr [ebp - 4], 2
    __asm je loc_00498126
    __asm cmp dword ptr [ebp - 4], 3
    __asm jne loc_0049812A
loc_00498126:
    __asm xor eax, eax
    __asm jmp loc_0049817F
loc_0049812A:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 1
    __asm test eax, eax
    __asm jne loc_00498150
    __asm cmp dword ptr [ebp - 4], 2
    __asm je loc_00498150
    __asm cmp dword ptr [ebp - 4], 3
    __asm je loc_00498150
    __asm cmp dword ptr [ebp - 4], 1
    __asm je loc_00498150
    __asm cmp dword ptr [ebp - 4], 0x14
    __asm je loc_00498150
    __asm xor eax, eax
    __asm jmp loc_0049817F
loc_00498150:
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov edx, dword ptr [ecx + 0x88]
    __asm mov dword ptr [ebp - 8], edx
    __asm cmp dword ptr [ebp - 8], 0
    __asm jne loc_00498166
    __asm xor eax, eax
    __asm jmp loc_0049817F
loc_00498166:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 1
    __asm test eax, eax
    __asm jne loc_00498174
    __asm xor eax, eax
    __asm jmp loc_0049817F
loc_00498174:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0x14]
loc_0049817F:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
