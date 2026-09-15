extern "C" void Call0042D915();
extern "C" void Call00439157();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436302()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call00439157
    __asm test byte ptr [esp + 8], 1
    __asm je loc_00436318
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_00436318:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
