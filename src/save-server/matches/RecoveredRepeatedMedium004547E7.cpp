extern "C" void Call00454A38();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered004547E7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xd4
    __asm mov dword ptr [ebp - 0x10], eax
    __asm push 3
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
    __asm jge loc_0045481C
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm jmp loc_0045486A
loc_0045481C:
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
    __asm cmp dword ptr [ebp - 4], 2
    __asm je loc_0045483A
    __asm cmp dword ptr [ebp - 4], 3
    __asm je loc_0045483A
    __asm cmp dword ptr [ebp - 4], 0x14
    __asm je loc_0045483A
    __asm xor eax, eax
    __asm jmp loc_0045486A
loc_0045483A:
    __asm mov eax, dword ptr [ebp - 0x10]
    __asm mov ecx, dword ptr [eax + 0x88]
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp - 8], 0
    __asm jne loc_00454850
    __asm xor eax, eax
    __asm jmp loc_0045486A
loc_00454850:
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm and edx, 0x80
    __asm test edx, edx
    __asm je loc_00454868
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0x14]
loc_00454868:
    __asm xor eax, eax
loc_0045486A:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
