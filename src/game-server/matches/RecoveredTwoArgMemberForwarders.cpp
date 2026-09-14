extern "C" void Target004EFDC6();
extern "C" void Target004EFF7C();

#define DEFINE_FORWARDER(address, target) \
    extern "C" __declspec(naked) void Recovered##address(void *, void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm push 0 \
        __asm mov eax, dword ptr [ebp+12] \
        __asm push eax \
        __asm mov ecx, dword ptr [ebp+8] \
        __asm push ecx \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm call target \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 8 \
    }

DEFINE_FORWARDER(004EFDC6, Target004EFDC6)
DEFINE_FORWARDER(004EFF7C, Target004EFF7C)
