#define DEFINE_CLEAR(address) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm sub esp, 8 \
        __asm mov dword ptr [ebp-8], ecx \
        __asm mov eax, dword ptr [ebp-8] \
        __asm mov ecx, dword ptr [eax] \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov edx, dword ptr [ebp-8] \
        __asm mov dword ptr [edx], 0 \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

DEFINE_CLEAR(004FC4C5)
DEFINE_CLEAR(005761D0)
