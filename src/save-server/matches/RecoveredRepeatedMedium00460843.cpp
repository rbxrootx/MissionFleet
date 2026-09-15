extern "C" void Call004607B4();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered00460843()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0x10
    __asm mov dword ptr [ebp - 0x10], ecx
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm call Call004607B4
    __asm test eax, eax
    __asm jne loc_0046085C
    __asm xor eax, eax
    __asm jmp loc_004608A4
loc_0046085C:
    __asm lea eax, [ebp - 0xc]
    __asm push eax
    __asm lea ecx, [ebp - 8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 0x10]
    __asm mov eax, dword ptr [edx + 0x7c]
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov edx, dword ptr [ecx + 0x7c]
    __asm mov ecx, dword ptr [edx]
    __asm push eax
    __asm call dword ptr [ecx + 0x10]
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp + 8], 0
    __asm je loc_00460887
    __asm mov edx, dword ptr [ebp + 8]
    __asm mov eax, dword ptr [ebp - 8]
    __asm mov dword ptr [edx], eax
loc_00460887:
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_00460895
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ebp - 0xc]
    __asm mov dword ptr [ecx], edx
loc_00460895:
    __asm cmp dword ptr [ebp - 4], 0
    __asm jl loc_004608A2
    __asm mov eax, 1
    __asm jmp loc_004608A4
loc_004608A2:
    __asm xor eax, eax
loc_004608A4:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
