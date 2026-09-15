// Register one static cleanup callback with the shared exit handler.
extern "C" void Callback0053F15D();
extern "C" void Register00465BF0();
extern "C" __declspec(naked) void Recovered0053F14B()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push offset Callback0053F15D
    __asm call Register00465BF0
    __asm add esp, 4
    __asm pop ebp
    __asm ret
}
