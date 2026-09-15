extern "C" void Call004CF7A2();
extern "C" void Call004D3A62();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004D12F3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_004D1317
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call004D3A62
    __asm test eax, eax
    __asm je loc_004D1317
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004D131F
loc_004D1317:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call004CF7A2
loc_004D131F:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
