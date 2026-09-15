extern "C" void Call004F1872();
extern "C" void Call004F5B32();
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004F33C3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm mov dword ptr [ebp - 8], ecx
    __asm cmp dword ptr [ebp + 0xc], 0
    __asm je loc_004F33E7
    __asm lea eax, [ebp - 4]
    __asm push eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm call Call004F5B32
    __asm test eax, eax
    __asm je loc_004F33E7
    __asm mov eax, dword ptr [ebp - 4]
    __asm jmp loc_004F33EF
loc_004F33E7:
    __asm mov ecx, dword ptr [ebp - 8]
    __asm call Call004F1872
loc_004F33EF:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 0xc
}
