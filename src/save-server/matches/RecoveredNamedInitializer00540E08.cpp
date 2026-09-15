// Construct one static object with its original descriptor pointer.
extern "C" char Argument00674700;
extern "C" char Object00686D38;
extern "C" void Target004495B0();
extern "C" __declspec(naked) void Recovered00540E08()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument00674700
    __asm mov ecx, offset Object00686D38
    __asm call Target004495B0
    __asm pop ebp
    __asm ret
}
