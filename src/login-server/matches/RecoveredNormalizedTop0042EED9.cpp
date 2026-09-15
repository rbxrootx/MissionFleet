extern "C" void Call0042D915();
extern "C" void Call0042F94A();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042EED9()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call0042F94A
    __asm test byte ptr [esp + 8], 1
    __asm je loc_0042EEEF
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_0042EEEF:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
