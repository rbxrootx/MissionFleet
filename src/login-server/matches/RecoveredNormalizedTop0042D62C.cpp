extern "C" void Call0042D6B8();
extern "C" void Call0042D915();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042D62C()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call0042D6B8
    __asm test byte ptr [esp + 8], 1
    __asm je loc_0042D642
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_0042D642:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
