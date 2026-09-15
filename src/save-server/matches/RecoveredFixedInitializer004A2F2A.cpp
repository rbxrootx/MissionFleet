// Initialize one static object with its fixed signed mode value.
extern "C" char Object00686CD8;
extern "C" void Target005287EE();
extern "C" __declspec(naked) void Recovered004A2F2A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov ecx, offset Object00686CD8
    __asm call Target005287EE
    __asm pop ebp
    __asm ret
}
