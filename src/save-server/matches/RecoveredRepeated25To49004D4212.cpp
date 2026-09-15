extern "C" void Call004CF7A2();
extern "C" void Call004D3A62();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004D4212()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 0x10], 0
    __asm je loc_004D422F
    __asm push 0
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm call Call004D3A62
    __asm test eax, eax
    __asm je loc_004D422F
    __asm jmp loc_004D4237
loc_004D422F:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004CF7A2
loc_004D4237:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
