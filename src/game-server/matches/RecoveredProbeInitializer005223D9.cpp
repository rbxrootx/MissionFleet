// Exact static probe-result initialization sequence.
extern "C" char Descriptor005223C0;
extern "C" void Probe004A88E0();
extern "C" char Storage005DE7D8;
extern "C" __declspec(naked) void Recovered005223D9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Descriptor005223C0
    __asm call Probe004A88E0
    __asm add esp, 4
    __asm mov Storage005DE7D8, al
    __asm pop ebp
    __asm ret
}
