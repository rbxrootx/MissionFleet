extern "C" void Call00478F56();
extern "C" void Call00478F6C();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00478F40()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call00478F56
    __asm call Call00478F6C
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
