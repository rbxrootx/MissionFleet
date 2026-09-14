extern "C" void Target00575D20();
extern "C" void Target00575D40();

#define DEFINE_MEMBER_FORWARDER(address, target) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        __asm push eax \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm call target \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

DEFINE_MEMBER_FORWARDER(00575D20, Target00575D20)
DEFINE_MEMBER_FORWARDER(00575D40, Target00575D40)
