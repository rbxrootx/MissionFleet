extern "C" void Call004012A0();
extern "C" void Call0041920B();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004191F5()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call004012A0
    __asm call Call0041920B
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
