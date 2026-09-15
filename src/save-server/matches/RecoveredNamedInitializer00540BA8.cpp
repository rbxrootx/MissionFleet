// Construct one static object with its original descriptor pointer.
extern "C" char Argument006744F8;
extern "C" char Object00686D2C;
extern "C" void Target004495B0();
extern "C" __declspec(naked) void Recovered00540BA8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument006744F8
    __asm mov ecx, offset Object00686D2C
    __asm call Target004495B0
    __asm pop ebp
    __asm ret
}
