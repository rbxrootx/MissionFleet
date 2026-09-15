// Exact static probe-result initialization sequence.
extern "C" char Descriptor0051D560;
extern "C" void Probe00465BF0();
extern "C" void * Storage00687168;
extern "C" __declspec(naked) void Recovered0051D583()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Descriptor0051D560
    __asm call Probe00465BF0
    __asm add esp, 4
    __asm mov Storage00687168, eax
    __asm pop ebp
    __asm ret
}
