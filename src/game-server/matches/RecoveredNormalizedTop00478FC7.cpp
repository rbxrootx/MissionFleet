extern "C" void Call004A87E0();
extern "C" void Call004A88E0();
extern "C" void *Data00478FE0;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00478FC7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Data00478FE0
    __asm call Call004A88E0
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
