extern "C" void Call004F1872();
extern "C" void Call004F5B32();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004F62E2()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm cmp dword ptr [ebp + 0x10], 0
    __asm je loc_004F62FF
    __asm push 0
    __asm mov ecx, dword ptr [ebp + 0x10]
    __asm call Call004F5B32
    __asm test eax, eax
    __asm je loc_004F62FF
    __asm jmp loc_004F6307
loc_004F62FF:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004F1872
loc_004F6307:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
