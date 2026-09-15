extern "C" void Call0042D915();
extern "C" void Call004341C5();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004341A9()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call004341C5
    __asm test byte ptr [esp + 8], 1
    __asm je loc_004341BF
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_004341BF:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
