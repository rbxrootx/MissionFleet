extern "C" void Call004F1872();
extern "C" void Call004F5B75();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered004F339A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm push 0
    __asm mov eax, dword ptr [ebp + 0xc]
    __asm mov ecx, dword ptr [eax + 0xc]
    __asm push ecx
    __asm call Call004F5B75
    __asm test eax, eax
    __asm je loc_004F33B5
    __asm jmp loc_004F33BD
loc_004F33B5:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004F1872
loc_004F33BD:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
