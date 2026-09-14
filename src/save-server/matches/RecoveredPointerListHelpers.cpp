#define DEFINE_ADVANCE_HEAD(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov ecx, dword ptr [eax] \
        __asm add ecx, 4 \
        __asm mov edx, dword ptr [ebp+8] \
        __asm mov dword ptr [edx], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov ecx, dword ptr [eax] \
        __asm mov eax, dword ptr [ecx-4] \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_RETREAT_HEAD(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov ecx, dword ptr [eax] \
        __asm add ecx, 8 \
        __asm mov edx, dword ptr [ebp+8] \
        __asm mov dword ptr [edx], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov ecx, dword ptr [eax] \
        __asm sub ecx, 8 \
        __asm mov eax, dword ptr [ecx] \
        __asm mov edx, dword ptr [ecx+4] \
        __asm pop ebp \
        __asm ret \
    }

DEFINE_ADVANCE_HEAD(004706D0)
DEFINE_ADVANCE_HEAD(0047B2C0)
DEFINE_RETREAT_HEAD(004706F0)
DEFINE_RETREAT_HEAD(0047B2E0)
