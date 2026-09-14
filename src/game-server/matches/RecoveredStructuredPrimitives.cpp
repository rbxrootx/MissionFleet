#define DEFINE_COPY_PAIR(address) \
    extern "C" __declspec(naked) void Recovered##address(void *, void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov ecx, dword ptr [ebp+8] \
        __asm mov edx, dword ptr [ecx] \
        __asm mov dword ptr [eax], edx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov ecx, dword ptr [ebp+12] \
        __asm mov edx, dword ptr [ecx] \
        __asm mov dword ptr [eax+4], edx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 8 \
    }

#define DEFINE_FLATTEN_INDEX(address) \
    extern "C" __declspec(naked) void Recovered##address(int, int, int, int) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp+8] \
        __asm imul eax, 24 \
        __asm mov ecx, dword ptr [ebp+12] \
        __asm add ecx, eax \
        __asm imul ecx, 60 \
        __asm mov edx, dword ptr [ebp+16] \
        __asm add edx, ecx \
        __asm imul edx, 60 \
        __asm mov eax, dword ptr [ebp+20] \
        __asm add eax, edx \
        __asm mov ecx, dword ptr [ebp-4] \
        __asm mov dword ptr [ecx], eax \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 16 \
    }

DEFINE_COPY_PAIR(0041ED20)
DEFINE_COPY_PAIR(0044C5E0)
DEFINE_COPY_PAIR(004769C0)
DEFINE_FLATTEN_INDEX(00531412)
