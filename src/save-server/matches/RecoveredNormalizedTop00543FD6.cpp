extern "C" void Call00543FF0();
extern "C" void *Data0068709C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00543FD6()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data0068709C
    __asm call Call00543FF0
    __asm pop ebp
    __asm ret
}
