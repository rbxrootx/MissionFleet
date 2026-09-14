#define DEFINE_SET_PAIR(address) \
    extern "C" __declspec(naked) void Recovered##address(short, short) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov cx, word ptr [ebp+8] \
        __asm mov word ptr [eax], cx \
        __asm mov edx, dword ptr [ebp-4] \
        __asm mov ax, word ptr [ebp+12] \
        __asm mov word ptr [edx+2], ax \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 8 \
    }

DEFINE_SET_PAIR(00489320)
DEFINE_SET_PAIR(00489370)
