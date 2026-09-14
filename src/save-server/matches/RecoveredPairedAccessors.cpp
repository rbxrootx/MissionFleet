#define DEFINE_OFFSET(address, offset) \
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

#define DEFINE_GET(address, offset) \
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

#define DEFINE_STATUS(address, value, cleanup) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm push ebp \
        __asm mov ebp, esp \
        __asm push ecx \
        __asm mov dword ptr [ebp-4], ecx \
        __asm mov eax, value \
        __asm mov esp, ebp \
        __asm pop ebp \
        __asm ret cleanup \
    }

DEFINE_OFFSET(004BBE80, 4)
DEFINE_OFFSET(004D0EA6, 40)
DEFINE_GET(0054F382, 16)
DEFINE_GET(0045440C, 24)
DEFINE_GET(00551293, 28)
DEFINE_GET(0052572D, 32)
DEFINE_GET(0052F0E6, 64)
DEFINE_GET(005569CB, 84)
DEFINE_GET(00528163, 100)
DEFINE_GET(00527950, 116)
DEFINE_STATUS(004ED607, 080000000h, 12)
DEFINE_STATUS(005024AD, 1, 8)
DEFINE_STATUS(00572333, 080004001h, 20)
DEFINE_STATUS(004D767E, 080029C4Ah, 8)
