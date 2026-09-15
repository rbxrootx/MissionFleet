extern "C" void Call004AB5B1();
extern "C" void Call004CC0A9();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004B2670()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call004AB5B1
    __asm mov eax, dword ptr [ebp + 8]
    __asm and eax, 1
    __asm test eax, eax
    __asm je loc_004B2692
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm call Call004CC0A9
loc_004B2692:
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
