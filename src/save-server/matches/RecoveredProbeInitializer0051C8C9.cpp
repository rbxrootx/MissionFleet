// Exact static probe-result initialization sequence.
extern "C" char Descriptor0051C8B0;
extern "C" void Probe00465BF0();
extern "C" char Storage006870A4;
extern "C" __declspec(naked) void Recovered0051C8C9()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Descriptor0051C8B0
    __asm call Probe00465BF0
    __asm add esp, 4
    __asm mov Storage006870A4, al
    __asm pop ebp
    __asm ret
}
