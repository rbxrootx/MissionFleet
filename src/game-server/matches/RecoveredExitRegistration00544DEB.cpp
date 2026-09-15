// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback00544DFD();
extern "C" void Register004A88E0();
extern "C" __declspec(naked) void Recovered00544DEB()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback00544DFD
    __asm call Register004A88E0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
