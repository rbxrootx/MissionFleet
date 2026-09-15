// Initialize one static object with its fixed signed mode value.
extern "C" char Object005DE880;
extern "C" void Target00534ABE();
extern "C" __declspec(naked) void Recovered004D1DDA()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov ecx, offset Object005DE880
    __asm call Target00534ABE
    __asm pop ebp
    __asm ret
}
