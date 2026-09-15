// Initialize one static object with its fixed signed mode value.
extern "C" char Object006869D8;
extern "C" void Target004CF2A9();
extern "C" __declspec(naked) void Recovered004CF10E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov ecx, offset Object006869D8
    __asm call Target004CF2A9
    __asm pop ebp
    __asm ret
}
