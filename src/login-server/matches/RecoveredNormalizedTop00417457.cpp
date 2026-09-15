extern "C" void Call00417473();
extern "C" void Call0042D915();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00417457()
{
    __asm push esi
    __asm mov esi, ecx
    __asm call Call00417473
    __asm test byte ptr [esp + 8], 1
    __asm je loc_0041746D
    __asm push esi
    __asm call Call0042D915
    __asm pop ecx
loc_0041746D:
    __asm mov eax, esi
    __asm pop esi
    __asm ret 4
}
