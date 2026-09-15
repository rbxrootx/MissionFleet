extern "C" void Call004CF7A2();
extern "C" void Call004D3AA5();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004D3E5F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 0xffff
    __asm cmp eax, 1
    __asm je loc_004D3E81
    __asm mov ecx, dword ptr [ebp + 8]
    __asm and ecx, 0xffff
    __asm cmp ecx, 2
    __asm jne loc_004D3E92
loc_004D3E81:
    __asm push 0
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm push edx
    __asm call Call004D3AA5
    __asm test eax, eax
    __asm je loc_004D3E92
    __asm jmp loc_004D3E9A
loc_004D3E92:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CF7A2
loc_004D3E9A:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
