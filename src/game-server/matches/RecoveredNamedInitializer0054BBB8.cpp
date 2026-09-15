// Construct one static object with its original descriptor pointer.
extern "C" char Argument005CF7D0;
extern "C" char Object005DECD0;
extern "C" void Target0048D200();
extern "C" __declspec(naked) void Recovered0054BBB8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument005CF7D0
    __asm mov ecx, offset Object005DECD0
    __asm call Target0048D200
    __asm pop ebp
    __asm ret
}
