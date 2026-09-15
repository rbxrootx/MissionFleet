extern "C" void Call00544160();
extern "C" void *Data006870A8;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544146()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data006870A8
    __asm call Call00544160
    __asm pop ebp
    __asm ret
}
