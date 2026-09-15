extern "C" void Call00412785();
extern "C" void Call0042D915();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00412769()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call00412785
    __asm test byte ptr [esp + 8], 1
    __asm je loc_0041277F
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_0041277F:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
