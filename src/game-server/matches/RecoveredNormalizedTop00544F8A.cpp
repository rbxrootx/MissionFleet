extern "C" void Call00545580();
extern "C" void *Data005DE7B4;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544F8A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data005DE7B4
    __asm call Call00545580
    __asm pop ebp
    __asm ret
}
