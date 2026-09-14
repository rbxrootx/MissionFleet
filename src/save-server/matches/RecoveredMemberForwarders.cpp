extern "C" void Target00582400();
extern "C" void Target00582420();

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

DEFINE_MEMBER_FORWARDER(00582400, Target00582400)
DEFINE_MEMBER_FORWARDER(00582420, Target00582420)
