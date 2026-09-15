extern "C" void Call0054BAF0();
extern "C" void *Data005DECCC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054BAB1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DECCC
    __asm call Call0054BAF0
    __asm pop ebp
    __asm ret
}
