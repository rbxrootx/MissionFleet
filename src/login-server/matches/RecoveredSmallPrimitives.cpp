#define DEFINE_EMPTY(address) \
    extern "C" __declspec(naked) void Recovered##address() { __asm ret }

#define DEFINE_FAST_GET(address, offset) \
    extern "C" __declspec(naked) void Recovered##address() \
    { \
        __asm mov eax, dword ptr [ecx+offset] \
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

DEFINE_EMPTY(00411310)
DEFINE_EMPTY(00412CA8)
DEFINE_EMPTY(00416B38)
DEFINE_EMPTY(00435998)
DEFINE_EMPTY(004359DF)
DEFINE_EMPTY(00435AA0)
DEFINE_EMPTY(00435C9C)
DEFINE_EMPTY(004362E6)
DEFINE_EMPTY(004370F8)
DEFINE_EMPTY(0043711E)
DEFINE_EMPTY(0043779F)
DEFINE_FAST_GET(0041A045, 40)
DEFINE_FAST_GET(0041D1E0, 24)
DEFINE_DEBUG_GET(0040C400, 88)
DEFINE_DEBUG_GET(0040ADA0, 92)
