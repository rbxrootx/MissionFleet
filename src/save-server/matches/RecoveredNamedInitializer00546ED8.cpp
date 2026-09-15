// Construct one static object with its original descriptor pointer.
extern "C" char Argument0067BFA8;
extern "C" char Object006871F0;
extern "C" void Target004495B0();
extern "C" __declspec(naked) void Recovered00546ED8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument0067BFA8
    __asm mov ecx, offset Object006871F0
    __asm call Target004495B0
    __asm pop ebp
    __asm ret
}
