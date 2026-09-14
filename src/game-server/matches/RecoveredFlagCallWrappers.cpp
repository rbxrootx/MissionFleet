extern "C" void Target004AAC80();
extern "C" void Target004AE020();

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

DEFINE_FLAG_WRAPPER(004AAC80, Target004AAC80)
DEFINE_FLAG_WRAPPER(004AE020, Target004AE020)
