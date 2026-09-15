// Initialize one static object with its fixed signed mode value.
extern "C" char Object005DE4C0;
extern "C" void Target004F1379();
extern "C" __declspec(naked) void Recovered004F11DE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push 0
    __asm mov ecx, offset Object005DE4C0
    __asm call Target004F1379
    __asm pop ebp
    __asm ret
}
