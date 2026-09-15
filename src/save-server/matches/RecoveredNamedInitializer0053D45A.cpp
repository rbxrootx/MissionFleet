// Construct one static object with its original descriptor pointer.
extern "C" char Argument00671280;
extern "C" char Object00685108;
extern "C" void Target004495B0();
extern "C" __declspec(naked) void Recovered0053D45A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Argument00671280
    __asm mov ecx, offset Object00685108
    __asm call Target004495B0
    __asm pop ebp
    __asm ret
}
