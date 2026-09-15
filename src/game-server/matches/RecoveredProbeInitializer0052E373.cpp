// Exact static probe-result initialization sequence.
extern "C" char Descriptor0052E350;
extern "C" void Probe004A88E0();
extern "C" void * Storage005DEC48;
extern "C" __declspec(naked) void Recovered0052E373()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Descriptor0052E350
    __asm call Probe004A88E0
    __asm add esp, 4
    __asm mov Storage005DEC48, eax
    __asm pop ebp
    __asm ret
}
