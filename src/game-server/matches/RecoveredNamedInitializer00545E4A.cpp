// Construct one static object with its original descriptor pointer.
extern "C" char Argument005C7E48;
extern "C" char Object005DE7F0;
extern "C" void Target0048D200();
extern "C" __declspec(naked) void Recovered00545E4A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument005C7E48
    __asm mov ecx, offset Object005DE7F0
    __asm call Target0048D200
    __asm pop ebp
    __asm ret
}
