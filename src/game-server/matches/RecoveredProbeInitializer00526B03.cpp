// Exact static probe-result initialization sequence.
extern "C" char Descriptor00526AE0;
extern "C" void Probe004A88E0();
extern "C" char Storage005DE850;
extern "C" __declspec(naked) void Recovered00526B03()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Descriptor00526AE0
    __asm call Probe004A88E0
    __asm add esp, 4
    __asm mov Storage005DE850, al
    __asm pop ebp
    __asm ret
}
