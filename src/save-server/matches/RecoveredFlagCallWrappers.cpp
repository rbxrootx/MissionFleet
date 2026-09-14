extern "C" void Target00467320();
extern "C" void Target0046A760();

#define DEFINE_FLAG_WRAPPER(address, target) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push 1 \
        __asm mov eax, dword ptr [ebp+8] \
        __asm push eax \
        __asm call target \
        __asm add esp, 8 \
        __asm pop ebp \
        __asm ret \
    }

DEFINE_FLAG_WRAPPER(00467320, Target00467320)
DEFINE_FLAG_WRAPPER(0046A760, Target0046A760)
