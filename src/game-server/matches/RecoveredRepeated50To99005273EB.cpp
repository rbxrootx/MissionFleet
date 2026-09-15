extern "C" void Call00527AEB();
extern "C" void Call00527C1E();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered005273EB()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm push ecx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call00527AEB
    __asm mov dword ptr [ebp - 4], eax
    __asm cmp dword ptr [ebp - 4], 0
    __asm jge loc_00527411
    __asm xor eax, eax
    __asm jmp loc_00527436
loc_00527411:
    __asm mov edx, dword ptr [ebp - 8]
    __asm mov eax, dword ptr [ebp + 0x14]
    __asm mov dword ptr [edx + 0x24], eax
    __asm mov ecx, dword ptr [ebp + 0x18]
    __asm push ecx
    __asm mov edx, dword ptr [ebp + 0x10]
    __asm push edx
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 8]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm push edx
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call00527C1E
loc_00527436:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0x14
}
