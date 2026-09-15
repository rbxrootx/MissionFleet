extern "C" void Call004174E2();
extern "C" void Call0042D915();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004174C6()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call004174E2
    __asm test byte ptr [esp + 8], 1
    __asm je loc_004174DC
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_004174DC:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
