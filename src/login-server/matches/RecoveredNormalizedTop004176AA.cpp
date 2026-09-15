extern "C" void Call004176C6();
extern "C" void Call0042D915();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004176AA()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call004176C6
    __asm test byte ptr [esp + 8], 1
    __asm je loc_004176C0
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_004176C0:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
