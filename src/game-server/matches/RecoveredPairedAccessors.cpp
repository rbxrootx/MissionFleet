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

DEFINE_OFFSET(004E1B40, 4)
DEFINE_OFFSET(004F2F76, 40)
DEFINE_GET(00550912, 16)
DEFINE_GET(00497DE7, 24)
DEFINE_GET(00552823, 28)
DEFINE_GET(00531964, 32)
DEFINE_GET(0053F686, 64)
DEFINE_GET(00557F71, 84)
DEFINE_GET(005343C7, 100)
DEFINE_GET(00533B87, 116)
DEFINE_STATUS(00508628, 080000000h, 12)
DEFINE_STATUS(005192C2, 1, 8)
DEFINE_STATUS(00569983, 080004001h, 20)
DEFINE_STATUS(004F85DE, 080029C4Ah, 8)
