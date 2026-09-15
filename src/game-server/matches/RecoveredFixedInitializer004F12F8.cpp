// Initialize one static object with its fixed signed mode value.
extern "C" char Object005DE400;
extern "C" void Target004F1379();
extern "C" __declspec(naked) void Recovered004F12F8()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push -2
    __asm mov ecx, offset Object005DE400
    __asm call Target004F1379
    __asm pop ebp
    __asm ret
}
