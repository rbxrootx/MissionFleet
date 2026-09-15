// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback004F1201();
extern "C" void Register004A88E0();
extern "C" __declspec(naked) void Recovered004F11EF()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback004F1201
    __asm call Register004A88E0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
