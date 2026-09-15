extern "C" void Call005478A0();
extern "C" void *Data005DE890;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0054785C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE890
    __asm call Call005478A0
    __asm pop ebp
    __asm ret
}
