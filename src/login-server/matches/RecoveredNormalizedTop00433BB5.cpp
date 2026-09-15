extern "C" void Call0042D915();
extern "C" void Call00433CC0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00433BB5()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call00433CC0
    __asm test byte ptr [esp + 8], 1
    __asm je loc_00433BCB
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_00433BCB:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
