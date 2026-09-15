extern "C" void Call00532B3E();
extern "C" void *Data00686A48;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053F15D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686A48
    __asm call Call00532B3E
    __asm pop ebp
    __asm ret
}
