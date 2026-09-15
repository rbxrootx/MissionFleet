extern "C" void Call00454A38();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered00454870()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xd4
    __asm mov dword ptr [ebp - 8], eax
    __asm push 4
    __asm mov ecx, dword ptr [ebp + 0x14]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm call Call00454A38
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm jge loc_004548A5
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004548A7
loc_004548A5:
    __asm xor eax, eax
loc_004548A7:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x10
}
