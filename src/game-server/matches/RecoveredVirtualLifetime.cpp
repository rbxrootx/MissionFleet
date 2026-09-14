#define DEFINE_RELEASE(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm sub esp, 8 \
        __asm mov dword ptr [ebp-8], ecx \
        __asm mov eax, dword ptr [ebp-8] \
        __asm mov ecx, dword ptr [eax] \
        __asm mov dword ptr [ebp-4], ecx \
        __asm cmp dword ptr [ebp-4], 0 \
        __asm _emit 074h \
        __asm _emit 015h \
        __asm mov edx, dword ptr [ebp-8] \
        __asm mov dword ptr [edx], 0 \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov ecx, dword ptr [eax] \
        __asm mov edx, dword ptr [ebp-4] \
        __asm push edx \
        __asm call dword ptr [ecx+8] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_POST_DESTROY(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm sub esp, 16 \
        __asm mov dword ptr [ebp-12], ecx \
        __asm mov eax, dword ptr [ebp-12] \
        __asm mov dword ptr [ebp-8], eax \
        __asm mov ecx, dword ptr [ebp-8] \
        __asm mov dword ptr [ebp-4], ecx \
        __asm cmp dword ptr [ebp-4], 0 \
        __asm _emit 074h \
        __asm _emit 012h \
        __asm push 1 \
        __asm mov edx, dword ptr [ebp-4] \
        __asm mov eax, dword ptr [edx] \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm call dword ptr [eax+4] \
        __asm mov dword ptr [ebp-16], eax \
        __asm _emit 0EBh \
        __asm _emit 007h \
        __asm mov dword ptr [ebp-16], 0 \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

DEFINE_RELEASE(0049AA40)
DEFINE_RELEASE(0049AB80)
DEFINE_POST_DESTROY(005081ED)
DEFINE_POST_DESTROY(0052A3DC)
