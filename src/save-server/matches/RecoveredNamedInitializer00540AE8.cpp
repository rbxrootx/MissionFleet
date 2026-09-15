// Construct one static object with its original descriptor pointer.
extern "C" char Argument00674480;
extern "C" char Object00686D28;
extern "C" void Target004495B0();
extern "C" __declspec(naked) void Recovered00540AE8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument00674480
    __asm mov ecx, offset Object00686D28
    __asm call Target004495B0
    __asm pop ebp
    __asm ret
}
