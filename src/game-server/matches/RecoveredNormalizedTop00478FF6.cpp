extern "C" void Call0047900C();
extern "C" void Call00479022();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00478FF6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call0047900C
    __asm call Call00479022
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
