extern "C" void Call00478FB1();
extern "C" void Call00478FC7();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00478F9B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call00478FB1
    __asm call Call00478FC7
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
