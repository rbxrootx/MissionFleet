// Exact static probe-result initialization sequence.
extern "C" char Descriptor00519360;
extern "C" void Probe00465BF0();
extern "C" char Storage00686DA0;
extern "C" __declspec(naked) void Recovered00519383()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Descriptor00519360
    __asm call Probe00465BF0
    __asm add esp, 4
    __asm mov Storage00686DA0, al
    __asm pop ebp
    __asm ret
}
