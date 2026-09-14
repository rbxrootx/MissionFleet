#define DEFINE_COPY_FIELD0(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm sub esp, 8 \
        __asm mov dword ptr [ebp-8], ecx \
        __asm mov eax, dword ptr [ebp-8] \
        __asm mov ecx, dword ptr [eax] \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov edx, dword ptr [ebp+8] \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov dword ptr [edx], eax \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

#define DEFINE_COPY_FIELD4(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm sub esp, 8 \
        __asm mov dword ptr [ebp-8], ecx \
        __asm mov eax, dword ptr [ebp-8] \
        __asm mov ecx, dword ptr [eax+4] \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov edx, dword ptr [ebp+8] \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov dword ptr [edx], eax \
        __asm mov eax, dword ptr [ebp+8] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

DEFINE_COPY_FIELD0(00437760)
DEFINE_COPY_FIELD0(004377C0)
DEFINE_COPY_FIELD0(0043DD10)
DEFINE_COPY_FIELD0(0043DD40)
DEFINE_COPY_FIELD4(00437730)
DEFINE_COPY_FIELD4(00437790)
DEFINE_COPY_FIELD4(0043DCB0)
DEFINE_COPY_FIELD4(0043DCE0)
