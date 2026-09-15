extern "C" void Call00546E10();
extern "C" void *Data006871EC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00546DD1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data006871EC
    __asm call Call00546E10
    __asm pop ebp
    __asm ret
}
