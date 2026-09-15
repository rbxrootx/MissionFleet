// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback0053FF2D();
extern "C" void Register00465BF0();
extern "C" __declspec(naked) void Recovered0053FF1B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback0053FF2D
    __asm call Register00465BF0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
