extern "C" void Call0045440C();
extern "C" void Call0045450E();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004545A8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp + 0x10], 0
    __asm je loc_004545C0
    __asm mov eax, dword ptr [ebp + 0x10]
    __asm mov dword ptr [eax], 0
loc_004545C0:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm mov edx, dword ptr [ecx + 0x8c]
    __asm mov dword ptr [ebp - 4], edx
loc_004545CC:
    __asm cmp dword ptr [ebp - 4], 0
    __asm je loc_004545FB
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [eax + 8]
    __asm cmp ecx, dword ptr [ebp + 8]
    __asm jne loc_004545EE
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0045450E
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov dword ptr [edx], eax
    __asm xor eax, eax
    __asm jmp loc_004545FD
loc_004545EE:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0045440C
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_004545CC
loc_004545FB:
    __asm xor eax, eax
loc_004545FD:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
