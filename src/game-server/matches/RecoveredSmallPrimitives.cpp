#define DEFINE_ADD_ARG(address) \
    extern "C" __declspec(naked) void Recovered##address(void *) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm mov eax, dword ptr [ebp+8] \
        __asm add eax, 20 \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_DEBUG_OFFSET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm add eax, offset \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_DEBUG_GET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov eax, dword ptr [eax+offset] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_CC_OFFSET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm add eax, offset \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_CC_GET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov eax, dword ptr [eax+offset] \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret \
    }

#define DEFINE_CC_SET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address(int) \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], 0CCCCCCCCh \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, dword ptr [ebp-4] \
        __asm mov ecx, dword ptr [ebp+8] \
        __asm mov dword ptr [eax+offset], ecx \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret 4 \
    }

DEFINE_ADD_ARG(00420830)
DEFINE_ADD_ARG(004412E0)
DEFINE_ADD_ARG(004784A0)
DEFINE_DEBUG_OFFSET(0048CFC0, 12)
DEFINE_DEBUG_GET(005343B6, 88)
DEFINE_DEBUG_GET(0055D542, 92)
DEFINE_CC_OFFSET(00446550, 92)
DEFINE_CC_OFFSET(004895B0, 92)
DEFINE_CC_GET(00403FD0, 260)
DEFINE_CC_GET(0044A390, 260)
DEFINE_CC_SET(004466F0, 100)
DEFINE_CC_SET(00473B60, 100)
