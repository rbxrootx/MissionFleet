extern "C" void Call004CF7A2();
extern "C" void Call004D3AA5();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004D129A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm mov edx, dword ptr [ecx + 8]
    __asm push edx
    __asm call Call004D3AA5
    __asm test eax, eax
    __asm je loc_004D12BC
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004D12C4
loc_004D12BC:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call004CF7A2
loc_004D12C4:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
