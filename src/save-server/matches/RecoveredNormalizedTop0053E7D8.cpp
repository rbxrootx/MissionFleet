extern "C" void Call0053E880();
extern "C" void *Data00686A34;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053E7D8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686A34
    __asm call Call0053E880
    __asm pop ebp
    __asm ret
}
