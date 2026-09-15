extern "C" void Call004012A0();
extern "C" void Call00414D5F();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00414D49()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call004012A0
    __asm call Call00414D5F
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
