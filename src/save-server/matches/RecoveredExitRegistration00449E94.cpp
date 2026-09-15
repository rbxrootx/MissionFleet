// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback00449EA6();
extern "C" void Register00465BF0();
extern "C" __declspec(naked) void Recovered00449E94()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback00449EA6
    __asm call Register00465BF0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
