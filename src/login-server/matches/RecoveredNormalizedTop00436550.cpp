extern "C" void Call0041EA02();
extern "C" void *Data0043655C;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered00436550()
{
    __asm push offset Data0043655C
    __asm call Call0041EA02
    __asm pop ecx
    __asm ret
}
