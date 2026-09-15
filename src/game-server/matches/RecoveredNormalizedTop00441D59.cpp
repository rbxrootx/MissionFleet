extern "C" void Call00441D6F();
extern "C" void Call00441D85();
extern "C" void Call004A87E0();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00441D59()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call Call00441D6F
    __asm call Call00441D85
    __asm cmp ebp, esp
    __asm call Call004A87E0
    __asm pop ebp
    __asm ret
}
