// Construct one static object with its original descriptor pointer.
extern "C" char Argument005C4FE0;
extern "C" char Object005DCBF0;
extern "C" void Target0048D200();
extern "C" __declspec(naked) void Recovered0054226A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument005C4FE0
    __asm mov ecx, offset Object005DCBF0
    __asm call Target0048D200
    __asm pop ebp
    __asm ret
}
