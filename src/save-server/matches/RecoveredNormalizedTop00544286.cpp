extern "C" void Call005444E0();
extern "C" void *Data006870AC;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00544286()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov ecx, offset Data006870AC
    __asm call Call005444E0
    __asm pop ebp
    __asm ret
}
