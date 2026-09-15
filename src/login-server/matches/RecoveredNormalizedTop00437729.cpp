extern "C" void Call0042D915();
extern "C" void Call004391B0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00437729()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call004391B0
    __asm test byte ptr [esp + 8], 1
    __asm je loc_0043773F
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_0043773F:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
