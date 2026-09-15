// Exact compact runtime/static-object initialization sequence.
extern "C" char Argument00671A70;
extern "C" void *Import0068BF58;
extern "C" char Storage00686A14;
extern "C" __declspec(naked) void Recovered004CF0EA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument00671A70
    __asm call dword ptr [Import0068BF58]
    __asm mov dword ptr [Storage00686A14], eax
    __asm pop ebp
    __asm ret
}
