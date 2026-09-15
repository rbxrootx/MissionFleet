// Construct one static object with its original descriptor pointer.
extern "C" char Argument005C7CA8;
extern "C" char Object005DE7EC;
extern "C" void Target0048D200();
extern "C" __declspec(naked) void Recovered00545D58()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument005C7CA8
    __asm mov ecx, offset Object005DE7EC
    __asm call Target0048D200
    __asm pop ebp
    __asm ret
}
