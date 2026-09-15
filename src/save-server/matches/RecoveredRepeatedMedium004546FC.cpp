extern "C" void Call00454A38();
// Exact recovered repeated medium routine.
extern "C" __declspec(naked) void Recovered004546FC()
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
    __asm call Call00454A38
    __asm mov dword ptr [ebp - 0xc], eax
    __asm cmp dword ptr [ebp - 0xc], 0
    __asm jge loc_00454731
    __asm mov eax, dword ptr [ebp - 0xc]
    __asm jmp loc_004547A4
loc_00454731:
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [ebp - 4], edx
    __asm cmp dword ptr [ebp - 4], 0x1e
    __asm je loc_0045474B
    __asm cmp dword ptr [ebp - 4], 2
    __asm je loc_0045474B
    __asm cmp dword ptr [ebp - 4], 3
    __asm jne loc_0045474F
loc_0045474B:
    __asm xor eax, eax
    __asm jmp loc_004547A4
loc_0045474F:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 1
    __asm test eax, eax
    __asm jne loc_00454775
    __asm cmp dword ptr [ebp - 4], 2
    __asm je loc_00454775
    __asm cmp dword ptr [ebp - 4], 3
    __asm je loc_00454775
    __asm cmp dword ptr [ebp - 4], 1
    __asm je loc_00454775
    __asm cmp dword ptr [ebp - 4], 0x14
    __asm je loc_00454775
    __asm xor eax, eax
    __asm jmp loc_004547A4
loc_00454775:
    __asm mov ecx, dword ptr [ebp - 0x10]
    __asm mov edx, dword ptr [ecx + 0x88]
    __asm mov dword ptr [ebp - 8], edx
    __asm cmp dword ptr [ebp - 8], 0
    __asm jne loc_0045478B
    __asm xor eax, eax
    __asm jmp loc_004547A4
loc_0045478B:
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm and eax, 1
    __asm test eax, eax
    __asm jne loc_00454799
    __asm xor eax, eax
    __asm jmp loc_004547A4
loc_00454799:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx]
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call dword ptr [edx + 0x14]
loc_004547A4:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
