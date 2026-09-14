extern "C" void Target00490FC0();
extern "C" void Target0049C7B0();

#define DEFINE_FORWARDER(address, target) \
    extern "C" __declspec(naked) void Recovered##address(void *, void *, void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push 0 \
        __asm mov eax, dword ptr [ebp+16] \
        __asm push eax \
        __asm mov ecx, dword ptr [ebp+12] \
        __asm push ecx \
        __asm mov edx, dword ptr [ebp+8] \
        __asm push edx \
        __asm call target \
        __asm pop ebp \
        __asm ret 12 \
    }

DEFINE_FORWARDER(00490FC0, Target00490FC0)
DEFINE_FORWARDER(0049C7B0, Target0049C7B0)
