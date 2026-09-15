extern "C" void Call0042D915();
extern "C" void Call0043883C();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00438887()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call0043883C
    __asm test byte ptr [esp + 8], 1
    __asm je loc_0043889D
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_0043889D:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
