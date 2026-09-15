// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback00409731();
extern "C" void Register0041EA02();
extern "C" __declspec(naked) void Recovered0040971F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback00409731
    __asm call Register0041EA02
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
