extern "C" void Call00542440();
extern "C" void *Data005DE7B4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544F55()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE7B4
    __asm call Call00542440
    __asm pop ebp
    __asm ret
}
