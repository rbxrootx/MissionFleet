extern "C" void Call004CF7A2();
extern "C" void Call004D3AA5();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004D12CA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm push ecx
    __asm call Call004D3AA5
    __asm test eax, eax
    __asm je loc_004D12E5
    __asm jmp loc_004D12ED
loc_004D12E5:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CF7A2
loc_004D12ED:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
