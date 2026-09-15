extern "C" void Call0041752F();
extern "C" void Call0042D915();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00417513()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call0041752F
    __asm test byte ptr [esp + 8], 1
    __asm je loc_00417529
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_00417529:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
