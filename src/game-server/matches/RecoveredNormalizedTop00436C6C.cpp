extern "C" void Call004012A0();
extern "C" void Call00436C82();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436C6C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call004012A0
    __asm call Call00436C82
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
