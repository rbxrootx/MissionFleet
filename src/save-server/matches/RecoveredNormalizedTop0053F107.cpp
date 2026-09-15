extern "C" void Call00532AD2();
extern "C" void *Data00686AE8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0053F107()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data00686AE8
    __asm call Call00532AD2
    __asm pop ebp
    __asm ret
}
