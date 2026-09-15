// Construct one static object with its original descriptor pointer.
extern "C" char Argument005C5D38;
extern "C" char Object005DE51C;
extern "C" void Target0048D200();
extern "C" __declspec(naked) void Recovered00542AAA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument005C5D38
    __asm mov ecx, offset Object005DE51C
    __asm call Target0048D200
    __asm pop ebp
    __asm ret
}
