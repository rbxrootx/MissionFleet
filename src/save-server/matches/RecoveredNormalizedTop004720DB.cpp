extern "C" void Call00470950();
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered004720DB()
{
    __asm push 9
    __asm call Call00470950
    __asm add esp, 4
    __asm ret
}
