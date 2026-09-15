extern "C" void Call0042D915();
extern "C" void Call00432F8C();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00432F51()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call00432F8C
    __asm test byte ptr [esp + 8], 1
    __asm je loc_00432F67
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_00432F67:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
