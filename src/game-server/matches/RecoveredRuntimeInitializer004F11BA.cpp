// Exact compact runtime/static-object initialization sequence.
extern "C" char Argument005C5580;
extern "C" void *Import005E25F4;
extern "C" char Storage005DE4FC;
extern "C" __declspec(naked) void Recovered004F11BA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument005C5580
    __asm call dword ptr [Import005E25F4]
    __asm mov dword ptr [Storage005DE4FC], eax
    __asm pop ebp
    __asm ret
}
