// Initialize one static object with its fixed signed mode value.
extern "C" char Object00686998;
extern "C" void Target004CF2A9();
extern "C" __declspec(naked) void Recovered004CF16C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 1
    __asm mov ecx, offset Object00686998
    __asm call Target004CF2A9
    __asm pop ebp
    __asm ret
}
